-------- EventFlow: Demo019_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_ReserveParashawlStart', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_PlayerWait']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_RecoverPlayerEnergy', 'Demo_OpenPorch', 'Demo_CallDemo']
queries: ['GeneralChoice3', 'GeneralChoice2', 'HasPorchItem', 'CheckWeather', 'HasPorchItemByCategory']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage031
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetInterpolate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo019_0() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    WorldManagerControl.Demo_SetWind({'WindDirY': 0.0, 'WindPower': 5.5, 'IsAutoWind': False, 'WindDirZ': 1.0, 'IsWaitFinish': False, 'WindDirX': 0.5})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_Rescued', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo019_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'MorphingFrame': 0.0})
    } {
        Npc_ValleyVillage031.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
        if EventSystemActor.HasPorchItem({'PorchItemName': 'BombArrow_A', 'Count': 1}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo019_0:talk00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                Event7:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo019_0:talk01', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                    GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
                    EventMessageTransmitter1.Demo_Msg2CameraResetInterpolate({'IsWaitFinish': True, 'InterpolateParam': 1.0})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
                    Npc_ValleyVillage031.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
                  case 1:
                    Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo019_0:talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                    EventSystemActor.Demo_OpenPorch({'IsWaitFinish': True, 'RockCategory': -1})
                    Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo019_0:talk04', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                    goto Event7
                  case 2:
                    Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo019_0:talk05', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo019_0:talk03', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                        Event75:
                        EventBgmCtrlTag.Demo_Stop({'BgmName': 'RemainsWindBattleBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_Sky', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'BackToBattleStep', 'EndFade': 1, 'DemoName': 'Wind_Relic'})
                    } else {
                        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo019_0:talk06', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': False})
                        goto Event7
                    }
                }
              case 1:
                Event46:
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo019_0:talk08', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0'})
                goto Event7
              case 2:
                goto Event46
              case 3:
                goto Event46
            }
        } else {
            Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo019_0:talk11'})
            goto Event75
        }
    } else {
        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo019_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo019_0:talk10'})
        goto Event75
    }
}
