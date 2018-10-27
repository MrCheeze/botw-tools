-------- EventFlow: Relief_Landing --------

Actor: Npc_Musician_015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_015_Near() {
    Npc_Musician_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_Near', 'DispFrame': 300, 'IsChecked': True})
}

void Ready_Npc_Musician_015_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_015.IsOnInstEventFlag() {

        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_015")})

        Event58:

        call Sing()

        if EventSystemActor.CheckFlag({'FlagName': 'Relief_Landing_Activated'}) {
            Event39:
            if EventSystemActor.CheckFlag({'FlagName': 'Relief_Landing_Act'}) {
                if !EventSystemActor.CheckFlag({'FlagName': 'Relief_Landing_Finish'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Landing_Finish'})
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Landing_Activated'})
            goto Event39
        }
    } else {
        Npc_Musician_015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_004', 'IsCloseMessageDialog': True})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_015")})

        goto Event58
    }
}

void Finish_Npc_Musician_015_Near() {
    Npc_Musician_015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_Near', 'DispFrame': 300, 'IsChecked': False})
}

void Finish_Npc_Musician_015_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_015")})


    call Sing()

}

void EntryPoint1() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4226.5556640625, 'Pattern1PosY': 112.99696350097656, 'Pattern1PosZ': 322.4325866699219, 'Pattern1AtX': 4228.62109375, 'Pattern1AtY': 111.1034164428711, 'Pattern1AtZ': 317.4658203125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithograph()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': True, 'ObjectId': 2, 'TurnPosition': [3141.10009765625, 280.0, -422.29998779296875], 'TurnDirection': 170.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Relief_Landing_paras'})
    if EventSystemActor.CheckFlag({'FlagName': 'Relief_Landing_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Landing_Finish'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

        call BloodyMoonRelief.Musician_Check()

    }
}

void After_Relief_Landing_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Musician_015.Demo_Talk({'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4164.37109375, 'Pattern1PosY': 136.94976806640625, 'Pattern1PosZ': 390.7129211425781, 'Pattern1AtX': 4164.94873046875, 'Pattern1AtY': 133.57293701171875, 'Pattern1AtZ': 396.57855224609375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 1, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'Count': 145.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician015Bgm'})
    Npc_Musician_015.Demo_Talk({'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_R_004', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4185.68212890625, 'Pattern1PosY': 119.23799133300781, 'Pattern1PosZ': 353.15606689453125, 'Pattern1AtX': 4197.21923828125, 'Pattern1AtY': 116.22212982177734, 'Pattern1AtZ': 342.46673583984375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 150.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Npc_Musician_015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_R_008', 'IsCloseMessageDialog': True})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.0, 'IsWaitFinish': True, 'BgmName': 'Musician015Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    Npc_Musician_015.Demo_Talk({'MessageId': 'EventFlowMsg/Relief_Landing:Npc_Musician_015_R_006', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void cameraimagawa4() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4229.01318359375, 'Pattern1PosY': 132.34414672851562, 'Pattern1PosZ': 504.3121337890625, 'Pattern1AtX': 4223.0126953125, 'Pattern1AtY': 128.40191650390625, 'Pattern1AtZ': 502.4759826660156, 'Pattern1Fovy': 50.00001907348633, 'Cushion': 100.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Para_Rock_3'})
    if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_1'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_2'}) {

            call cameraimagawa2()

        } else {
            Event144:
            EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else {
        goto Event144
    }
}

void cameraimagawa3() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4083.37451171875, 'Pattern1PosY': 140.55838012695312, 'Pattern1PosZ': 423.6237487792969, 'Pattern1AtX': 4087.33544921875, 'Pattern1AtY': 136.54978942871094, 'Pattern1AtZ': 428.488037109375, 'Pattern1Fovy': 50.00001907348633, 'Count': 100.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2, 'CollisionInterpolateSkip': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Para_Rock_2'})
    if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_1'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_3'}) {

            call cameraimagawa2()

        } else {
            Event142:
            EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else {
        goto Event142
    }
}

void cameraimagawa2() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4152.87255859375, 'Pattern1PosY': 141.07394409179688, 'Pattern1PosZ': 349.93780517578125, 'Pattern1AtX': 4154.94287109375, 'Pattern1AtY': 138.0257110595703, 'Pattern1AtZ': 356.11572265625, 'Pattern1Fovy': 50.00001907348633, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'MotionMode': 0, 'Cushion': 0.0, 'PosAppendMode': 1, 'AtAppendMode': 1, 'ActorIgnoringCollision': -1, 'Count': 100.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4247.00244140625, 'Pattern1PosY': 113.30156707763672, 'Pattern1PosZ': 300.71844482421875, 'Pattern1AtX': 4243.4443359375, 'Pattern1AtY': 112.34673309326172, 'Pattern1AtZ': 304.5609130859375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'Count': 200.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'paras_cameradelete'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void cameraimagawa1() {

    call Common.AirStartUP_Player()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4172.654296875, 'Pattern1PosY': 109.10870361328125, 'Pattern1PosZ': 442.3126220703125, 'Pattern1AtX': 4153.06591796875, 'Pattern1AtY': 115.88477325439453, 'Pattern1AtZ': 480.4040222167969, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4170.38427734375, 'Pattern1PosY': 140.45700073242188, 'Pattern1PosZ': 449.14923095703125, 'Pattern1AtX': 4153.06591796875, 'Pattern1AtY': 115.88477325439453, 'Pattern1AtZ': 480.4040222167969, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'AtAppendMode': 1, 'IsWaitFinish': True, 'ReviseModeEnd': 0, 'Count': 40.0, 'CollisionInterpolateSkip': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4196.8046875, 'Pattern1PosY': 135.69073486328125, 'Pattern1PosZ': 551.6179809570312, 'Pattern1AtX': 4153.06591796875, 'Pattern1AtY': 115.884765625, 'Pattern1AtZ': 480.4040222167969, 'Pattern1Fovy': 50.00001907348633, 'Count': 90.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Para_Rock_1'})
    if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_2'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Para_Rock_3'}) {

            call cameraimagawa2()

        } else {
            Event139:
            EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else {
        goto Event139
    }
}
