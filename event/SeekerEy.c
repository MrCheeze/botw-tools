-------- EventFlow: SeekerEye --------

Actor: Npc_HyruleDepthHatago004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_ReserveParashawlStart']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HyruleDepthHatago004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyruleDepthHatago004.CheckActorAction13() {
      case 0:
        Event60:
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_012'})
      case 1:
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_001'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_002', 'IsCloseMessageDialog': True})

            call Camera()

        } else {
            Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_006'})
        }
      case 2:
        Event61:
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_100'})
      case 3:
        Event5:
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_101'})
      case 4:
        goto Event60
      case 5:
        goto Event60
      case 6:
        goto Event60
      case 7:
        goto Event60
      case 8:
        goto Event60
      case 9:
        goto Event60
      case 10:
        goto Event60
      case 11:
        goto Event60
      case 12:
        goto Event60
      case 13:
        goto Event60
    }
}

void Finish_Npc_HyruleDepthHatago004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyruleDepthHatago004.CheckActorAction13() {
      case 0:
        goto Event60
      case 1:
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_017'})

        call Camera()

      case 2:
        goto Event61
      case 3:
        goto Event5
      case 4:
        goto Event60
      case 5:
        goto Event60
      case 6:
        goto Event60
      case 7:
        goto Event60
      case 8:
        goto Event60
      case 9:
        goto Event60
      case 10:
        goto Event60
      case 11:
        goto Event60
      case 12:
        goto Event60
      case 13:
        goto Event60
    }
}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3859.77587890625, 'Pattern1PosY': 659.4551391601562, 'Pattern1PosZ': 714.5988159179688, 'Pattern1AtX': -3876.11767578125, 'Pattern1AtY': 681.9329833984375, 'Pattern1AtZ': 725.1842651367188, 'Pattern1Fovy': 50.00001907348633, 'Count': 25.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'DungeonAppearanceTrigger_Elec'})
    }


    call Common.RemainsLithograph()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event42:
        if EventSystemActor.CheckFlag({'FlagName': 'SeekerEye_Activated'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SeekerEye_Finish'})
        }
    } else {
        GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
        goto Event42
    }
}

void Ready_Npc_HyruleDepthHatago004_Near() {
    if Npc_HyruleDepthHatago004.CheckActorAction13() {
        Npc_HyruleDepthHatago004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_020', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Camera() {
    Npc_HyruleDepthHatago004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 1, 'IsConfront': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -40.0})
    Npc_HyruleDepthHatago004.Demo_PlayASForDemo({'ASName': 'Point', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2941.695556640625, 'Pattern1PosY': 293.45562744140625, 'Pattern1PosZ': -501.0914001464844, 'Pattern1AtX': -2944.74853515625, 'Pattern1AtY': 293.98626708984375, 'Pattern1AtZ': -496.56011962890625, 'Pattern1Fovy': 50.00001907348633, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'SeekerEye_Activated'}) {
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_018'})
        Event15:
        GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 20.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        Npc_HyruleDepthHatago004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HyruleDepthHatago004.Demo_PlayASForDemo({'ASName': 'Talk_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        if EventSystemActor.CheckFlag({'FlagName': 'SeekerEye_Activated'}) {
            Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_019'})
        } else {
            Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_016'})
            if EventSystemActor.CheckFlag({'FlagName': 'SeekerEye_Step1'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'SeekerEye_Activated', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SeekerEye_Finish'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'SeekerEye_Activated', 'IsWaitFinish': True})
            }
        }
    } else {
        Npc_HyruleDepthHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SeekerEye:Talk_015'})
        goto Event15
    }
}
