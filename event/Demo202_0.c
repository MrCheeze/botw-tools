-------- EventFlow: Demo202_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_PlayerReleaseMasterSword', 'Demo_LookAtObject', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_SwitchPlayerEquipment', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_SetItemDataToPouch', 'Demo_SetGameDataInt', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice4', 'CheckMasterSwordState', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
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
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[shake]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[cam]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_Demo2020
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'IsWorld': True, 'PosY': 249.6999969482422, 'PosZ': -2111.0, 'CreateMode': 1, 'PosX': 431.6499938964844}

void Demo202_0() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 4, 'IsValid': True, 'FaceId': 2})
    switch EventSystemActor.CheckMasterSwordState() {
      case [0, 2]:
        if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Junior'}) {
            if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Middle'}) {
                if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Senior'}) {
                    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/100enemy:talk19'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Event115:
                        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Value': 0, 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': '100enemy_CurrentCourse_Junior', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Middle', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Senior', 'IsWaitFinish': True})
                        Event1:
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'DispMode': 'Logo', 'Frame': 0, 'IsWaitFinish': True, 'Color': 1})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'F-2', 'IsWaitFinish': True, 'WarpDestPosName': 'MasterSword'})
                        EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_Weapon': 'Weapon_Sword_070', 'UnequipWeapon': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipArmorHead': False, 'UnequipBow': False, 'UnequipShield': False})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 429.8984375, 'Pattern1PosY': 250.10838317871094, 'Pattern1PosZ': -2112.406005859375, 'Pattern1AtX': 431.829345703125, 'Pattern1AtY': 250.61972045898438, 'Pattern1AtZ': -2110.7265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
                        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Sheath_BindUpdateSkip'})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.5, 'Pattern1PosY': 1.25, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosZ': 0.4000000059604645, 'Pattern1AtX': -1.274999976158142, 'Pattern1AtY': 1.5499999523162842, 'Pattern1AtZ': 0.3499999940395355, 'Pattern1Fovy': 16.0, 'StartCalcOnly': False, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.05627400055527687, 'Pattern1PosZ': 1.9488530158996582, 'Pattern1AtX': -0.20416299998760223, 'Pattern1AtZ': -4.393065929412842, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1Fovy': 16.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosY': 0.2639999985694885, 'Pattern1AtY': 0.1599999964237213, 'ReviseModeEnd': 0})

                            fork {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 429.8984375, 'Pattern1PosY': 250.10838317871094, 'Pattern1PosZ': -2112.406005859375, 'Pattern1AtX': 431.829345703125, 'Pattern1AtY': 250.61972045898438, 'Pattern1AtZ': -2110.7265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                            } {
                                EventSystemActor[shake].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
                                EventSystemActor[shake].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})

                                fork {
                                    EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
                                } {
                                    Dm_Locator_Demo2020.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC_100Dungeon_MasterSwordGlow_Demo', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                                }

                            }

                        } {
                            Fader.Demo_FadeIn({'DispMode': 'Logo', 'Frame': 0, 'Color': 1, 'IsWaitFinish': False})
                            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
                        } {
                            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Demo202_0-C01-Link', 'IsWaitFinish': True, 'MorphingFrame': 0.0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1})
                            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo202_0-C01-Link_Loop'})
                        }

                        GameROMPlayer.Demo_PlayerReleaseMasterSword({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

                        fork {
                            EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'IsWaitFinish': True, 'ChangeType': 1, 'SetFrame': 120.0})
                        } {
                            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo202_0_Warp', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo005_0_warp', 'SoundDelay': 0, 'SLinkInst': ''})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
                        } {
                            EventSystemActor[cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.829833984375, 'Pattern1PosY': 0.3113099932670593, 'Pattern1PosZ': 2.656738042831421, 'Pattern1AtX': -0.12750199437141418, 'Pattern1AtY': 0.9198459982872009, 'Pattern1AtZ': 0.3232420086860657, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'Count': 120.0, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                        }

                        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
                        if !EventSystemActor.CheckEventCancel() {
                            Event76:
                            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
                            EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                            Fader.Demo_FadeOut({'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1})
                            GameROMPlayer.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Demo202_0_Warp', 'SLinkKey': ''})
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': '100enemy_Sheath_BindUpdateSkip'})
                            EventSystemActor.Demo_SetItemDataToPouch({'TargetActorName': 'Weapon_Sword_070', 'IsWaitFinish': True})

                            call 100enemy.Start()

                        } else {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
                            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
                            goto Event76
                        }
                      case 1:
                        Event116:
                        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Value': 1, 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': '100enemy_CurrentCourse_Middle', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Junior', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Senior', 'IsWaitFinish': True})
                        goto Event1
                      case 2:
                        Event117:
                        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Value': 2, 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': '100enemy_CurrentCourse_Senior', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Junior', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_CurrentCourse_Middle', 'IsWaitFinish': True})
                        goto Event1
                    }
                } else {
                    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/100enemy:talk18'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        goto Event115
                      case 1:
                        goto Event116
                      case 2:
                        goto Event117
                    }
                }
            } else {
                NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/100enemy:talk17'})
                if !EventSystemActor.GeneralChoice3() {
                    goto Event115
                } else {
                    goto Event116
                }
            }
        } else {
            goto Event115
        }
      case [1, 3]:
        NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/100enemy:talk20'})
    }
}
