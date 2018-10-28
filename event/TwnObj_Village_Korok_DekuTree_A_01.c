-------- EventFlow: TwnObj_Village_Korok_DekuTree_A_01 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckExtraLifeOfPlayer', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 426.755859375, 'Pattern1PosY': 263.6904296875, 'Pattern1PosZ': -2128.235595703125, 'Pattern1AtX': 426.8063049316406, 'Pattern1AtY': 266.3531494140625, 'Pattern1AtZ': -2132.51220703125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'StartCalcOnly': True, 'ReviseModeEnd': 2})
    if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 4}) {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk030', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
        } else {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk020', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
        }
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'ReviseMode': 1})
    } else
    switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 1}) {
      case 0:
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk000', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
        Event20:
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'ReviseMode': 1})
      case [1, 2]:
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk010', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
        goto Event20
    }
}
