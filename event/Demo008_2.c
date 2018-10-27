-------- EventFlow: Demo008_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_SetEnterDungeonFlag', 'Demo_OpenDungeonMessage', 'Demo_OpenDungeonTitle', 'Demo_WaitForCloseFade', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_WarpPlayerToDestination', 'Demo_KillUIScreen', 'Demo_OpenDungeonSmallTitle', 'Demo_DisableCameraInput']
queries: ['IsOnEnterDungeonFlag', 'CheckFlag', 'WhatDungeonType', 'CheckEventCancel', 'CheckCurrentMap']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceElevator_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAhead', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_ReserveConnectTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetInterpolate', 'Demo_Msg2CameraReset']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[ForSkip]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_Hrl_Warpin_2x2_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpIn]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo008_2() {
    EventSystemActor.Demo_DisableCameraInput({'IsWaitFinish': True})
    EventMessageTransmitter1.Demo_Msg2CameraReset({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
        if !EventSystemActor.IsOnEnterDungeonFlag() {
            GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 80.0, 'IsWaitFinish': True})
            Event5:

            fork {
                EventSystemActor[ForSkip].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
            } {
                DgnObj_Hrl_Warpin_2x2_01.Demo_XLinkEventCreate({'ELinkKey': 'Demo_ElevatorActive', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                DgnObj_EntranceElevator_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'Demo008_2_Enter', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})

                fork {
                    DgnObj_EntranceElevator_A_01.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'MoveToFloor', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                } {
                    DgnObj_EntranceElevator_A_01.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'ConstantColor', 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0})
                }

            } {
                GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 117})
                EventCameraRumble.Demo_Rumble({'Pattern': 1, 'Count': 1, 'Power': 0.029999999329447746, 'IsWaitFinish': True, 'Sideways': False})
                EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
            } {
                if !EventSystemActor.IsOnEnterDungeonFlag() {
                    if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo008_2-C02-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                    } else {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo008_2-C01-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                    }
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo008_2-C02-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                }
            }

            EventSystemActor.Demo_FlagON({'FlagName': 'IsInside_Dungeon', 'IsWaitFinish': True})

            fork {
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
            } {
                DgnObj_Hrl_Warpin_2x2_01.Demo_XLinkEventFade({'ELinkKey': 'Demo_ElevatorActive', 'SLinkKey': '', 'IsWaitFinish': True})
                DgnObj_Hrl_Warpin_2x2_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_EntranceLight_Border', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
                EventSystemActor[WarpIn].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
                DgnObj_Hrl_Warpin_2x2_01.Demo_XLinkEventFade({'SLinkKey': '', 'IsWaitFinish': True, 'ELinkKey': 'Demo_EntranceLight_Border'})
            } {
                if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
                    if !EventSystemActor.IsOnEnterDungeonFlag() {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo008_2-C01-Link-A-3', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                    } else {
                        GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.10000000149011612, 'IsWaitFinish': True, 'DestPosX': 'Arg_DestinationX', 'DestPosY': 'Arg_DestinationY', 'DestPosZ': 'Arg_DestinationZ'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    }
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo008_2-C01-Link-A-1', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                }
            }

            if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
                if !EventSystemActor.IsOnEnterDungeonFlag() {

                    call Demo008_2_Sub_ToDungeonFloor({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

                } else {

                    call SkipEnd({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})

                    EventSystemActor.Demo_OpenDungeonSmallTitle({'SubMstxt': 'StaticMsg/Dungeon', 'IsWaitFinish': False})
                }
            } else {

                call Demo008_2_Sub_ToDungeonFloor({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'First_CDungeon'})
            }
        } else {
            Event128:
            GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 80.0, 'IsWaitFinish': True})
            goto Event5
        }
    } else {
        goto Event128
    }
}

void SkipEnd() {
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor.CheckEventCancel() {
        EventMessageTransmitter1.Demo_Msg2CameraResetInterpolate({'IsWaitFinish': True, 'InterpolateParam': 0.0})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'DestinationX', 'DestinationY': 'DestinationY', 'DestinationZ': 'DestinationZ', 'DirectionY': 'DirectionY'})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
    }
}

void Demo008_2_Sub_ToDungeonFloor() {
    if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        Event99:
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
        if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon099'}) {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo008_2:talk03'})
            Event105:

            call SkipEnd({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})

            EventSystemActor.Demo_OpenDungeonTitle({'SubMstxt': 'StaticMsg/Dungeon', 'IsWaitFinish': False})
            EventSystemActor.Demo_SetEnterDungeonFlag({'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'First_CDungeon'}) {
            Event100:
            switch EventSystemActor.WhatDungeonType() {
              case 0:
                if !EventSystemActor.CheckEventCancel() {
                    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo008_2:talk00'})
                    Event98:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'First_CDungeon_Riddle'})
                    goto Event105
                } else {
                    goto Event98
                }
              case 1:
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo008_2:talk01'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'First_CDungeon_Enemy'})
                goto Event105
              case 2:
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo008_2:talk02'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'First_CDungeon_Prize'})
                goto Event105
            }
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            goto Event100
        }
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo008_2-C03-Link-A-0', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        goto Event99
    }
}
