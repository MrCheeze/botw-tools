-------- EventFlow: DontDamageFlower --------

Actor: Npc_Challenge093Lady
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_BecomeSpeaker', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_IncreaseGameDataInt', 'Demo_ResetGimmick', 'Demo_CallDemo']
queries: ['CheckFlag', 'CheckGameDataInt', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayerHorseGetOff', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Restart() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayer({'WarpDestPosName': 'DontDamageFlower_Restart', 'IsWaitFinish': True, 'WarpDestMapName': 'F-5'})
    Npc_Challenge093Lady.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': 'Npc_Challenge093Lady_Pos'})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
}

void StepOnTheFlowers() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'DontDamageFlower_IsMiss'})
    if EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_OneMiss'}) {
        Event82:
        if EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_Activated'}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DontDamageFlower_MissCount', 'Value': 0, 'Operator': 'LessThanOrEqualTo'}) {

                call OkobaTalkCam()

                Npc_Challenge093Lady.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_1', 'IsOverWriteLabelActorName': False})
                Event36:

                call Restart()

                EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'DontDamageFlower_MissCount', 'Value': 1})
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DontDamageFlower_MissCount', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {

                call OkobaTalkCam()

                Npc_Challenge093Lady.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_2', 'IsOverWriteLabelActorName': False})
                goto Event36
            } else {
                EventSystemActor.Demo_CallDemo({'DemoName': 'Demo331_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo331_0', 'EndFade': 0})
                EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'DontDamageFlower_MissCount', 'Value': -2})
            }
        } else {

            call OkobaTalkCam()

            Npc_Challenge093Lady.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_4'})

            call Restart()

            GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': True, 'NoConnect': False})
            Npc_Challenge093Lady.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Npc_Challenge093Lady.Demo_Talk({'MessageId': 'EventFlowMsg/DontDamageFlower:Ready_Intro2', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DontDamageFlower_Activated'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'DontDamageFlower_OneMiss', 'IsWaitFinish': True})
        goto Event82
    }
}

void Ready_Npc_Challenge093Lady_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Challenge093Lady.Demo_Talk({'MessageId': 'EventFlowMsg/DontDamageFlower:Ready_Intro', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DontDamageFlower_Activated'})
}

void Finish_Npc_Challenge093Lady_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Challenge093Lady.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Game_Intro', 'IsOverWriteLabelActorName': False})
}

void OkobaTalkCam() {
    Npc_Challenge093Lady.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Challenge093Lady.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 2, 'AtAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 2, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'TargetActor1': 3, 'ActorName1': 'Npc_Challenge093Lady', 'Pattern1AtZ': 0.0, 'StartCalcOnly': False, 'Pattern1AtX': 0.20000000298023224, 'Pattern1PosZ': 1.5, 'Pattern1PosX': -0.5, 'Pattern1PosY': 1.100000023841858, 'Pattern1AtY': 1.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'UniqueName': 'DontDamageFlower_RestartHorse', 'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True})
    }
}

void Ready_Npc_Challenge093Lady_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_OneMiss'}) {
        Npc_Challenge093Lady.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Near01', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Finish_Npc_Challenge093Lady_Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_OneMiss'}) {
        Npc_Challenge093Lady.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
