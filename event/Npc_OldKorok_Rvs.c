-------- EventFlow: Npc_OldKorok_Rvs --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_AppearNumKorokNuts']
queries: ['HasPorchItem', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok_Rvs
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

    call OldKorok_Help.InitTalk_OldKorok({'WarpDestMapName': 'F-6', 'WarpDestPosName': 'OldKorok_RiversideStable', 'Self': ActorIdentifier(name="Npc_OldKorok_Rvs")})

    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_5th'}) {
        Npc_OldKorok_Rvs.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Rvs:talk03'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Rvs_Interval'}) {
        Event4:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
            Npc_OldKorok_Rvs.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Rvs:talk01'})
            EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Rvs_Talking', 'IsWaitFinish': True})
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call Npc_OldKorok.BUKI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Rvs")})

                Event50:
                EventSystemActor.Demo_FlagOFF({'FlagName': 'OldKorok_Rvs_Talking', 'IsWaitFinish': True})
              case 1:

                call Npc_OldKorok.YUMI_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Rvs")})

                goto Event50
              case 2:

                call Npc_OldKorok.TATE_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Rvs")})

                goto Event50
              case 3:

                call Npc_OldKorok.No_Pouch({'Xman': ActorIdentifier(name="Npc_OldKorok_Rvs")})

                goto Event50
            }
        } else {
            Npc_OldKorok_Rvs.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Rvs:talk02', 'IsWaitFinish': True})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Rvs_Interval', 'IsWaitFinish': True})
        Npc_OldKorok_Rvs.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Rvs:talk00'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 385.7374572753906, 'Pattern1PosY': 124.56731414794922, 'Pattern1PosZ': 1028.76171875, 'Pattern1AtX': 384.74481201171875, 'Pattern1AtY': 123.91736602783203, 'Pattern1AtZ': 1035.5653076171875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        Npc_OldKorok_Rvs.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Rvs:talk04'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        goto Event4
    }
}
