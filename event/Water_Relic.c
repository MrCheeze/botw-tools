-------- EventFlow: Water_Relic --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_OpenPickup', 'Demo_WarpPlayerToDestination', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_AdvanceQuest', 'Demo_ResetGimmick', 'Demo_DeleteAllIceMakerForDemo', 'Demo_WarpPlayerToActor', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem', 'CheckWeather', 'HasPorchItem', 'CheckEquipArmorSeriesType', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayerWait', 'Demo_PlayerGoStraightAhead', 'Demo_Unequip', 'Demo_PlayerZoraRide', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_PlayerHorseGetOff', 'Demo_TrigNullASPlay', 'Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora004[Daijin01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_TrigNullASPlay', 'Demo_WarpToAnchor', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_TrigNullASPlay', 'Demo_WarpToAnchor', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince03]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[player_system]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Lynel_Junior_Mountain
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_MtRaizyuTurn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora030[RelicBattleZora]
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[anather_systme]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_Ctrl', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[PlayerWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora003_Talk() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo344_0', 'EntryPointName': 'Demo344_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void Ready_Npc_ZoraB001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
        Event87:
        Npc_ZoraB001[Prince01].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_F002'})
    } else {
        Npc_ZoraB001[Prince01].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_F001'})
        goto Event87
    }
}

void Ready_Npc_Zora004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    Npc_Zora004[Daijin01].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_F001'})
}

