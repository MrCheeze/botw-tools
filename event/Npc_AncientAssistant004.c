-------- EventFlow: Npc_AncientAssistant004 --------

Actor: Npc_AncientAssistant004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'RandomChoice2', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientDoctor_Hateno
entrypoint: None()
actions: ['Demo_Idling', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event29:

    call JerinHello()

    Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk04'})
    Event9:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk11'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_NPC002_SonNotLooked', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_NPC002_SonLooked'}) {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk14'})
            }
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk33', 'IsCloseMessageDialog': True})
            Event18:
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk08'})
            goto Event9
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_NPC002_SonLooked', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_NPC002_SonNotLooked'}) {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk13'})
            }
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk32', 'IsCloseMessageDialog': True})
            goto Event18
        }
      case 1:
        Npc_AncientAssistant004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk15', 'ASName': 'Talk_CheckIt'})
        if EventSystemActor.CheckFlag({'FlagName': 'DokuroEye_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_NPC002_First'}) {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk31', 'IsCloseMessageDialog': True})
                goto Event18
            } else {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk28', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_NPC002_First', 'IsWaitFinish': True})
                goto Event18
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'DokuroEye_Activated'}) {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk29'})
        } else {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk20'})
        }
        Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk30', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DokuroEye_Activated'})
        goto Event18
      case 2:
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_NPC002_Roberry'}) {

            call RoberryCamera()

            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk12', 'IsCloseMessageDialog': True})

            call JerinReturn()

            goto Event18
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_NPC002_Roberry', 'IsWaitFinish': True})

            call RoberryCamera()

            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk07', 'IsCloseMessageDialog': True})

            call JerinReturn()

            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk05'})
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk10', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'AncientLabo_NPC002_Son', 'IsWaitFinish': True})
            goto Event18
        }
      case 3:
        Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk09'})
    }
}

void Ready_DokuroEye_Jerin() {
    goto Event29
}

void Finish_DokuroEye_Jerin() {
    goto Event29
}

void Near() {
    if Npc_AncientAssistant004.CheckActorAction13() in [0, 1, 4, 5, 6, 7] {
        if EventSystemActor.CheckFlag({'FlagName': 'DokuroEye_Finish'}) {
            Event26:
            Npc_AncientAssistant004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:near00', 'IsChecked': False, 'DispFrame': 90})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'DokuroEye_Activated'}) {
            goto Event26
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_First'}) {
            Npc_AncientAssistant004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:near00', 'DispFrame': 300, 'IsChecked': True})
        } else {
            goto Event26
        }
    }
}

void JerinHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_AncientAssistant004.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7]:

        call NudeCheck()

        if Npc_AncientAssistant004.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk18'})
            } else {
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk19'})
            }
            Event2:
            if !EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_NPC002_ReadyFirst'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_NPC002_ReadyFirst'})
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk06'})
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk15', 'ASName': 'Talk_CheckIt'})
                Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk01'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk02'})
                } else {
                    Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk03'})
                }
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk25'})
            goto Event2
          case [2, 3, 4, 5]:
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk26'})
            goto Event2
          case [6, 7]:
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk27'})
            goto Event2
        }
      case 10:

        call NudeCheck()

        if !EventSystemActor.RandomChoice2() {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk21'})
        } else {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk22'})
        }
        goto Event2
      case 11:
        if Npc_AncientAssistant004.IsOnInstEventFlag() {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk24'})
        } else {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk23'})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void RoberryCamera() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Npc_AncientAssistant004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'ActorName': 'Npc_AncientDoctor_Hateno', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    Npc_AncientDoctor_Hateno.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': False, 'IsConfront': True, 'TurnPosition': [4511.0, 353.0, -3158.0], 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_AncientDoctor_Hateno.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4514.42333984375, 'Pattern1PosY': 354.0834045410156, 'Pattern1PosZ': -3160.30419921875, 'Pattern1AtX': 4519.1181640625, 'Pattern1AtY': 353.431884765625, 'Pattern1AtZ': -3163.128662109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0})
}

void NudeCheck() {
    if !EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_First'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk35'})
        } else {
            Npc_AncientAssistant004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant004:talk34'})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void JerinReturn() {
    Npc_AncientAssistant004.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}
