-------- EventFlow: Gerudo_Ch_SecretClub --------

Actor: Npc_oasis005
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void SecretDemo_First() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis005")})

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3788.938232421875, 'Pattern1PosY': 151.37672424316406, 'Pattern1PosZ': 2925.52490234375, 'Pattern1AtX': -3789.20556640625, 'Pattern1AtY': 151.3890380859375, 'Pattern1AtZ': 2924.490478515625, 'Pattern1Fovy': 54.999996185302734, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_oasis005.Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_17'})
    Npc_oasis005.Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_20'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SecretClub_Finish'})
}

void BackDoor() {

    call InitTalk.InitTalkNoTurn()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.42651399970054626, 'Pattern1PosY': 1.2700350284576416, 'Pattern1PosZ': 6.4794921875, 'Pattern1AtX': -0.5570070147514343, 'Pattern1AtY': 1.5902400016784668, 'Pattern1AtZ': 1.210448980331421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorName1': 'Gerud_SecretClubDoor_A', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_Stop'}) {
            Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_18'})
        } else {
            Event29:
            Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_16'})
            switch EventSystemActor.GeneralChoice4() {
              case [0, 1, 3]:
                Event39:
                Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_12'})
                switch EventSystemActor.GeneralChoice4() {
                  case [0, 1, 3]:
                    Event42:
                    Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_13'})
                    switch EventSystemActor.GeneralChoice4() {
                      case [0, 1, 3]:
                        Event46:
                        Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_19'})
                        switch EventSystemActor.GeneralChoice4() {
                          case [0, 1, 2]:
                            Event48:
                            Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_15'})
                            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SecretClub_Stop', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Gerudo_Ch_SecretClub_CodeA', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Gerudo_Ch_SecretClub_CodeB', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Gerudo_Ch_SecretClub_CodeC', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SecretClub_Activated'})
                          case 3:
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SecretClub_CodeD'})
                            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_CodeA'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_CodeB'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SecretClub_CodeC'}) {
                                        Npc_oasis005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SecretClub:Talk_14'})
                                        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SecretClub_Activated'})
                                        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SecretClub_CodeGet', 'IsWaitFinish': True})
                                    } else {
                                        goto Event48
                                    }
                                } else {
                                    goto Event48
                                }
                            } else {
                                goto Event48
                            }
                        }
                      case 2:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SecretClub_CodeC', 'IsWaitFinish': True})
                        goto Event46
                    }
                  case 2:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SecretClub_CodeB', 'IsWaitFinish': True})
                    goto Event42
                }
              case 2:
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SecretClub_CodeA', 'IsWaitFinish': True})
                goto Event39
            }
        }
    } else {
        goto Event29
    }
}
