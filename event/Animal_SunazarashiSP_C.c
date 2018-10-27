-------- EventFlow: Animal_SunazarashiSP_C --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis047[town]
entrypoint: None()
actions: ['Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_PlayASForDemo']
queries: ['IsNeedEquipWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_C[town]
entrypoint: None()
actions: ['Demo_AfterEat']
queries: ['CheckEatActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EatEnd() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Count': 30.0, 'StartCalcOnly': False, 'TargetActor1': 3, 'ActorName1': 'Animal_SunazarashiSP_C', 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1AtY': 1.0, 'FovyAppendMode': 0, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosY': 2.0, 'Pattern1PosZ': 4.0, 'UniqueName1': 'town', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Animal_SunazarashiSP_C[town].Demo_AfterEat({'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo_After_Eat'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Cushion': 0.0, 'MotionMode': 0, 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'TargetActor1': 3, 'ActorName1': 'Npc_oasis047', 'Pattern1PosZ': 3.0, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'ActorName2': '', 'AtAppendMode': 2, 'Pattern1AtY': 1.5, 'Pattern1PosY': 2.5, 'PosAppendMode': 2, 'Pattern1PosX': 0.0, 'Count': 45.0, 'StartCalcOnly': True, 'TargetActor2': -1, 'UniqueName1': 'town', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if Npc_oasis047[town].IsNeedEquipWeapon() {
        Npc_oasis047[town].Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
        Event20:
        Npc_oasis047[town].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'IsConfront': False})
        if Animal_SunazarashiSP_C[town].CheckEatActor({'ActorName': 'Item_Fruit_B'}) {
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event32:
                Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case 1:
                Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event32
              case 2:
                Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event32
              case 3:
                Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event32
            }
        } else
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event32
          case 1:
            Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event32
          case 2:
            Npc_oasis047[town].Demo_Talk({'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event32
          case 3:
            Npc_oasis047[town].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Animal_SunazarashiSP_C:talk03'})
            goto Event32
        }
    } else {
        goto Event20
    }
}
