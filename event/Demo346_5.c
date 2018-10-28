-------- EventFlow: Demo346_5 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON']
queries: ['CheckFlag', 'RandomChoice8', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: VolcanoEruption
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_Idling', 'Demo_ForceChangeForDroneAlert']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayASAdapt', 'Demo_Join']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: RemainsFire[RemainsFire_Battle]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_Idling', 'Demo_ForceChangeForDroneAlert']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FollowGoron[YunBo_Bridge]
entrypoint: None()
actions: ['Demo_ForceChangeForDroneAlert', 'Demo_PlayASForDemo', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo346_5_Drone010() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone010'})

}

void Demo346_5_Drone009() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone009'})

}

void Demo346_5_Drone008() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone008'})

}

void Demo346_5_Drone007() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone007'})

}

void Demo346_5_Drone006() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone006'})

}

void Demo346_5_Drone005() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone005'})

}

void Demo346_5_Drone004() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone004'})

}

void Demo346_5_Drone003() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone003'})

}

void Demo346_5_Drone002() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone002'})

}

void Demo346_5_Drone001() {

    call Demo346_5_SubFlow({'CameraTargetUniqueName': 'Drone001'})

}

void Demo346_5_SubFlow() {
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_DroneAlert1st'}) {
        EventBgmCtrlTag.Demo_Ctrl({'CtrlType': 'RemainsFireBattleBgm_Alert2', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo346_5-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            Event85:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                switch EventSystemActor.RandomChoice8() {
                  case 0:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_00', 'DispFrame': 90})
                  case [1, 2]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_01', 'DispFrame': 90})
                  case [3, 4]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_02', 'DispFrame': 90})
                  case [5, 6]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_03'})
                  case 7:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_04'})
                }
            } {
                Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Found', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'ActorName': 'RemainsFire_Drone_A_01', 'EndFrame': 90.0, 'IsWaitFinish': True, 'SceneName': 'C02-0', 'UniqueName': 'CameraTargetUniqueName', 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'BgCheck': False})
            }

            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'Count': 0.0})
            Npc_FollowGoron[YunBo_Bridge].Demo_ForceChangeForDroneAlert({'IsWaitFinish': False})
            RemainsFire[RemainsFire_Battle].Demo_ForceChangeForDroneAlert({'IsWaitFinish': False})
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_Join({'IsWaitFinish': True})
            goto Event85
        } else {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
            goto Event85
        }
    } else {
        EventBgmCtrlTag.Demo_Ctrl({'CtrlType': 'RemainsFireBattleBgm_Alert', 'IsWaitFinish': True})

        fork {
            VolcanoEruption.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        } {
            RemainsFire[RemainsFire_Battle].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        }

        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo346_5-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            Event52:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                switch EventSystemActor.RandomChoice8() {
                  case 0:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_00', 'DispFrame': 90})
                  case [1, 2]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_01', 'DispFrame': 90})
                  case [3, 4]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_02', 'DispFrame': 90})
                  case [5, 6]:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_03'})
                  case 7:
                    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Search_04'})
                }
            } {
                Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Found', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'RemainsFire_Drone_A_01', 'EndFrame': 90.0, 'IsWaitFinish': True, 'SceneName': 'C02-0', 'UniqueName': 'CameraTargetUniqueName', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
                EventControllerRumble.Demo_TimeSpecRumbleSmall({'Seconds': 1, 'IsWaitFinish': False, 'IsWait': False})
            }

            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle2ndAttack'}) {

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C04-2', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': '', 'ActorName': 'FldObj_LavaPlane_A_04', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Place3_TailAttack', 'IsWaitFinish': False, 'StartFrame': -1.0})
                }

                Event224:

                fork {
                    EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                    EventControllerRumble.Demo_RumbleMiddle({'Count': 2, 'IsWaitFinish': False})
                    EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                    EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': True})
                    EventControllerRumble.Demo_TimeSpecRumbleSmall({'Seconds': 1, 'IsWaitFinish': False, 'IsWait': False})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
                    EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Pattern': 1, 'Power': 2.0, 'Count': 1})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
                    VolcanoEruption.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Eruption', 'SLinkKey': 'Eruption', 'IsTargetDemoSLinkUser': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                }

                EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_DroneAlert1st', 'IsWaitFinish': True})

                fork {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'Count': 0.0})
                } {
                    VolcanoEruption.Demo_ForceChangeForDroneAlert({'IsWaitFinish': False})
                } {
                    Npc_FollowGoron[YunBo_Bridge].Demo_ForceChangeForDroneAlert({'IsWaitFinish': False})
                }

            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle1stAttack'}) {

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C04-1', 'TargetActorDirReferenceMode': 1, 'ActorName': 'FldObj_LavaPlane_A_04', 'UniqueName': '', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Place2_TailAttack', 'IsWaitFinish': False, 'StartFrame': -1.0})
                }

            } else {

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C04-0', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'ActorName': 'FldObj_LavaPlane_A_04', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Place1_TailAttack', 'IsWaitFinish': False, 'StartFrame': -1.0})
                }

            }
            goto Event224
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_Join({'IsWaitFinish': True})
            goto Event52
        } else {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
            goto Event52
        }
    }
}
