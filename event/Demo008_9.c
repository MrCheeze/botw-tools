-------- EventFlow: Demo008_9 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_WarpPlayerToAnchor', 'Demo_KillUIScreen']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_UnbindSheikPad', 'Demo_PlayerWait']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPointSP
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceShutterSP
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceTerminalSP
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DungeonEntranceSP
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: DgnObj_EntranceShutter_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: DgnObj_WarpPoint_A_01
entrypoint: None()
actions: ['Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void C03() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1PosX': 6.329699993133545, 'Pattern1PosY': 1.4843000173568726, 'Pattern1PosZ': 14.458100318908691, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY', 'IsWaitFinish': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadTouch', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo008_9-C03-Link-A-0', 'IsEnabledAnimeDriven': -1, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': ActorIdentifier(name="DgnObj_EntranceTerminalSP")})

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

        fork {
            DgnObj_WarpPointSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            DgnObj_WarpPointSP.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            if !EventSystemActor.CheckEventCancel() {
                DgnObj_WarpPointSP.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
            }
        }

    }

}

void Common() {

    fork {
        DgnObj_DungeonEntranceSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        DgnObj_DungeonEntranceSP.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        if !EventSystemActor.CheckEventCancel() {
            DgnObj_EntranceShutterSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }
    } {
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
        if !EventSystemActor.CheckEventCancel() {
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'IsWaitFinish': True, 'Count': 5})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 4, 'Power': 0.07000000029802322, 'Count': 3, 'IsWaitFinish': True})
        }
    } {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'MotionMode': 0, 'Pattern1AtX': -1.7553000450134277, 'Pattern1AtY': 3.9851999282836914, 'Pattern1AtZ': 0.8953999876976013, 'Pattern1Fovy': 50.0, 'LngShiftRange': 30.0, 'LatShiftRange': 60.0, 'CollisionInterpolateSkip': False, 'FovyAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1PosX': 6.897799968719482, 'Pattern1PosY': 1.642799973487854, 'Pattern1PosZ': 15.644100189208984, 'IsWaitFinish': False, 'Cushion': 1.0, 'Count': 100.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
}

void ExecuteSkip() {

    fork {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_UnbindSheikPad({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MessageSp_00'})
        NPC_DRCVoice.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    } {
        DgnObj_EntranceShutter_A_01.Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsIgnoreSame': False, 'MorphingFrame': -1.0})
    } {
        DgnObj_WarpPoint_A_01.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate'})
    }

    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'PosAfterDemoSkip', 'IsWaitFinish': True, 'UniqueName': 'Demo008_9_PlayerEndPos'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1AtY': 1.5, 'Pattern1PosY': 2.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': False, 'Pattern1PosZ': -4.5, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
}

void Demo008_9() {

    call Demo008_0.EntryPoint0({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY', 'C03-Link-ASName': 'Demo008_9-C03-Link-A-0', 'C02-Link-ASName': 'Demo008_9-C02-Link-A-0', 'C04-Link-ASName': 'Demo008_9-C04-Link-A-0', 'C05-Link-ASName': 'Demo008_9-C05-Link-A-0', 'DungeonEntranceTerminal': ActorIdentifier(name="DgnObj_EntranceTerminalSP"), 'DungeonEntranceWarpPoint': ActorIdentifier(name="DgnObj_WarpPointSP"), 'DungeonEntrance': ActorIdentifier(name="DgnObj_DungeonEntranceSP"), 'DungeonEntranceShutter': ActorIdentifier(name="DgnObj_EntranceShutterSP"), 'PlayerEndPosUniqueName': 'Demo008_9_PlayerEndPos'})

}
