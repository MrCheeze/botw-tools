-------- EventFlow: Demo206_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor', 'Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckGameDataInt', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_PlayerEquipNearMasterSword', 'Demo_PlayerEquipHaveMasterSword', 'Demo_LookAtObject', 'Demo_ResetBoneCtrl', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[shake]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[wait2]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_MasterSwordBase_100Enemy[Base_1]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventEnable', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_MasterSwordBase_100Enemy[Base_2]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventEnable', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_MasterSwordBase_100Enemy[Base_4]
entrypoint: None()
actions: ['Demo_XLinkEventFade', 'Demo_XLinkEventCreate', 'Demo_XLinkEventEnable']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo206_0() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
        GameROMPlayer.Demo_LookAtObject({'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'UniqueName': 'Base_4'})
        Event15:
        Fader.Demo_FadeOut({'DispMode': 'Logo', 'Frame': 0, 'IsWaitFinish': True, 'Color': 1})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo206_0-C01-Link-A-0', 'NoErrorCheck': False, 'IsWaitFinish': False, 'MorphingFrame': 0.0})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
            DgnObj_MasterSwordBase_100Enemy[Base_4].Demo_XLinkEventEnable({'IsWaitFinish': True, 'IsEnable': False})
            DgnObj_MasterSwordBase_100Enemy[Base_4].Demo_XLinkEventCreate({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            Event41:
            GameROMPlayer.Demo_ResetBoneCtrl({'ResetTarget': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'MasterSword', 'AnchorName': 'DestinationAnchor'})
            GameROMPlayer.Demo_PlayerEquipNearMasterSword({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'DispMode': 'Logo', 'Frame': 0, 'Color': 1, 'IsWaitFinish': False})

            fork {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.4064940214157104, 'Pattern1PosY': 1.110595941543579, 'Pattern1PosZ': 2.582885980606079, 'Pattern1AtX': -0.8698729872703552, 'Pattern1AtY': 1.0314329862594604, 'Pattern1AtZ': -1.343384027481079, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            } {
                EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 155})
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
                    DgnObj_MasterSwordBase_100Enemy[Base_4].Demo_XLinkEventFade({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': ''})
                    Event81:
                    EventControllerRumble[shake].Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
                } else {
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
                        DgnObj_MasterSwordBase_100Enemy[Base_2].Demo_XLinkEventFade({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': ''})
                        goto Event81
                    } else {
                        DgnObj_MasterSwordBase_100Enemy[Base_1].Demo_XLinkEventFade({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': ''})
                        goto Event81
                    }
                }
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            fork {
                EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'IsWaitFinish': True, 'ChangeType': 1, 'SetFrame': 120.0})
            } {
                EventSystemActor[wait2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo202_0_Warp'})
                SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo005_0_warp', 'SoundDelay': 0, 'SLinkInst': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2})
            }

            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Color': 1, 'Frame': 0})
            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': False, 'NoFadeIn': True})
            if !EventSystemActor.CheckEventCancel() {
                Event123:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_PlayerEquipHaveMasterSword({'IsWaitFinish': True})

                call 100enemy.RetireBattle()

            } else {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
                SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
                goto Event123
            }
        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
                DgnObj_MasterSwordBase_100Enemy[Base_2].Demo_XLinkEventEnable({'IsWaitFinish': True, 'IsEnable': False})
                DgnObj_MasterSwordBase_100Enemy[Base_2].Demo_XLinkEventCreate({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                goto Event41
            } else {
                DgnObj_MasterSwordBase_100Enemy[Base_1].Demo_XLinkEventEnable({'IsWaitFinish': True, 'IsEnable': False})
                DgnObj_MasterSwordBase_100Enemy[Base_1].Demo_XLinkEventCreate({'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                goto Event41
            }
        }
    } else {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
            GameROMPlayer.Demo_LookAtObject({'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'UniqueName': 'Base_2'})
            goto Event15
        } else {
            GameROMPlayer.Demo_LookAtObject({'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'UniqueName': 'Base_1'})
            goto Event15
        }
    }
}
