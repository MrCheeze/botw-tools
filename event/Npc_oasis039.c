-------- EventFlow: Npc_oasis039 --------

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor']
queries: ['RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_BustUpFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_oasis039.CheckActorAction13() {
      case 0:
        Event25:

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis039")})

        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_06'})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_oasis039.CheckActorAction({'ActionName': 'Root/Terror'}) {
            goto Event25
        } else {
            Event29:
            Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

            call Npc_oasis038.Talk()

        }
    }
}

void Hoju_Warning() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis039")})

    Npc_oasis039.Demo_TurnAndLookToObject({'IsValid': True, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True})
    GameRomCamera.Demo_BustUpFront({'Count': 0.0, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'StartCalcOnly': True, 'Lat': 0.0, 'IsWaitFinish': True, 'Lng': 5.0, 'Offset': [0.0, -0.30000001192092896, 0.20000000298023224]})
    EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'Hoju_Warning', 'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor'})
    switch EventSystemActor.RandomChoice3() {
      case 0:
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_04', 'IsCloseMessageDialog': True})
        Event20:
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsUseSlowTurn': False, 'TurnPosition': [-3761.1640625, 154.81260681152344, 3114.93896484375], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ActorName': '', 'IsValid': True, 'FaceId': 2, 'IsTurnToLookAtPos': False})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Npc_oasis039.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        Npc_oasis039.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        goto Event20
      case 2:
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_05', 'IsCloseMessageDialog': True})
        goto Event20
    }
}

void NearActorsTalk() {
    goto Event29
}
