-------- EventFlow: Npc_HighMountain001 --------

Actor: Npc_HighMountain001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice3', 'GeneralChoice2', 'CheckPlayerState', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain001.CheckActorAction13() {
      case 0:
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_21'})
        } else {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_20'})
        }
      case 1:

        call Tyuri_Hello()

        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC001_First_Start'}) {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_18', 'IsOverWriteLabelActorName': False})
            Event36:
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3608.541015625, 'Pattern1PosY': 325.78143310546875, 'Pattern1PosZ': -1826.220458984375, 'Pattern1AtX': -3610.015625, 'Pattern1AtY': 325.14483642578125, 'Pattern1AtZ': -1828.7542724609375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_HighMountain001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnDirection': 170.0})
                GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 170.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 170.0, 'IsTurnToLookAtPos': False})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3668.364990234375, 'Pattern1PosY': 328.5020446777344, 'Pattern1PosZ': -1932.6103515625, 'Pattern1AtX': -3674.28857421875, 'Pattern1AtY': 327.25927734375, 'Pattern1AtZ': -1944.5147705078125, 'Pattern1Fovy': 54.999996185302734, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'MotionMode': 0, 'Count': 60.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_14', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

                fork {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': True})
                } {
                    Npc_HighMountain001.Demo_TurnAndLookToObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True})
                }

                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_HighMountain001', 'IsWaitFinish': True, 'IsTurnToLookAtPos': False})
                Event35:
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC001_First_Start', 'IsWaitFinish': True})
            } else {
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_07'})
                goto Event35
            }
        } else {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_08'})
            if !EventSystemActor.GeneralChoice2() {
                Event34:
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_12', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event36
            } else {
                goto Event34
            }
        }
      case 10:
        Event50:
        Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_11', 'IsOverWriteLabelActorName': False})
      case 11:
        Event64:
        Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_10', 'IsOverWriteLabelActorName': False})
    }
}

void Clear_RemainsWind_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain001.CheckActorAction13() {
      case 2:
        Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_21'})
      case 3:
        Event160:

        call Tyuri_Hello()

        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC001_First_Clear'}) {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_17', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event162:
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_22'})
        } else {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_19', 'IsOverWriteLabelActorName': False})
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_16', 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC001_First_Clear', 'IsWaitFinish': True})
            goto Event162
        }
      case 10:
        goto Event50
      case 11:
        goto Event64
      case 12:
        goto Event160
    }
}

void Tyuri_Hello() {
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC001_First'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_13', 'IsOverWriteLabelActorName': False})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC001_First_NG'}) {
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_06', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_05', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        }
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event1:
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event9:
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC001_First_OK', 'IsWaitFinish': True})
                Event18:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC001_First'})
              case 1:
                Event14:
                Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC001_First_NG', 'IsWaitFinish': True})
                goto Event18
              case 2:
                goto Event14
            }
          case 1:
            goto Event1
          case 2:
            Event7:
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_01', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event9
              case 1:
                goto Event14
              case 2:
                goto Event14
            }
          case 3:
            goto Event7
          case 4:
            goto Event7
          case 5:
            goto Event7
          case 6:
            Event8:
            Npc_HighMountain001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event9
              case 1:
                goto Event14
              case 2:
                goto Event14
            }
          case 7:
            goto Event8
        }
    }
}
