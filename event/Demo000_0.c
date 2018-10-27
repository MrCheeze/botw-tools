-------- EventFlow: Demo000_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_FlagON']
queries: ['IsCurrentCDungeonStage', 'IsCurrentMainFieldDungeonStage']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_EnableSquatInEvent']
queries: ['IsEquippedWithLowerBody']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SetOpenState', 'Demo_PlayASForDemo', 'Demo_SetFixed', 'Demo_SetDynamic']
queries: ['IsFaceToFaceWithPlayer']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo000_0() {

    fork {
        Starter.Demo_SetFixed({'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_EnableSquatInEvent({'IsWaitFinish': True})
    }


    call Open({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ'})

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Arg_CurrentActorName'})

    Starter.Demo_SetOpenState({'IsWaitFinish': True})

    call GetDemo.OpenOperationAndShortCutGuide({'CheckTargetActorName': 'Arg_CurrentActorName'})

    Starter.Demo_SetDynamic({'IsWaitFinish': True})
}

void Open() {
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 3, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    if Starter.IsFaceToFaceWithPlayer() {

        fork {
            if EventSystemActor.IsCurrentCDungeonStage() {
                Event59:
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'GetTreasurebox_Unlock_Conductor', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } else
            if EventSystemActor.IsCurrentMainFieldDungeonStage() {
                goto Event59
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'GetTreasurebox_Unlock', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            }
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
            Starter.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'FrontOpen', 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }

    } else {

        fork {
            if !GameROMPlayer.IsEquippedWithLowerBody() {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'GetTreasurebox_Kick', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'GetTreasurebox_Kick_Damage', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            }
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
            Starter.Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        }

    }
}
