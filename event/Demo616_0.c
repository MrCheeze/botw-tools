-------- EventFlow: Demo616_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckCurrentMap']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo616_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})

    call BalladOfHeroCommon.PlayerWait()

    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
            Event73:
            GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo616_Fringe', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo616_Fringe'})
            EventControllerRumble.Demo_TimeSpecRumbleMiddle({'Seconds': 1, 'IsWaitFinish': False, 'IsWait': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Fader.Demo_FadeOut({'Frame': 2, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0})

            call BalladOfHeroCommon.RemainsResetFlag()

            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'WarpDestMapName': 'MainField/B-3', 'WarpDestPosName': 'Clear_RemainsWind', 'EvflName': 'Demo617_0', 'EntryPointName': 'Demo617_0'})
        } else {
            goto Event73
        }
    } else {
        if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Finish'}) {
                Event75:
                GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo616_Fringe', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo616_Fringe'})
                EventControllerRumble.Demo_TimeSpecRumbleMiddle({'Seconds': 1, 'IsWaitFinish': False, 'IsWait': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Fader.Demo_FadeOut({'Frame': 2, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0})

                call BalladOfHeroCommon.RemainsResetFlag()

                EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'WarpDestPosName': 'Clear_RemainsWater', 'WarpDestMapName': 'MainField/H-5', 'EvflName': 'Demo617_0', 'EntryPointName': 'Demo617_0Lutta'})
            } else {
                goto Event75
            }
        } else {
            if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsFire'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
                    Event77:
                    GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo616_Fringe', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo616_Fringe'})
                    EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Fader.Demo_FadeOut({'Frame': 2, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0})

                    call BalladOfHeroCommon.RemainsResetFlag()

                    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'WarpDestPosName': 'Clear_RemainsFire', 'WarpDestMapName': 'MainField/H-2', 'EntryPointName': 'Demo617_0Rudania', 'EvflName': 'Demo617_0'})
                } else {
                    goto Event77
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Finish'}) {
                    Event79:
                    GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo616_Fringe', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo616_Fringe'})
                    EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Fader.Demo_FadeOut({'Frame': 2, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0})

                    call BalladOfHeroCommon.RemainsResetFlag()

                    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'WarpDestPosName': 'Clear_RemainsElectric', 'WarpDestMapName': 'MainField/C-7', 'EvflName': 'Demo617_0', 'EntryPointName': 'Demo617_0Navoris'})
                } else {
                    goto Event79
                }
            }
        }
    }
}