void Step1_Npc_Zora004_Talk() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event219:
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 150.89300537109375, 'DestinationX': 3302.697265625, 'DestinationY': 244.2703094482422, 'DestinationZ': -472.2724609375})
        Npc_Zora004[Daijin01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'DaijinWarp'})
        Npc_ZoraB001[Prince01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

        fork {
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsConfront': True, 'ObjectId': 1, 'TurnPosition': [0.0, 0.0, 0.0]})
            Npc_Zora004[Daijin01].Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Talk', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
        } {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'Talk', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        } {
            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'ObjectId': 1, 'IsConfront': True, 'IsValid': True, 'IsWaitFinish': True})
            Npc_ZoraB001[Prince01].Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Talk', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
        }

        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

        call camera_intro()

        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkHello', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        }

        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_001', 'IsCloseMessageDialog': True})

        call camera_S_bust()


        fork {
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'IsConfront': True, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'FaceId': 2})
        } {
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_002'})
        }


        call camera_M_L_S_middle()


        fork {
            Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_018', 'ASName': 'Talk_Surprise_Small', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
        } {
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'FaceId': 2, 'IsValid': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

            call camera_M_L_S_closetoM()

        }

        Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprise_Small', 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_026', 'IsCloseMessageDialog': True})

        call camera_L_M_S()

        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
        Npc_Zora004[Daijin01].Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_020', 'ASName': '', 'IsCloseMessageDialog': False})

        call camera_M_looksup_Mi_midium()

        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_021', 'ASName': ''})

        fork {

            call camera_L_looks_Mi()

        } {
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_010'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameROMPlayer.Demo_TrigNullASPlay({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'DemoWait'})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsValid': True, 'TurnPosition': [3305.81005859375, 250.89999389648438, -479.1700134277344], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 3303.5, 'Pattern1PosY': 247.6999969482422, 'Pattern1PosZ': -473.7799987792969, 'Pattern1AtX': 3305.56005859375, 'Pattern1AtY': 247.57000732421875, 'Pattern1AtZ': -478.510009765625, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

        fork {
            SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'ExceptGroups': '', 'FadeInSec': 5.0, 'StartDelaySec': 0.0, 'FadeOutSec': 4.0})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
        } {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 3303.5, 'Pattern1PosY': 247.6999969482422, 'Pattern1PosZ': -473.7799987792969, 'Pattern1AtX': 3305.389892578125, 'Pattern1AtY': 249.74000549316406, 'Pattern1AtZ': -478.1300048828125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'Count': 150.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_Zora004[Daijin01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 3284.85009765625, 'DestinationY': 245.8800048828125, 'DestinationZ': -456.9700012207031, 'DirectionY': 0.0})
            Npc_ZoraB001[Prince01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 3282.530029296875, 'DestinationY': 245.8800048828125, 'DestinationZ': -459.07000732421875, 'DirectionY': 0.0})
        }

        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo309_2', 'EntryPointName': 'HerosMemoryStart_Zora'})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'FaceId': 1})
        Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'DaijinWarp'})
        Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': ''})
        Npc_Zora004[Daijin01].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': True})
        } {
            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'UniqueName': '', 'ObjectId': 0, 'ActorName': '', 'FaceId': 2})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call camera_mission_start()

        EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_013'})
        } {
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01'})
        }


        fork {
            Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_019'})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        }


        fork {
            Npc_ZoraB001[Prince01].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Pleasure', 'IsOnlyFace': True})
        } {
            GameROMPlayer.Demo_TrigNullASPlay({'ASName': 'Talk', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        }


        call camera_M_looksup_Mi_midium()

        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_017', 'ASName': 'Talk_Surprise_Small', 'IsCloseMessageDialog': False})

        call camera_M_L_S()

        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_022', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step1'})
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {

            fork {
                Npc_ZoraB001[Prince01].Demo_LookAtObject({'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01'})
            } {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsValid': False, 'IsTurnToLookAtPos': False})
            }


            call camera_S_talkto_M()


            fork {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ObjectId': 1, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsConfront': True})
            } {
                Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsConfront': True})
            }

            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_027'})
            Event758:

            fork {
                Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 0})
                Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_014', 'IsCloseMessageDialog': True})
            } {

                call camera_S_talkto_M_wide()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                call camera_M_looks_L()

            }


            fork {
                Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_023', 'ASName': ''})
            } {

                call camera_M_looks_L_surprise()

            }


            call camera_Mi_eye_S_L_M()


            fork {
                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_011', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': ''})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 1})
            }

            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_015', 'IsCloseMessageDialog': False})

            call camera_S_requires_strongly_M()

            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_016', 'ASName': 'Talk_Prince_Joy'})

            fork {

                call camera_M_Lback()

                Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 0})
                Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_002', 'IsCloseMessageDialog': True, 'ASName': ''})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_ZoraB001[Prince01].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            fork {
                Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 2, 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125]})
                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsConfront': True, 'ObjectId': 2, 'FaceId': 0, 'TurnPosition': [3305.949951171875, 244.2899932861328, -475.5199890136719]})
            } {

                call camera_Mi_looksdown_M()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

                call camera_M_view()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            }


            fork {
                Npc_Zora004[Daijin01].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_024', 'ASName': 'Talk_Wait'})
            } {

                call camera_M_looksup_Mi_close()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            }


            call camera_M_looksup_Mi_midium()

            Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 2, 'TurnPosition': [3305.8701171875, 244.0, -479.20001220703125]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsConfront': True, 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ObjectId': 1})
            Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_025'})
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'AnchorAction9', 'ObjectId': 2, 'IsValid': True, 'UniqueName': '', 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3757.0, 642.0, -417.0], 'IsWaitFinish': False, 'IsConfront': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            call camera_MSL_looks_Mountain()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': 'AnchorAction9', 'ObjectId': 2, 'IsValid': True, 'UniqueName': '', 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsConfront': False, 'TurnPosition': [3757.0, 642.0, -417.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [3757.0, 642.0, -417.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

            fork {
                Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_010', 'IsCloseMessageDialog': False})
            } {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'TurnPosition': [3757.0, 642.0, -417.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            }

            Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_011'})
            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsConfront': True, 'ObjectId': 1})

            fork {

                fork {
                    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                    call camera_S_surprise()

                    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                } {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_003', 'IsCloseMessageDialog': True})
                }


                call camera_S_talkto_Lstrong()

                Npc_ZoraB001[Prince01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': 'Prince01'})
                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_017'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 1})
            } {
                EventSystemActor[PlayerWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': 'Prince01', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'TurnPosition': [3303.9599609375, 244.35000610351562, -475.55999755859375], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'FaceId': 2})
                EventSystemActor[PlayerWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': 'Prince01', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_ZoraB001', 'ObjectId': 1, 'IsValid': True, 'FaceId': 0, 'TurnPosition': [3304.110107421875, 244.2100067138672, -475.6400146484375], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            }


            fork {

                call camera_M_looksup_Mi_midium()

                Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'ObjectId': 0})
                Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_016', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Zora004', 'IsValid': True, 'TurnPosition': [3303.9599609375, 244.35000610351562, -475.55999755859375], 'ObjectId': 0, 'FaceId': 2, 'UniqueName': 'Daijin01'})
            }


            call camera_mission_start()

            if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 20}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingS', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})

                fork {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_020'})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': 'Prince01', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'TurnPosition': [3303.9599609375, 244.35000610351562, -475.55999755859375], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'FaceId': 2})
                }


                call camera_S_talkto_Lstrong()

                Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsConfront': True, 'IsWaitFinish': True, 'ObjectId': 0})
                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_021'})
                Event649:
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step1_2'})
                    Event952:

                    call camera_mission_start()

                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_009', 'ASName': 'Talk_Prince_Joy'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': 'AnchorAction9', 'ObjectId': 2, 'IsValid': True, 'UniqueName': '', 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3757.0, 642.0, -417.0], 'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                    call camera_mission_start_end()

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelSearch_Ready'})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
                    Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})
                    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BoysNotRun'})
                } else {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_004', 'IsCloseMessageDialog': False})
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_022'})
                    goto Event649
                }
            } else {
                Npc_ZoraB001[Prince01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsWaitFinish': True, 'ObjectId': 1})
                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_007', 'IsCloseMessageDialog': True})

                call camera_S_talkto_Lstrong()


                fork {
                    Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsConfront': True, 'IsWaitFinish': True, 'ObjectId': 0})
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_018', 'ASName': ''})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': 'Prince01', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'TurnPosition': [3303.9599609375, 244.35000610351562, -475.55999755859375], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'FaceId': 2})
                }

                Event323:
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step1_1'})
                    goto Event952
                } else {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_004', 'IsCloseMessageDialog': False})
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_005'})
                    goto Event323
                }
            }
        } else {
            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
        }
    } else {
        goto Event219
    }
}

