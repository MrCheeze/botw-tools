-------- EventFlow: Demo021_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_RegisterToDeathCounter', 'Demo_OpenPorch', 'Demo_SwitchPlayerEquipment', 'Demo_CallDemo']
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PermitGfxNear', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_ReserveParashawlStart', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_ValleyVillage031
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetInterpolate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind_Barrier_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind[RemainsWind_Battle]
entrypoint: None()
actions: ['Demo_RailTrace', 'Demo_Stop']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt0]
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt1]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait1]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait0]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo021_0() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_RegisterToDeathCounter({'IsWaitFinish': True, 'IsInitializeData': True, 'GameDataName': 'Wind_Relic_BreakBattery', 'ActorName': 'RemainsWind_Battery_A_01'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleStart'})
    RemainsWind_Barrier_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Invisible', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': 'BombArrow_A'})

    call GetDemo.PorchProhibitionON()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
    WorldManagerControl.Demo_SetWind({'WindDirY': 0.0, 'WindPower': 5.5, 'IsAutoWind': False, 'WindDirZ': 1.0, 'IsWaitFinish': False, 'WindDirX': 0.5})
    RemainsWind[RemainsWind_Battle].Demo_RailTrace({'DynInitPosByRailRatio': 0.0, 'DynSpeedScale': 0.20000000298023224, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'EndFrame': -1.0, 'StartFrame': 60.0, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'GameROMPlayer', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ActorName': 'RemainsWind', 'UniqueName': 'RemainsWind_Battle', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo021_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        } {
            Npc_ValleyVillage031.Demo_LookAtObject({'IsWaitFinish': False, 'ActorName': 'RemainsWind', 'UniqueName': 'RemainsWind_Battle', 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_ValleyVillage031.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
        }

        Fader.Demo_FadeIn({'IsWaitFinish': False, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsWindBattleBgm', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Npc_ValleyVillage031.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo021_0:talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_NPC010_Battle_First'}) {

            fork {

                call BarrierON()

                GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'RemainsWind', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActorPosReferenceMode': 1, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': 'RemainsWind_Battle'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            } {
                EventSystemActor[Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk09', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': True})
            }


            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActorDirReferenceMode': 1, 'TargetActor': 1, 'CameraName': '', 'SceneName': 'C06-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            } {
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk13', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
            }

        } else {

            fork {

                call BarrierON()

                GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'RemainsWind', 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            } {
                EventSystemActor[Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo021_0:talk01', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'MessageOpenDelayTime': 60})
            }


            fork {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'RemainsWind', 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventControllerRumble.Demo_TimeSpecRumbleSmall({'Seconds': 2, 'IsWaitFinish': False, 'IsWait': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': 3, 'IsWaitFinish': False, 'SceneName': 'C06-0', 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            } {
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk12', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'MessageOpenDelayTime': 30})
            }

            EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_NPC010_Battle_First', 'IsWaitFinish': True})
        }
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo021_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        Npc_ValleyVillage031.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': 3, 'SceneName': 'C07-0', 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        RemainsWind[RemainsWind_Battle].Demo_Stop({'IsWaitFinish': False})
    }

    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk06', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
        Event1:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo021_0:talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
            GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': True})
            EventBgmCtrlTag.Demo_Ctrl({'CtrlType': 'RemainsWindBattleBgm_Jump', 'IsWaitFinish': True})
            EventMessageTransmitter1.Demo_Msg2CameraResetInterpolate({'InterpolateParam': 1.0, 'IsWaitFinish': True})
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
            Npc_ValleyVillage031.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
          case 1:
            Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo021_0:talk03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
            EventSystemActor.Demo_OpenPorch({'IsWaitFinish': True, 'RockCategory': -1})
            Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk07', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
            goto Event1
          case 2:
            Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo021_0:talk04', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo021_0:talk05', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
                EventBgmCtrlTag.Demo_Stop({'BgmName': 'RemainsWindBattleBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})
                Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_Sky', 'IsWaitFinish': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'BackToBattleStep', 'EndFade': 1, 'DemoName': 'Wind_Relic'})
            } else {
                Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk08', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
                goto Event1
            }
        }
      case 1:
        Event53:
        Npc_ValleyVillage031.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo021_0:talk10', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo021_0-C01-Npc_Rito_Teba-A-0'})
        goto Event1
      case 2:
        goto Event53
      case 3:
        goto Event53
    }
}

void BarrierON() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 0.0, 'EndFrame': -1.0})
    RemainsWind[RemainsWind_Battle].Demo_RailTrace({'DynInitPosByRailRatio': 0.0, 'DynSpeedScale': 0.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    RemainsWind[RemainsWind_Battle].Demo_Stop({'IsWaitFinish': False})
    EventControllerRumble.Demo_TimeSpecRumbleSmall({'Seconds': 3, 'IsWaitFinish': False, 'IsWait': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 119})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BatteryONOFF'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'SceneName': 'C03-0', 'TargetActor': 3, 'ActorName': 'RemainsWind', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'Accept1FrameDelay': True, 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    RemainsWind_Barrier_A_01.Demo_PlayASForDemo({'ASName': 'Appear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    RemainsWind_Barrier_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': '', 'SLinkKey': 'Demo021_0_BarrierAppear', 'IsTargetDemoSLinkUser': False})

    fork {
        EventSystemActor[CntWait0].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventControllerRumble[Cnt0].Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    } {
        EventSystemActor[CntWait1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventControllerRumble[Cnt1].Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    }

    RemainsWind[RemainsWind_Battle].Demo_RailTrace({'DynInitPosByRailRatio': 0.0, 'IsWaitFinish': False, 'DynSpeedScale': 0.20000000298023224})
}
