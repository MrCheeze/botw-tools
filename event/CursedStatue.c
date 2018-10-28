-------- EventFlow: CursedStatue --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckPlayerState', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoGate001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_ReserveParashawlStart', 'Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void DungeonAppear() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

    call Common.AirStartUP_Player()


    call StatueBreakCam()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    if !EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
    }
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CursedStatue_Finish'})
}

void Ready_Npc_HatenoGate001_Talk() {
    Event41:
    switch Npc_HatenoGate001.CheckTerrorLevel() {
      case [0, 1, 2]:

        call Npc_HatenoGate001.Talk()

      case [3, 4, 5]:
        switch Npc_HatenoGate001.CheckResultOfNPCConflict() {
          case [0, 1, 2]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

            Npc_HatenoGate001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CursedStatue:Talk09', 'IsWaitFinish': True})
          case 3:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            Npc_HatenoGate001.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CursedStatue:Talk08', 'ASName': 'Detect'})
        }
    }
}

void Game_Npc_HatenoGate001_Talk() {
    goto Event41
}

void StatueBreakCam() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Obj_CursedStatue', 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'MotionMode': 0, 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 10.0, 'IsWaitFinish': False, 'Pattern1AtY': 1.0, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosZ': 3.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    } {
        if EventSystemActor.CheckPlayerRideHorse() {
            LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
        }
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.5, 'Count': 8})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 78})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Count': 1, 'Power': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}