void Step1_Npc_Zora003_Talk() {

    call InitTalk.InitTalkKingZora({'Self': ActorIdentifier(name="Npc_Zora003"), 'Arg_Turn': 2})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_ArmorSend'}) {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S1_001'})
    } else {

        call ZoraArmorSend()

    }
}

void Step2_Npc_ZoraB001_Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Demo344_2', 'DemoName': 'Demo344_2', 'EndFade': 0})
}

void Step2_Npc_Zora003_Talk() {

    call InitTalk.InitTalkKingZora({'Self': ActorIdentifier(name="Npc_Zora003"), 'Arg_Turn': 2})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_ArmorSend'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_SunnyKingTalk'}) {
                    Event188:
                    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_KingTalk01'}) {
                        Event189:
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_009'})
                    } else {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_001'})
                        Event678:
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_011', 'IsCloseMessageDialog': True})
                        if !EventSystemActor.GeneralChoice2() {
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_003'})
                            Event182:
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_008', 'IsCloseMessageDialog': True})
                            if !EventSystemActor.GeneralChoice2() {
                                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_004'})
                                Event186:
                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_006'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_KingTalk01'})
                            } else {
                                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_005'})
                                goto Event186
                            }
                        } else {
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_007'})
                            goto Event182
                        }
                    }
                } else {
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S2_010'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_SunnyKingTalk'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_KingTalk01'}) {
                        goto Event189
                    } else {
                        goto Event678
                    }
                }
              case [1, 2, 3]:
                goto Event188
            }
        } else
        goto Event188
    } else {

        call ZoraArmorSend()

    }
}

void Step2_Npc_Zora004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S2_002'})
          case [1, 2, 3]:
            Event165:
            Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S2_001'})
        }
    } else {
        goto Event165
    }
}

void Finish_Npc_Zora003_Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo344_4', 'EntryPointName': 'Demo344_4', 'EndFade': 0})
}

void Finish_Npc_ZoraB001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_F_002'})
}

