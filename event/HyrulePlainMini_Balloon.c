-------- EventFlow: HyrulePlainMini_Balloon --------

Actor: Npc_HyrulePlain004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtTheFront']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckWeather', 'GeneralChoice2', 'HasPorchItem', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HyrulePlain004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyrulePlain004.CheckActorAction13() {
      case 0:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event13:
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0004', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0005', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0007', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HyrulePlainMini_Balloon_Activated'})
            } else {
                Npc_HyrulePlain004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0014'})
            }
          case [1, 2, 3]:
            Npc_HyrulePlain004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0006'})
            goto Event13
        }
      case 10:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0000', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Finish_Npc_HyrulePlain004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HyrulePlain004.CheckActorAction13() {
      case 0:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_57', 'Count': 2}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0010', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case [1, 2, 3]:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0009', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                }
            }
        } else {
            Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0018', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 10:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0002', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 11:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0000', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Balloon() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1059.585693359375, 'Pattern1PosY': 130.43472290039062, 'Pattern1PosZ': -1114.059326171875, 'Pattern1AtX': 1077.0789794921875, 'Pattern1AtY': 131.99179077148438, 'Pattern1AtZ': -1122.532958984375, 'Pattern1Fovy': 50.00001907348633, 'Count': 120.0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'MotionMode': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_HyrulePlain004.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    switch EventSystemActor.CheckWeather() {
      case 0:
        GameRomCamera.Demo_MovePosFlow({'MotionMode': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Accept1FrameDelay': True, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'Count': 0.0, 'ReviseModeEnd': 2, 'ActorIgnoringCollision': 0, 'Pattern1PosX': -0.5, 'Pattern1AtZ': -2.0, 'Pattern1AtY': 0.5, 'Pattern1PosZ': 2.5, 'Pattern1PosY': 1.5, 'Pattern1AtX': 0.3499999940395355, 'ActorName1': 'Npc_HyrulePlain004', 'TargetActor1': 3, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Event34:
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0013', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HyrulePlain004.Demo_Talk({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Talk_0012', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_J'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HyrulePlainMini_Balloon_Finish'})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
      case [1, 2, 3]:
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1059.585693359375, 'Pattern1PosY': 130.43472290039062, 'Pattern1PosZ': -1114.059326171875, 'Pattern1AtX': 1077.0789794921875, 'Pattern1AtY': 131.99179077148438, 'Pattern1AtZ': -1122.532958984375, 'Pattern1Fovy': 50.00001907348633, 'Count': 120.0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        goto Event34
    }
}

void Ready_Npc_HyrulePlain004_Near() {
    if Npc_HyrulePlain004.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13] {
        Event59:
        Npc_HyrulePlain004.Demo_TalkASync({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Near_00', 'IsChecked': True, 'DispFrame': 300, 'IsWaitFinish': True})
    }
}

void Finish_Npc_HyrulePlain004_Near() {
    if Npc_HyrulePlain004.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13] {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_57', 'Count': 2}) {
            goto Event59
        } else {
            Npc_HyrulePlain004.Demo_TalkASync({'MessageId': 'EventFlowMsg/HyrulePlainMini_Balloon:Near_01', 'IsChecked': False, 'IsWaitFinish': True, 'DispFrame': 90})
        }
    }
}
