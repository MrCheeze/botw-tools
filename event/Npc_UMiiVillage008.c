-------- EventFlow: Npc_UMiiVillage008 --------

Actor: Npc_UMiiVillage008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice2', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call MokusenHello()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC008_First'}) {
        Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk07'})
        Event35:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk15', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'UMiiVillage_NPC008_Cook', 'IsWaitFinish': True})
            Event43:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk16'})
            goto Event35
          case 1:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'UMiiVillage_NPC008_Wife', 'IsWaitFinish': True})
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk14', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_UMiiVillage008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'FaceId': 1, 'IsValid': False, 'TurnPosition': [3970.0, 233.0, -1584.0], 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3970.010009765625, 'Pattern1PosY': 237.0807342529297, 'Pattern1PosZ': -1618.8062744140625, 'Pattern1AtX': 3970.39697265625, 'Pattern1AtY': 236.7660369873047, 'Pattern1AtZ': -1613.10888671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_GiveCake_Finish'}) {
                Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk18'})
            } else {
                Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk17'})
            }
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            Npc_UMiiVillage008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 1, 'IsValid': False, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            goto Event43
          case 2:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk13', 'IsCloseMessageDialog': True})
            goto Event43
          case 3:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk08'})
        }
    } else {
        Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk09'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC008_First', 'IsWaitFinish': True})
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk10'})
        } else {
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk08'})
        }
    }
}

void MokusenHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage008.CheckActorAction13() {
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk12'})
        } else {
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk11'})
        }
        Event19:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
      case 11:
        Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk06'})
        goto Event19
      case 12:
        if Npc_UMiiVillage008.IsOnInstEventFlag() {
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk04'})
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk01'})
          case [2, 3, 4, 5]:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk02'})
          case [6, 7]:
            Npc_UMiiVillage008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage008:talk03'})
        }
    }
}
