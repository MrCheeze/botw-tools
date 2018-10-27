-------- EventFlow: Demo020_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind[RemainsWind_Demo020_0]
entrypoint: None()
actions: ['Demo_RailTrace']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Npc_ValleyVillage010[Teba_FlightTraining]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[teba]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_FixPosition']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forSound]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo020_0() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_WindRelicONOFF'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_WindRelicDemo20ONOFF'})
    WorldManagerControl.Demo_SetWind({'IsWaitFinish': False, 'WindPower': 5.5, 'WindDirY': 0.0, 'IsAutoWind': False, 'WindDirX': 1.0, 'WindDirZ': -0.550000011920929})

    fork {
        EventSystemActor[forSound].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        ListenerCtrlTag.Demo_FixPosition({'FixType': 'Fix', 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': 3, 'ActorName': 'Npc_ValleyVillage010', 'UniqueName': 'Teba_FlightTraining', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo020_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'MorphingFrame': 0.0})
    } {
        Npc_ValleyVillage010[Teba_FlightTraining].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo020_0-C01-Npc_Rito_Teba-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
        EventSystemActor[teba].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_ValleyVillage010[Teba_FlightTraining].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo020_0_RitoTail'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        RemainsWind[RemainsWind_Demo020_0].Demo_RailTrace({'IsWaitFinish': False, 'DynInitPosByRailRatio': 0.0, 'DynSpeedScale': 0.20000000298023224})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 270})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    }

    ListenerCtrlTag.Demo_FixPosition({'IsWaitFinish': True, 'FixType': 'Unfix'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_WindRelicONOFF'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_WindRelicDemo20ONOFF'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Battle'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_Sky', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Demo021_0', 'DemoName': 'Demo021_0', 'EndFade': 0})
}
