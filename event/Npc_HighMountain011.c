-------- EventFlow: Npc_HighMountain011 --------

Actor: Npc_HighMountain011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckWeather', 'CheckTimeType', 'GeneralChoice4', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind[RemainsWind_Battle]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})

    call Nazlith_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Activated'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Rito_NPC011_ChoiceTeba', 'IsWaitFinish': True})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First'}) {
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_17'})
        Event40:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First_Start'}) {
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_20', 'IsOverWriteLabelActorName': False})
                Event87:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_21'})
                goto Event40
            } else {
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_19', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC011_First_Start', 'IsWaitFinish': True})
                goto Event87
            }
          case 1:
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event87
          case 2:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            RemainsWind[RemainsWind_Battle].Demo_Join({'IsWaitFinish': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_HighMountain011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 1, 'ActorName': 'RemainsWind', 'TurnDirection': 0.0, 'UniqueName': 'RemainsWind_Battle'})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'RemainsWind', 'UniqueName': 'RemainsWind_Battle', 'IsTurnToLookAtPos': False})
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'TargetActor2': -1, 'ActorName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Pattern1Fovy': 0.0, 'IsWaitFinish': False, 'ActorName1': 'RemainsWind', 'FovyAppendMode': 0, 'Pattern1PosX': -3192.0, 'Pattern1PosY': 300.0, 'Pattern1PosZ': -1891.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName2': '', 'UniqueName1': 'RemainsWind_Battle', 'ReviseModeEnd': 2, 'AtAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'PosAppendMode': 1, 'Count': 0.0, 'MotionMode': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            Npc_HighMountain011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_HighMountain011', 'IsTurnToLookAtPos': False})
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_07', 'IsOverWriteLabelActorName': False})
            goto Event87
          case 3:
            Npc_HighMountain011.Demo_Talk({'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_04', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC011_First'})
        goto Event40
    }
}

void Clear_RemainsWind_Talk() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})

    call Nazlith_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First'}) {
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_05', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Event54:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_15', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_16', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            Npc_HighMountain011.Demo_Talk({'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_04', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC011_First'})
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_14', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event54
    }
}

void Nazlith_Hello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First'}) {
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_01'})
    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_09', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case [6, 7]:
            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_10', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case [1, 2, 3]:
        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain011:Talk_11', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