void Finish_Npc_Zora004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_F_001'})
}

void Water_Relic_Retire() {

    call Common.AirStartUP_Player()

    Npc_Zora030[RelicBattleZora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_016', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Zora030[RelicBattleZora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_021', 'IsCloseMessageDialog': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'BgmName': 'RemainsWaterBattleBgm', 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'ibuturetry', 'WarpDestMapName': 'I-4'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'PSavePosNotUpdate', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Demo344_2_LatterHalf'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_PlayerInBattleArea'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Demo_Test01'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BattleTime'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_firstPrinceRide'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step2'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BreakWeakPoint1'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BreakWeakPoint2'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BreakWeakPoint3'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BreakWeakPoint4'})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Water_Relic', 'StepName': 'Step2'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 2, 'IsResetCamera': False, 'AdditionalResetActor': 'RemainsWater,IbutsuWaterFall'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3571.113525390625, 'Pattern1PosY': 318.65673828125, 'Pattern1PosZ': -400.0384521484375, 'Pattern1AtX': 3572.232177734375, 'Pattern1AtY': 318.6311950683594, 'Pattern1AtZ': -397.25494384765625, 'Pattern1Fovy': 54.999996185302734, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } else {
        Npc_Zora030[RelicBattleZora].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_022'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 2, 'Destination': [3598.550048828125, 316.0, -331.30999755859375], 'RotationY': 15.0, 'AdditionalResetActor': 'RemainsWater,IbutsuWaterFall'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BattleTime'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BattleRetire'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo_Test01'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        Npc_Zora030[RelicBattleZora].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationY': 316.0, 'DestinationX': 3598.550048828125, 'DestinationZ': -330.30999755859375, 'DirectionY': 15.0})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayerToActor({'ActorName': 'Npc_Zora030', 'IsWaitFinish': True, 'DestinationY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'DestinationX': 0.0, 'DestinationZ': -0.5, 'DirectionY': 15.0, 'OnGround': False, 'RelativeDist': 0.0, 'IsOffsetBaseTargetActor': False})
        GameROMPlayer.Demo_PlayerZoraRide({'IsWaitFinish': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3595.879638671875, 'Pattern1PosY': 317.53839111328125, 'Pattern1PosZ': -337.2273864746094, 'Pattern1AtX': 3597.8779296875, 'Pattern1AtY': 317.4836730957031, 'Pattern1AtZ': -330.5337829589844, 'Pattern1Fovy': 50.00001907348633, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': False, 'DispMode': 'Auto', 'Frame': 0})
    }
}

void Ready_Npc_Zora003_Near() {
    Npc_Zora003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_Near'})
}

void Finish_Npc_Zora003_Near() {
    Npc_Zora003.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_F_Near', 'IsChecked': True})
}

void ZoraArmorSend() {
    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S1_002'})
    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_006_Upper'}) {

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_006_Upper'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_ArmorSend'})
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S1_004'})
    } else {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S1_003'})
    }
}

