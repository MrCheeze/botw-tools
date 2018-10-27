-------- EventFlow: GoronsRock --------

Actor: Npc_Goron010[Father_GoronsRock]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron009[Son_GoronsRock]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag', 'Demo_BecomeSpeaker']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_FlagOFF', 'Demo_WarpPlayer', 'Demo_CallDemo']
queries: ['CheckFlag', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_Unequip', 'Demo_Talk', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_Goron010[Father_GoronsRock_city]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron010[Father_join_Demo327_0]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Goron010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk01', 'IsOverWriteLabelActorName': False})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk14', 'IsCloseMessageDialog': True})
        Event205:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk16', 'IsCloseMessageDialog': True})
            Event207:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk24'})
            Npc_Goron010[Father_GoronsRock_city].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Activated'})
          case 1:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk20'})
            goto Event207
          case 2:
            Event204:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk23'})
            Npc_Goron010[Father_GoronsRock_city].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
        }
      case 1:
        Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk15', 'IsCloseMessageDialog': True})
        goto Event205
      case 2:
        goto Event204
    }
}

void Ready_Npc_Goron009_Near() {
    Npc_Goron009[Son_GoronsRock].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Near01', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Goron009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk01', 'IsOverWriteLabelActorName': False})
    Npc_Goron009[Son_GoronsRock].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
}

void Step005_Npc_Goron009_Talk() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-2', 'WarpDestPosName': 'GoronsRock_start', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2041.779052734375, 'Pattern1PosY': 524.8678588867188, 'Pattern1PosZ': -2040.1019287109375, 'Pattern1AtX': 2044.9056396484375, 'Pattern1AtY': 522.7794189453125, 'Pattern1AtZ': -2037.9000244140625, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})
    } {
        Npc_Goron009[Son_GoronsRock].Demo_BecomeSpeaker({'IsWaitFinish': True})
    }

    Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Step005'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Goron010[Father_GoronsRock].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Goron_Appearance'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_Goron010', 'UniqueName': 'Father_GoronsRock', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    } {
        Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk02', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
    }

    Npc_Goron010[Father_GoronsRock].Demo_MoveToAnchor({'ASKeyName': 'Walk', 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Goron_Arrival001', 'IsWaitFinish': False, 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2032.331298828125, 'Pattern1PosY': 526.1580810546875, 'Pattern1PosZ': -2038.42333984375, 'Pattern1AtX': 2038.0174560546875, 'Pattern1AtY': 524.6721801757812, 'Pattern1AtZ': -2039.705322265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'TargetActor2': -1, 'ActorName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        Npc_Goron010[Father_GoronsRock].Demo_MoveToAnchor({'ASKeyName': 'Walk', 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Goron_Arrival001', 'IsWaitFinish': True, 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
        Npc_Goron010[Father_GoronsRock].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [2045.0, 521.0, -2038.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 4, 'IsConfront': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2039.92529296875, 'Pattern1PosY': 525.1893920898438, 'Pattern1PosZ': -2035.0487060546875, 'Pattern1AtX': 2043.05322265625, 'Pattern1AtY': 523.592041015625, 'Pattern1AtZ': -2038.5003662109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_Goron010', 'UniqueName': 'Father_GoronsRock', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    }

    Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk03', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False})
    Npc_Goron010[Father_GoronsRock].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk04', 'IsOverWriteLabelActorName': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2037.974853515625, 'Pattern1PosY': 524.83984375, 'Pattern1PosZ': -2038.8453369140625, 'Pattern1AtX': 2037.2200927734375, 'Pattern1AtY': 524.966064453125, 'Pattern1AtZ': -2038.8702392578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk12'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2039.92529296875, 'Pattern1PosY': 525.1893920898438, 'Pattern1PosZ': -2035.0487060546875, 'Pattern1AtX': 2043.05322265625, 'Pattern1AtY': 523.592041015625, 'Pattern1AtZ': -2038.5003662109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Goron010[Father_GoronsRock].Demo_Talk({'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk13', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Step005_Npc_Goron010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckFlag({'FlagName': 'GoronsRock_Father_Disp'}) {
        Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk10', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk11'})
            Event212:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk18'})
            Event70:
            Npc_Goron010[Father_GoronsRock_city].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
          case 1:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk22'})
            goto Event212
          case 2:
            Npc_Goron010[Father_GoronsRock_city].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk23'})
            goto Event70
        }
    }
}

void PlaceRock() {
    Npc_Goron010[Father_join_Demo327_0].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Npc_Goron010[Father_join_Demo327_0].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk21', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo327_0', 'EntryPointName': 'Demo327_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void InsidePlayer01() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Step010'})
}

void Step020_Npc_Goron010_Near() {
    Npc_Goron010[Father_join_Demo327_0].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Near01', 'IsChecked': False, 'DispFrame': 90})
}

void Step020_Npc_Goron009_Near() {
    Npc_Goron009[Son_GoronsRock].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Near02', 'IsChecked': False, 'DispFrame': 90})
}

void Step030_Npc_Goron009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_Goron010[Father_GoronsRock].CheckActorAction({'ActionName': 'Root/Timeline/Action4/到着'}) {
        Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Near02', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    }
}

void Step010_Npc_Goron009_Talk() {
    Event102:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk02b', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait'})
}

void Step010_Npc_Goron010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk12'})
    Npc_Goron010[Father_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk05', 'IsOverWriteLabelActorName': False})
}

void Father_Reset() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Father_Disp'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Father_Disp'})
}

void Ready_Npc_Goron010_Near() {
    Npc_Goron010[Father_GoronsRock_city].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Near02', 'IsChecked': True, 'DispFrame': 300})
}

void Step020_Npc_Goron009_Talk() {
    goto Event102
}

void Step020_Npc_Goron010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron010[Father_join_Demo327_0].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk17'})
}
