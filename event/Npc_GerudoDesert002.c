-------- EventFlow: Npc_GerudoDesert002 --------

Actor: Npc_GerudoDesert002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisMilk_E[Town]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MultiTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_BecomeSpeaker', 'Demo_PlayASForDemo']
queries: ['IsNeedEquipWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName2': 'Npc_OasisMilk_E', 'UniqueName2': 'Town', 'ActorName1': 'Npc_GerudoDesert002'})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'FollowAISchedule'})
    } {
        Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if Starter.IsNeedEquipWeapon() {
            Starter.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
        }

        fork {
            Npc_GerudoDesert002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_E', 'UniqueName': 'Town', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {
            Npc_OasisMilk_E[Town].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_GerudoDesert002', 'UniqueName': ''})
        }

    }


    fork {
        Npc_GerudoDesert002.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert002:Talk_01', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ActorName': 'Npc_GerudoDesert002', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_OasisMilk_E[Town].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert002:Talk_02'})
    } {
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_E', 'UniqueName': 'Town', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_GerudoDesert002.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert002:Talk_03'})
    } {
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ActorName': 'Npc_GerudoDesert002', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_OasisMilk_E[Town].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert002:Talk_04'})
    } {
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_OasisMilk_E', 'UniqueName': 'Town', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_GerudoDesert002.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert002:Talk_05'})
    } {
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ActorName': 'Npc_GerudoDesert002', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

}