void RinelMt() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeOutSec': 2.0, 'FadeInSec': 1.0, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'Pattern1PosX': 3880.050048828125, 'Pattern1PosY': 609.8699951171875, 'Pattern1PosZ': -642.02001953125, 'Pattern1AtX': 3890.389892578125, 'Pattern1AtY': 605.0, 'Pattern1AtZ': -616.7000122070312, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'MotionMode': 1, 'Count': 120.0, 'Pattern1PosX': 3889.090087890625, 'Pattern1PosY': 609.8699951171875, 'Pattern1PosZ': -644.52001953125, 'Pattern1AtX': 3873.64990234375, 'Pattern1AtY': 605.8699951171875, 'Pattern1AtZ': -621.77001953125, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            Event715:
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [3844.530029296875, 591.5, -600.760009765625], 'ObjectId': 0, 'ActorName': 'Enemy_Lynel_Junior_Mountain'})
        } else {
            goto Event715
        }
    } {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RinelMt_Enter'})
        Enemy_Lynel_Junior_Mountain.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Body_Move_Normal_Gear1', 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'Pattern1PosX': 3799.199951171875, 'Pattern1PosY': 596.5700073242188, 'Pattern1PosZ': -591.9600219726562, 'Pattern1AtX': 3797.919921875, 'Pattern1AtY': 593.989990234375, 'Pattern1AtZ': -584.0499877929688, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    GameRomCamera.Demo_MovePosFlow({'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'Pattern1PosX': 3915.050048828125, 'Pattern1PosY': 595.030029296875, 'Pattern1PosZ': -575.6199951171875, 'Pattern1AtX': 3904.679931640625, 'Pattern1AtY': 594.8599853515625, 'Pattern1AtZ': -577.030029296875, 'Pattern1Fovy': 16.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    Enemy_Lynel_Junior_Mountain.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'ASName': 'Search', 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        Enemy_Lynel_Junior_Mountain.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'ASName': 'BattleWait', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
        EventSystemActor[anather_systme].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Enemy_Lynel_Junior_Mountain.Demo_MtRaizyuTurn({'IsWaitFinish': True, 'TargetPos': [3831.590087890625, 593.969970703125, -613.6599731445312]})
        Enemy_Lynel_Junior_Mountain.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'ASName': 'BattleWait', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    } {
        EventSystemActor[player_system].Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': -146.33299255371094, 'DestinationX': 3826.283447265625, 'DestinationY': 592.338623046875, 'DestinationZ': -606.61328125})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'WaitAttention', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': 3854.97998046875, 'Pattern1PosY': 593.02001953125, 'Pattern1PosZ': -586.9400024414062, 'Pattern1AtX': 3858.7099609375, 'Pattern1AtY': 596.5800170898438, 'Pattern1AtZ': -582.72998046875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Enemy_Lynel_Junior_Mountain.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'ClothWarpMode': -2, 'ASName': 'HoldWeapon', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
        EventSystemActor[player_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'TargetActor1': 3, 'TargetActor2': -1, 'FovyAppendMode': 1, 'ReviseModeEnd': 0, 'UniqueName1': '', 'StartCalcOnly': True, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Cushion': 0.800000011920929, 'MotionMode': 1, 'Count': 45.0, 'ActorName1': 'Enemy_Lynel_Junior_Mountain', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 3825.300048828125, 'Pattern1PosY': 593.4600219726562, 'Pattern1PosZ': -609.969970703125, 'Pattern1AtX': 3829.3701171875, 'Pattern1AtY': 593.8599853515625, 'Pattern1AtZ': -605.9099731445312, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Step1_1_Npc_Zora003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_ArmorSend'}) {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_S1_005'})
    } else {

        call ZoraArmorSend()

    }
}

void Step1_1_Npc_ZoraB001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {
        Event568:
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            Event1017:
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 150.89300537109375, 'DestinationX': 3302.697265625, 'DestinationY': 244.2703094482422, 'DestinationZ': -472.2724609375})
            Npc_Zora004[Daijin01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'DaijinWarp'})
            Npc_ZoraB001[Prince01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': ''})

            fork {
                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3305.8701171875, 250.89999389648438, -479.20001220703125], 'ObjectId': 1, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsConfront': True})
            } {
                Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsConfront': True, 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 1})
            } {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            }

            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

            call camera_S_talkto_M()

            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_014', 'IsBecomingSpeaker': False})
            goto Event758
        } else {
            goto Event1017
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Armor_Get'}) {
        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_012'})
    } else {
        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_024'})
    }
}

void Step1_1_Npc_Zora004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {
        goto Event568
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Zora004[Daijin01].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_013'})
    }
}

