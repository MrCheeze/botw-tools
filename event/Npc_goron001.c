-------- EventFlow: Npc_goron001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_WaitFrame']
queries: ['CheckRupee', 'GeneralChoice4', 'CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_goron001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_goron026
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event90:
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event91:
        Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk11'})
        Event124:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        Event51:
        Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk01', 'IsOverWriteLabelActorName': False})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckRupee({'Value': 20}) {
                Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk04', 'IsOverWriteLabelActorName': False})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk08', 'IsOverWriteLabelActorName': False})
                    Event63:
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk09', 'IsOverWriteLabelActorName': False})
                    Event120:
                    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                    Event121:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    goto Event63
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                    goto Event121
                  case 3:
                    Event52:
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk02', 'IsOverWriteLabelActorName': False})
                    Event107:
                    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                }
            } else {
                Event54:
                Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk03', 'IsOverWriteLabelActorName': False})
                goto Event107
            }
          case 1:
            if EventSystemActor.CheckRupee({'Value': 80}) {
                Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk05', 'IsOverWriteLabelActorName': False})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -80, 'IsWaitFinish': False})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1676.9056396484375, 'Pattern1PosY': 492.9332580566406, 'Pattern1PosZ': -2422.186279296875, 'Pattern1AtX': 1683.2366943359375, 'Pattern1AtY': 491.41485595703125, 'Pattern1AtZ': -2422.249755859375, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_goron026', 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_goron001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk16', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': ''})
                    GameROMPlayer.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026', 'IsTurnToLookAtPos': False})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1680.413818359375, 'Pattern1PosY': 491.4087219238281, 'Pattern1PosZ': -2418.735595703125, 'Pattern1AtX': 1679.0081787109375, 'Pattern1AtY': 491.17840576171875, 'Pattern1AtZ': -2423.156982421875, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 15.0, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron026.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': 10.0})
                    Npc_goron026.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron026:talk10', 'IsBecomingSpeaker': False, 'ASName': ''})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    Npc_goron001.Demo_BecomeSpeaker({'IsWaitFinish': True})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': False, 'ActorName': ''})
                    GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsValid': True, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_goron001'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtraGoron', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk08', 'IsOverWriteLabelActorName': False})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk10'})
                    goto Event120
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -80, 'IsWaitFinish': False})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1676.9056396484375, 'Pattern1PosY': 492.9332580566406, 'Pattern1PosZ': -2422.186279296875, 'Pattern1AtX': 1683.2366943359375, 'Pattern1AtY': 491.41485595703125, 'Pattern1AtZ': -2422.249755859375, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_goron026', 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_goron001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk16', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026', 'IsTurnToLookAtPos': False})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1680.413818359375, 'Pattern1PosY': 491.4087219238281, 'Pattern1PosZ': -2418.735595703125, 'Pattern1AtX': 1679.0081787109375, 'Pattern1AtY': 491.17840576171875, 'Pattern1AtZ': -2423.156982421875, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 15.0, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron026.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': 10.0})
                    Npc_goron026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron026:talk10', 'IsBecomingSpeaker': False})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    Npc_goron001.Demo_BecomeSpeaker({'IsWaitFinish': True})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': False, 'ActorName': ''})
                    GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsValid': True, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_goron001'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtraGoron', 'EndFade': 0})
                    Event123:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk17'})
                    goto Event120
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -80, 'IsWaitFinish': False})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1676.9056396484375, 'Pattern1PosY': 492.9332580566406, 'Pattern1PosZ': -2422.186279296875, 'Pattern1AtX': 1683.2366943359375, 'Pattern1AtY': 491.41485595703125, 'Pattern1AtZ': -2422.249755859375, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_goron026', 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_goron001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk16', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'TurnDirection': 0.0, 'ActorName': 'Npc_goron026', 'IsTurnToLookAtPos': False})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1680.413818359375, 'Pattern1PosY': 491.4087219238281, 'Pattern1PosZ': -2418.735595703125, 'Pattern1AtX': 1679.0081787109375, 'Pattern1AtY': 491.17840576171875, 'Pattern1AtZ': -2423.156982421875, 'Pattern1Fovy': 40.00001525878906, 'Accept1FrameDelay': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 15.0, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_goron026.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'TurnDirection': 10.0})
                    Npc_goron026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron026:talk10', 'IsBecomingSpeaker': False})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    Npc_goron001.Demo_BecomeSpeaker({'IsWaitFinish': True})
                    Npc_goron001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': False, 'ActorName': ''})
                    GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsValid': True, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_goron001'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtraGoron', 'EndFade': 0})
                    goto Event123
                  case 3:
                    goto Event52
                }
            } else {
                goto Event54
            }
          case 2:
            Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk13', 'IsCloseMessageDialog': True})
            goto Event51
          case 3:
            goto Event52
        }
      case 1:
        goto Event91
      case 2:
        goto Event91
      case 3:
        goto Event91
      case 4:
        goto Event91
      case 5:
        goto Event91
      case 6:
        Event92:
        Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk12'})
        goto Event124
      case 7:
        goto Event92
    }
}

void Clear_RemainsFire_Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_goron001_ClearFirst'}) {
        goto Event90
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_goron001_ClearFirst'})
        Npc_goron001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron001:Talk14'})
        goto Event124
    }
}
