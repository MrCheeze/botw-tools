-------- EventFlow: Npc_Zora015 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call FrarattoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora015_First'}) {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk17', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Event41:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_Zora015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3305.699951171875, 248.8000030517578, -478.8999938964844], 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3305.699951171875, 248.8000030517578, -478.8999938964844], 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3306.1865234375, 'Pattern1PosY': 246.219482421875, 'Pattern1PosZ': -467.70599365234375, 'Pattern1AtX': 3306.180419921875, 'Pattern1AtY': 246.26869201660156, 'Pattern1AtZ': -467.9557189941406, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk18', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'Count': 15.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            Npc_Zora015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'Npc_Zora015', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk19'})
        } else {
            Event38:
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk16'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora015_First', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk05'})
            Event13:
            if !EventSystemActor.GeneralChoice2() {
                Event33:
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk14'})
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk15', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event41
                } else {
                    goto Event38
                }
            } else {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk13'})
                goto Event33
            }
        } else {
            Npc_Zora015.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Zora015:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event13
        }
    }
}

void FrarattoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora015.IsOnInstEventFlag() {
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk12'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk06'})
      case [2, 3, 4, 5]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk10'})
      case [6, 7]:
        Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk11'})
    }
}

void Water_Relic_Activated_Talk() {

    call FrarattoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'FraratTalk_2nd'}) {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk03'})
            Event54:
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk04'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FraratTalk_2nd'})
        } else {
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk02'})
            goto Event54
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk09'})
          case [1, 2, 3]:
            Event52:
            if EventSystemActor.CheckFlag({'FlagName': 'RinelSearch_Finish'}) {
                Npc_Zora015.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Zora015:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else
            if Npc_Zora015.CheckActorAction13() in [2, 3] {
                Npc_Zora015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:talk23'})
            }
        }
    } else
    goto Event52
}

void Near() {
    Event61:
    switch Npc_Zora015.CheckActorAction13() {
      case 0:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora015:near00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:near02'})
      case 2:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Zora015:near01'})
      case 3:
        Npc_Zora015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora015:near00', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Water_Relic_Activated_Near() {
    goto Event61
}