void Step1_Npc_ZoraB001_Near() {
    Npc_ZoraB001[Prince01].Demo_TalkASync({'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S1_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
}

void Step1_Npc_Zora004_Near() {
    Npc_Zora004[Daijin01].Demo_TalkASync({'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_S1_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
}

void Step4_Npc_ZoraB001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S45_001'})
}

void Demo177_1_Start() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo177_1', 'EntryPointName': 'Demo177_1', 'EndFade': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceVoiceEvent_town'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo344_0', 'EntryPointName': 'Demo344_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void Water_Relic_Contact_Retry() {

    call Common.AirStartUP_Player()


    fork {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Common:Relic_Contact_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'Destination': [2949.89990234375, 420.3999938964844, 72.93000030517578], 'IsWaitFinish': True, 'RotationY': 0.0, 'SystemResetOption': 2, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3767090141773224, 'Pattern1PosY': 2.064971923828125, 'Pattern1PosZ': -5.476562976837158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
}

void camera_intro() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3303.7119140625, 'Pattern1PosY': 246.35275268554688, 'Pattern1PosZ': -472.3172912597656, 'Pattern1AtX': 3302.045166015625, 'Pattern1AtY': 245.54954528808594, 'Pattern1AtZ': -475.8082275390625, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Cushion': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3304.709228515625, 'Pattern1PosY': 246.35272216796875, 'Pattern1PosZ': -470.1946105957031, 'Pattern1AtX': 3303.04248046875, 'Pattern1AtY': 245.54954528808594, 'Pattern1AtZ': -473.68536376953125, 'Pattern1Fovy': 34.379703521728516, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 90.0, 'Cushion': 5.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_bust() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.6494140625, 'Pattern1PosY': 246.39547729492188, 'Pattern1PosZ': -474.6948547363281, 'Pattern1AtX': 3307.50537109375, 'Pattern1AtY': 247.75387573242188, 'Pattern1AtZ': -473.0980224609375, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_L_M_S() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3304.709228515625, 'Pattern1PosY': 246.35272216796875, 'Pattern1PosZ': -470.1946105957031, 'Pattern1AtX': 3303.04248046875, 'Pattern1AtY': 245.54954528808594, 'Pattern1AtZ': -473.68536376953125, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_L_looks_Mi() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3300.593994140625, 'Pattern1PosY': 245.4740753173828, 'Pattern1PosZ': -471.77386474609375, 'Pattern1AtX': 3301.412109375, 'Pattern1AtY': 245.6594696044922, 'Pattern1AtZ': -472.5163269042969, 'Pattern1Fovy': 42.47960662841797, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3301.935546875, 'Pattern1PosY': 245.4740753173828, 'Pattern1PosZ': -472.81829833984375, 'Pattern1AtX': 3302.975341796875, 'Pattern1AtY': 245.75662231445312, 'Pattern1AtZ': -472.51116943359375, 'Pattern1Fovy': 42.47960662841797, 'Count': 150.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_talkto_M() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3299.181396484375, 'Pattern1PosY': 246.00408935546875, 'Pattern1PosZ': -475.4384765625, 'Pattern1AtX': 3300.410400390625, 'Pattern1AtY': 246.08648681640625, 'Pattern1AtZ': -475.173095703125, 'Pattern1Fovy': 29.42974853515625, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_looks_L() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.052734375, 'Pattern1PosY': 245.86204528808594, 'Pattern1PosZ': -474.8825988769531, 'Pattern1AtX': 3302.262939453125, 'Pattern1AtY': 245.5146026611328, 'Pattern1AtZ': -474.0819396972656, 'Pattern1Fovy': 26.27979850769043, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.052734375, 'Pattern1PosY': 245.86204528808594, 'Pattern1PosZ': -474.8825988769531, 'Pattern1AtX': 3302.274658203125, 'Pattern1AtY': 245.71453857421875, 'Pattern1AtZ': -474.0252990722656, 'Pattern1Fovy': 26.27979850769043, 'Count': 60.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_looks_L_surprise() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.98974609375, 'Pattern1PosY': 245.90826416015625, 'Pattern1PosZ': -472.68017578125, 'Pattern1AtX': 3301.554931640625, 'Pattern1AtY': 246.05870056152344, 'Pattern1AtZ': -476.3580322265625, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.887451171875, 'Pattern1PosY': 245.90826416015625, 'Pattern1PosZ': -473.11962890625, 'Pattern1AtX': 3301.468505859375, 'Pattern1AtY': 246.14585876464844, 'Pattern1AtZ': -476.79901123046875, 'Pattern1Fovy': 34.379703521728516, 'Count': 10.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.407958984375, 'Pattern1PosY': 245.90818786621094, 'Pattern1PosZ': -473.8032531738281, 'Pattern1AtX': 3303.229736328125, 'Pattern1AtY': 244.8883514404297, 'Pattern1AtZ': -470.0762634277344, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.145751953125, 'Pattern1PosY': 245.90818786621094, 'Pattern1PosZ': -474.9472961425781, 'Pattern1AtX': 3302.967529296875, 'Pattern1AtY': 244.8883514404297, 'Pattern1AtZ': -471.2203063964844, 'Pattern1Fovy': 34.379703521728516, 'Count': 150.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.887451171875, 'Pattern1PosY': 245.90826416015625, 'Pattern1PosZ': -473.11962890625, 'Pattern1AtX': 3301.468505859375, 'Pattern1AtY': 246.14585876464844, 'Pattern1AtZ': -476.79901123046875, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Cushion': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void camera_Mi_eye_S_L_M() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3304.1240234375, 'Pattern1PosY': 253.98333740234375, 'Pattern1PosZ': -483.0244445800781, 'Pattern1AtX': 3304.445068359375, 'Pattern1AtY': 250.0097198486328, 'Pattern1AtZ': -478.9426574707031, 'Pattern1Fovy': 33.11970901489258, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_requires_strongly_M() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3303.986328125, 'Pattern1PosY': 247.82147216796875, 'Pattern1PosZ': -470.9869689941406, 'Pattern1AtX': 3302.93505859375, 'Pattern1AtY': 245.39224243164062, 'Pattern1AtZ': -476.041259765625, 'Pattern1Fovy': 35.09967803955078, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_Lback() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.31005859375, 'Pattern1PosY': 245.4515838623047, 'Pattern1PosZ': -470.3082275390625, 'Pattern1AtX': 3302.152587890625, 'Pattern1AtY': 245.74765014648438, 'Pattern1AtZ': -476.00384521484375, 'Pattern1Fovy': 27.17974281311035, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_talkto_M_wide() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3299.181396484375, 'Pattern1PosY': 246.00411987304688, 'Pattern1PosZ': -475.4386291503906, 'Pattern1AtX': 3300.39111328125, 'Pattern1AtY': 245.9663848876953, 'Pattern1AtZ': -475.0881652832031, 'Pattern1Fovy': 39.149635314941406, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 60.0, 'Cushion': 5.0, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_L_S() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3297.901611328125, 'Pattern1PosY': 245.88185119628906, 'Pattern1PosZ': -472.66912841796875, 'Pattern1AtX': 3301.64990234375, 'Pattern1AtY': 245.8820037841797, 'Pattern1AtZ': -473.9170227050781, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_L_S_closetoM() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3303.888916015625, 'Pattern1PosY': 246.9452667236328, 'Pattern1PosZ': -473.58892822265625, 'Pattern1AtX': 3301.357421875, 'Pattern1AtY': 245.76670837402344, 'Pattern1AtZ': -476.38360595703125, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 90.0, 'Cushion': 5.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_looksup_Mi() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.553955078125, 'Pattern1PosY': 245.4115447998047, 'Pattern1PosZ': -474.03857421875, 'Pattern1AtX': 3302.088623046875, 'Pattern1AtY': 248.09957885742188, 'Pattern1AtZ': -478.9188232421875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_MSL_looks_Mountain() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3296.044921875, 'Pattern1PosY': 245.08523559570312, 'Pattern1PosZ': -475.1349182128906, 'Pattern1AtX': 3298.8876953125, 'Pattern1AtY': 245.96237182617188, 'Pattern1AtZ': -475.3135986328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3293.72802734375, 'Pattern1PosY': 245.14535522460938, 'Pattern1PosZ': -475.4226379394531, 'Pattern1AtX': 3296.56494140625, 'Pattern1AtY': 246.02381896972656, 'Pattern1AtZ': -475.68011474609375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 120.0, 'Cushion': 5.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_surprise() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3303.4287109375, 'Pattern1PosY': 246.52459716796875, 'Pattern1PosZ': -474.31915283203125, 'Pattern1AtX': 3308.356201171875, 'Pattern1AtY': 248.79440307617188, 'Pattern1AtZ': -472.5408630371094, 'Pattern1Fovy': 45.17955780029297, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_looksup_Mi_midium() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.22119140625, 'Pattern1PosY': 245.45404052734375, 'Pattern1PosZ': -473.6098937988281, 'Pattern1AtX': 3302.667236328125, 'Pattern1AtY': 247.59130859375, 'Pattern1AtZ': -478.88507080078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_S_talkto_Lstrong() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3300.825439453125, 'Pattern1PosY': 244.8551788330078, 'Pattern1PosZ': -472.4796447753906, 'Pattern1AtX': 3304.42919921875, 'Pattern1AtY': 246.55331420898438, 'Pattern1AtZ': -472.93115234375, 'Pattern1Fovy': 26.459762573242188, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_mission_start() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3296.269287109375, 'Pattern1PosY': 245.8079833984375, 'Pattern1PosZ': -474.9974060058594, 'Pattern1AtX': 3299.21533203125, 'Pattern1AtY': 245.7272491455078, 'Pattern1AtZ': -474.55450439453125, 'Pattern1Fovy': 30.239736557006836, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_mission_start_end() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3280.421630859375, 'Pattern1PosY': 249.99639892578125, 'Pattern1PosZ': -470.35888671875, 'Pattern1AtX': 3286.37939453125, 'Pattern1AtY': 249.54808044433594, 'Pattern1AtZ': -470.8995056152344, 'Pattern1Fovy': 32.03968811035156, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 20}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3281.87060546875, 'Pattern1PosY': 249.72023010253906, 'Pattern1PosZ': -470.4835205078125, 'Pattern1AtX': 3287.2880859375, 'Pattern1AtY': 250.53160095214844, 'Pattern1AtZ': -469.2573547363281, 'Pattern1Fovy': 32.03968811035156, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3280.421630859375, 'Pattern1PosY': 249.99639892578125, 'Pattern1PosZ': -470.35888671875, 'Pattern1AtX': 3285.6201171875, 'Pattern1AtY': 252.97178649902344, 'Pattern1AtZ': -470.6894836425781, 'Pattern1Fovy': 32.03968811035156, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }
}

void camera_Mi_looksdown_M() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3309.00927734375, 'Pattern1PosY': 254.2233123779297, 'Pattern1PosZ': -479.8424072265625, 'Pattern1AtX': 3305.33349609375, 'Pattern1AtY': 249.9685516357422, 'Pattern1AtZ': -478.8804626464844, 'Pattern1Fovy': 26.819753646850586, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_looksup_Mi_close() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3304.85302734375, 'Pattern1PosY': 247.05581665039062, 'Pattern1PosZ': -476.1976623535156, 'Pattern1AtX': 3299.44873046875, 'Pattern1AtY': 245.2672882080078, 'Pattern1AtZ': -475.8397216796875, 'Pattern1Fovy': 27.80976676940918, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3304.498779296875, 'Pattern1PosY': 246.9132080078125, 'Pattern1PosZ': -476.1102600097656, 'Pattern1AtX': 3299.03662109375, 'Pattern1AtY': 245.31407165527344, 'Pattern1AtZ': -475.7352600097656, 'Pattern1Fovy': 27.80976676940918, 'Cushion': 5.0, 'Count': 90.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_view() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3302.453125, 'Pattern1PosY': 246.73648071289062, 'Pattern1PosZ': -474.8558044433594, 'Pattern1AtX': 3305.46142578125, 'Pattern1AtY': 249.37754821777344, 'Pattern1AtZ': -478.9184265136719, 'Pattern1Fovy': 38.15961837768555, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_M_L_S_middle() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3298.110107421875, 'Pattern1PosY': 245.4374237060547, 'Pattern1PosZ': -474.7065124511719, 'Pattern1AtX': 3302.040771484375, 'Pattern1AtY': 245.66653442382812, 'Pattern1AtZ': -474.3831787109375, 'Pattern1Fovy': 34.379703521728516, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}
