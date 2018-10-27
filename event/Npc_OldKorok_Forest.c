-------- EventFlow: Npc_OldKorok_Forest --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_AppearNumKorokNuts']
queries: ['HasPorchItem', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok_Forest
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call OldKorok_Help.InitTalk_OldKorok({'WarpDestMapName': 'G-3', 'WarpDestPosName': 'OldKorok_ForestStable', 'Self': ActorIdentifier(name="Npc_OldKorok_Forest")})

    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_5th'}) {
        Npc_OldKorok_Forest.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Forest:talk04'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_For_Interval'}) {
        Event1:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
            Npc_OldKorok_Forest.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Forest:talk01', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_For_Talking'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call Npc_OldKorok.BUKI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Forest")})

                Event22:
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'OldKorok_For_Talking'})
              case 1:

                call Npc_OldKorok.YUMI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Forest")})

                goto Event22
              case 2:

                call Npc_OldKorok.TATE_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Forest")})

                goto Event22
              case 3:

                call Npc_OldKorok.No_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Forest")})

                goto Event22
            }
        } else {
            Npc_OldKorok_Forest.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Forest:talk02', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_For_Interval'})
        Npc_OldKorok_Forest.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Forest:talk00'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1054.294677734375, 'Pattern1PosY': 130.68846130371094, 'Pattern1PosZ': -1105.1546630859375, 'Pattern1AtX': 1058.6727294921875, 'Pattern1AtY': 130.2340850830078, 'Pattern1AtZ': -1104.071044921875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        Npc_OldKorok_Forest.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Forest:talk03'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        goto Event1
    }
}
