-------- EventFlow: Demo048_1 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerRestart', 'Demo_PlayerDrown', 'Demo_PlayerCleaningAround', 'Demo_Idling']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_DeleteAllIceMakerForDemo', 'Demo_ResetGimmick']
queries: ['CheckPlayerState', 'CheckPlayerHellType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora030[RelicBattleZora]
entrypoint: None()
actions: ['Demo_Join', 'Demo_RescuePlayer']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Abyss', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo048_1() {
    RemainsWater.Demo_Join({'IsWaitFinish': True})
    Npc_Zora030[RelicBattleZora].Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
        EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})

        fork {
            GameROMPlayer.Demo_PlayerDrown({'IsWaitFinish': True})
            GameROMPlayer.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        } {
            Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 1})
        }

        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': True})
        GameROMPlayer.Demo_PlayerCleaningAround({'IsWaitFinish': True})
        Npc_Zora030[RelicBattleZora].Demo_RescuePlayer({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': False})
        Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'Frame': 0, 'IsWaitFinish': False})
    } else {
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})

        fork {
            if EventSystemActor.CheckPlayerHellType({'PlayerHellType': 0}) {
                GameRomCamera.Demo_Abyss({'IsWaitFinish': True})
            } else {
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            }
        } {

            fork {
                Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
            } {
                GameROMPlayer.Demo_PlayerRestart({'IsWaitFinish': True, 'IsNoDamage': False})
            }

            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': True})
            GameROMPlayer.Demo_PlayerCleaningAround({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 0})
        }

    }
}
