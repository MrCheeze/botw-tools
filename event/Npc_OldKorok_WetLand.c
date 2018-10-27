-------- EventFlow: Npc_OldKorok_WetLand --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_AppearNumKorokNuts']
queries: ['HasPorchItem', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok_WetLand
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call OldKorok_Help.InitTalk_OldKorok({'WarpDestMapName': 'F-5', 'WarpDestPosName': 'OldKorok_WetlandsStable', 'Self': ActorIdentifier(name="Npc_OldKorok_WetLand")})

    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_5th'}) {
        Npc_OldKorok_WetLand.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_WetLand:talk04'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Wet_Interval'}) {
            Event2:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
                EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
                Npc_OldKorok_WetLand.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok_WetLand:talk01', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Wet_Talking'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:

                    call Npc_OldKorok.BUKI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_WetLand")})

                    Event25:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'OldKorok_Wet_Talking'})
                  case 1:

                    call Npc_OldKorok.YUMI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_WetLand")})

                    goto Event25
                  case 2:

                    call Npc_OldKorok.TATE_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_WetLand")})

                    goto Event25
                  case 3:

                    call Npc_OldKorok.No_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_WetLand")})

                    goto Event25
                }
            } else {
                Npc_OldKorok_WetLand.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok_WetLand:talk02', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Wet_Interval'})
            Npc_OldKorok_WetLand.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_WetLand:talk00'})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 876.9658813476562, 'Pattern1PosY': 134.95460510253906, 'Pattern1PosZ': 204.746337890625, 'Pattern1AtX': 869.9181518554688, 'Pattern1AtY': 133.4859619140625, 'Pattern1AtZ': 199.89822387695312, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            Npc_OldKorok_WetLand.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_WetLand:talk03'})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            goto Event2
        }
    }
}
