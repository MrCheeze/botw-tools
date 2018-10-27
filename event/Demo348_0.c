-------- EventFlow: Demo348_0 --------

Actor: RemainsWind_Barrier_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWind[RemainsWind_Battle]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: EventSystemActor[Sound]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_Battery_A_02[BatteryBroken_R]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_Battery_A_02[BatteryBroken_Rear]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_Battery_A_02[BatteryBroken_L]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_Battery_A_02[BatteryBroken_Front]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[TimeSpecRumble_01]
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[TimeSpecRumble_02]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage031
entrypoint: None()
actions: ['Demo_WarpToAnchor', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo348_0() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'RemainsWindBattleBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})
    Npc_ValleyVillage031.Demo_WarpToAnchor({'DestinationX': -3707.56005859375, 'DestinationY': 250.0, 'DestinationZ': -2129.7900390625, 'IsWaitFinish': True, 'DirectionY': 0.0})

    fork {
        DgnObj_Battery_A_02[BatteryBroken_Front].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': '', 'SLinkKey': 'Demo_DamagedSpark_L'})
        EventControllerRumble[TimeSpecRumble_01].Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 4, 'IsWait': False})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'RemainsWind', 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'EndFrame': 150.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            Npc_ValleyVillage031.Demo_TalkASync({'MessageId': 'ShoutMsg/Shout_Npc_ValleyVillage010:BreakBattery_03', 'DispFrame': 30, 'IsWaitFinish': True, 'IsChecked': False})
        }

        DgnObj_Battery_A_02[BatteryBroken_Front].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': '', 'SLinkKey': 'Demo_DamagedSpark_L'})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'RemainsWind', 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'Accept1FrameDelay': True, 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 195})
        EventControllerRumble[TimeSpecRumble_02].Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 4})
        DgnObj_Battery_A_02[BatteryBroken_Front].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Explosion', 'SLinkKey': 'Demo_Explosion', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Battery_A_02_Die_Front'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
        DgnObj_Battery_A_02[BatteryBroken_Rear].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Explosion', 'SLinkKey': 'Demo_Explosion', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Battery_A_02_Die_Rear'})
        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 2.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_Battery_A_02[BatteryBroken_R].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Explosion', 'SLinkKey': 'Demo_Explosion', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Battery_A_02_Die_R'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        DgnObj_Battery_A_02[BatteryBroken_L].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Explosion', 'SLinkKey': 'Demo_Explosion', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Battery_A_02_Die_L'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        RemainsWind_Barrier_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': '', 'SLinkKey': 'Demo348_0_BarrierDisappear', 'IsTargetDemoSLinkUser': False})
        RemainsWind_Barrier_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Disappear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'SceneName': 'C03-0', 'TargetActor': 3, 'ActorName': 'RemainsWind', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'RemainsWind_Battle', 'Accept1FrameDelay': True, 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 3, 'IsWait': False})
    } {
        EventSystemActor[Sound].Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        RemainsWind[RemainsWind_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'Demo348_0_RemainsWindCry', 'IsTargetDemoSLinkUser': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo117_0', 'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 1})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleStart'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BatteryONOFF'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_Sky', 'IsWaitFinish': True})
    EventSystemActor.Demo_ChangeScene({'StartType': -1, 'WarpDestMapName': 'MainFieldDungeon/RemainsWind', 'IsWaitFinish': True, 'EvflName': 'Demo704_0', 'EntryPointName': 'EnterRemainWind', 'WarpDestPosName': 'StartDemoEnter', 'FadeType': 0})
}
