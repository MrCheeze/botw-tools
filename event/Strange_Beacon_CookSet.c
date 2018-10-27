-------- EventFlow: Strange_Beacon_CookSet --------

Actor: Npc_Strange_Beacon
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_WarpToScheduleAnchor']
queries: ['CheckActorAction13', 'CheckTerrorLevel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Strange_Beacon.CheckActorAction13() {
      case [0, 10]:
        switch Npc_Strange_Beacon.CheckTerrorLevel() {
          case 0:

            call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Strange_Beacon"), 'Arg_Turn': 6})

            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Strange_Beacon_CookSet:Text004', 'ASName': ''})
          case [1, 2, 3, 4, 5]:

            call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Strange_Beacon"), 'Arg_Turn': 6})

            Npc_Strange_Beacon.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Strange_Beacon_CookSet:Text004', 'ASName': ''})
        }
      case 1:

        fork {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1037.4718017578125, 'Pattern1PosY': 326.750244140625, 'Pattern1PosZ': 3564.56005859375, 'Pattern1AtX': -1035.115234375, 'Pattern1AtY': 326.1391296386719, 'Pattern1AtZ': 3564.830322265625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Npc_Strange_Beacon', 'IsWaitFinish': True, 'PosAppendMode': 1, 'AtAppendMode': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Strange_Beacon_CookSet'})
        } {
            Npc_Strange_Beacon.Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
            Npc_Strange_Beacon.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_Strange_Beacon.Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': ''})
        }

        if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon069'}) {
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Strange_Beacon_CookSet:Text002', 'ASName': 'Guard'})
        } else {
            Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Strange_Beacon_CookSet:Text001', 'ASName': 'Guard'})
        }
      case 11:

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Strange_Beacon"), 'Arg_Turn': 5})

        Npc_Strange_Beacon.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Strange_Beacon_CookSet:Text003', 'ASName': 'Act_SitGround_Sleep'})
    }
}
