-------- EventFlow: Demo309_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_CloseItemMenu', 'Demo_ShowMemoryPhoto', 'Demo_StorePlayerPosAndRotate', 'Demo_RestorePlayerPosAndRotate', 'Demo_WarpPlayerToAnchor', 'Demo_ShowPhoto', 'Demo_WarpPlayerToDestination', 'Demo_WarpPlayer', 'Demo_SetGameDataInt']
queries: ['CheckFlag', 'CheckSelectPicture', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_LookAtObjectNow', 'Demo_PlayerWait', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_PublicVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron006
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_VisibleOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo309_2() {
    Starter.Demo_VisibleOff({'IsWaitFinish': False})
    EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'PictureMemory_LastShowIdx', 'Value': 'PhotoIdx', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 2, 'AtAppendMode': 2, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'TargetActor1': 3, 'ActorName1': 'LookTag', 'Pattern1AtY': 0.0, 'Pattern1PosY': 0.0, 'Count': 0.0, 'StartCalcOnly': True, 'Pattern1PosX': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'UniqueName1': 'UniqueName1', 'FovyAppendMode': 1, 'MotionMode': 1, 'Pattern1AtX': 6.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.0, 'Pattern1PosZ': -9.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1Fovy': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'ActorName1': 'LookTag', 'Pattern1AtY': 0.0, 'Pattern1PosY': 0.0, 'Count': 150.0, 'Pattern1PosX': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'UniqueName1': 'UniqueName1', 'Pattern1AtX': 0.0, 'MotionMode': 1, 'Pattern1AtZ': 0.0, 'Pattern1PosZ': -9.0, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'UniqueName'})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 0}) {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_Village_SheikerMemoryPicture_A_01'}) {
                Event296:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo309_2-C02-Link-A-0', 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                Event32:
                EventSystemActor.Demo_StorePlayerPosAndRotate({'IsWaitFinish': True, 'GameDataVec3fPlayerPos': 'Demo_PlayerPosition', 'GameDataFloatPlayerDirectionY': 'Demo_PlayerAngle'})
            } else {
                goto Event32
            }
        } else {
            goto Event296
        }
    }

    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 0}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_Village_SheikerMemoryPicture_A_01'}) {
            Event154:
            GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'TargetActor1': 1, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 169})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 1, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C02-1', 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 0}) {
                EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'TwnObj_Village_SheikerMemoryPicture_A_01'})
                Event34:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 29})
                EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 152})
                EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo309_2-C04-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'MotionMode': 1, 'TargetActor1': 3, 'ActorName1': 'LookTag', 'Pattern1AtY': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': -14.0, 'Count': 60.0, 'UniqueName1': 'UniqueName1', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtZ': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo309_2-C05-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': True})
                Event64:

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C04-0', 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
                    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo309_Player_Remember'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
                }

                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'DemoName', 'EndFade': 1})
                EventSystemActor.Demo_RestorePlayerPosAndRotate({'IsWaitFinish': True, 'GameDataVec3fPlayerPos': 'Demo_PlayerPosition', 'GameDataFloatPlayerDirectionY': 'Demo_PlayerAngle'})
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo138_0'}) {
                    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo309_1', 'EntryPointName': 'Demo309_1', 'IsWaitFinish': True, 'EndFade': 0})
                } else {

                    fork {
                        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    } {
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo309_2-C06-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': True})
                    } {
                        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 1}) {
                            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo309_Player_Remember_End_Last'})
                        } else {
                            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo309_Player_Remember_End', 'IsWaitFinish': False})
                        }
                    }

                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'PictureMemory_Spot_Int', 'Operator': 'Equal', 'Value': 1}) {
                        EventSystemActor.Demo_ShowMemoryPhoto({'IsWaitFinish': True, 'PhotoNo': -1})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo309_AppAlbum_Find12Picture'})
                        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo309_2:Text_00', 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 120})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
                        Event130:

                        fork {
                            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'SceneName': 'C05-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        } {
                            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo309_2-C06-Link-A-1', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        }

                        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
                    } else {
                        goto Event130
                    }
                }
            } else {
                EventSystemActor.Demo_ShowMemoryPhoto({'IsWaitFinish': True, 'PhotoNo': 'PhotoNo'})
                goto Event34
            }
        } else {

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-2', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
            }

            GameRomCamera.Demo_MovePosFlow({'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorName1': 'LookTag', 'Pattern1AtY': 0.0, 'Pattern1PosY': 0.0, 'UniqueName1': 'UniqueName1', 'Pattern1PosZ': -7.0, 'CollisionInterpolateSkip': False, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'MotionMode': 1, 'ReviseModeEnd': 0, 'Cushion': 1.0, 'Count': 45.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtZ': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'ObjectId': 2, 'FaceId': 1, 'TurnDirection': 90.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo309_2-C05-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': True})
            goto Event64
        }
    } else {
        goto Event154
    }
}

void Demo127_309() {

    call Demo309_2({'DemoName': 'Demo127_0', 'UniqueName': 'Demo127_0', 'UniqueName1': 'Demo127_0', 'UniqueName_000': 'Demo127_0', 'FlagName': 'IsPlayed_Demo127_0', 'PhotoNo': 1, 'PhotoIdx': 1})

}

void Demo126_309() {

    call Demo309_2({'DemoName': 'Demo126_0', 'UniqueName': 'Demo126_0', 'FlagName': 'IsPlayed_Demo126_0', 'UniqueName1': 'Demo126_0', 'UniqueName_000': 'Demo126_0', 'PhotoNo': 0, 'PhotoIdx': 0})

}

void Demo128_309() {

    call Demo309_2({'DemoName': 'Demo128_0', 'FlagName': 'IsPlayed_Demo128_0', 'UniqueName1': 'Demo128_0', 'UniqueName_000': 'Demo128_0', 'PhotoNo': 2, 'UniqueName': 'Demo128_0', 'PhotoIdx': 2})

}

void Demo129_309() {

    call Demo309_2({'DemoName': 'Demo129_0', 'FlagName': 'IsPlayed_Demo129_0', 'UniqueName1': 'Demo129_0', 'UniqueName_000': 'Demo129_0', 'PhotoNo': 3, 'UniqueName': 'Demo129_0', 'PhotoIdx': 3})

}

void Demo130_309() {

    call Demo309_2({'DemoName': 'Demo130_0', 'FlagName': 'IsPlayed_Demo130_0', 'UniqueName1': 'Demo130_0', 'UniqueName_000': 'Demo130_0', 'PhotoNo': 4, 'UniqueName': 'Demo130_0', 'PhotoIdx': 4})

}

void Demo131_309() {

    call Demo309_2({'DemoName': 'Demo131_0', 'FlagName': 'IsPlayed_Demo131_0', 'UniqueName1': 'Demo131_0', 'UniqueName_000': 'Demo131_0', 'PhotoNo': 5, 'UniqueName': 'Demo131_0', 'PhotoIdx': 5})

}

void Demo132_309() {

    call Demo309_2({'DemoName': 'Demo132_0', 'FlagName': 'IsPlayed_Demo132_0', 'UniqueName1': 'Demo132_0', 'UniqueName_000': 'Demo132_0', 'PhotoNo': 6, 'UniqueName': 'Demo132_0', 'PhotoIdx': 6})

}

void Demo133_309() {

    call Demo309_2({'DemoName': 'Demo133_0', 'FlagName': 'IsPlayed_Demo133_0', 'UniqueName1': 'Demo133_0', 'UniqueName_000': 'Demo133_0', 'PhotoNo': 7, 'UniqueName': 'Demo133_0', 'PhotoIdx': 7})

}

void Demo135_309() {

    call Demo309_2({'DemoName': 'Demo135_0', 'FlagName': 'IsPlayed_Demo135_0', 'UniqueName1': 'Demo135_0', 'UniqueName_000': 'Demo135_0', 'PhotoNo': 9, 'UniqueName': 'Demo135_0', 'PhotoIdx': 9})

}

void Demo136_309() {

    call Demo309_2({'DemoName': 'Demo136_0', 'FlagName': 'IsPlayed_Demo136_0', 'UniqueName1': 'Demo136_0', 'UniqueName_000': 'Demo136_0', 'PhotoNo': 10, 'UniqueName': 'Demo136_0', 'PhotoIdx': 10})

}

void Demo137_309() {

    call Demo309_2({'DemoName': 'Demo137_0', 'FlagName': 'IsPlayed_Demo137_0', 'UniqueName1': 'Demo137_0', 'UniqueName_000': 'Demo137_0', 'PhotoNo': 11, 'UniqueName': 'Demo137_0', 'PhotoIdx': 11})

}

void Demo138_309() {

    call Demo309_2({'PhotoNo': 11, 'FlagName': 'IsPlayed_Demo138_0', 'DemoName': 'Demo138_0', 'UniqueName1': 'Demo138_0', 'UniqueName_000': 'Demo138_0', 'UniqueName': 'Demo138_0', 'PhotoIdx': 11})

}

void Demo134_309() {

    call Demo309_2({'DemoName': 'Demo134_0', 'FlagName': 'IsPlayed_Demo134_0', 'UniqueName1': 'Demo134_0', 'UniqueName_000': 'Demo134_0', 'PhotoNo': 8, 'UniqueName': 'Demo134_0', 'PhotoIdx': 8})

}

void HerosMemoryStart() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C04-0', 'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo309_2-C05-Link-A-1', 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo309_Player_Remember'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
    }

    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
}

void HeroMemoryEnd() {
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo309_2-C06-Link-A-0', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo309_Player_Remember_End', 'IsWaitFinish': False})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}

void HerosMemoryStart_Zora() {
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': False})
    EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C52-0', 'StartFrame': 131.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 224.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 150.89300537109375, 'DestinationX': 3302.697265625, 'DestinationY': 244.2703094482422, 'DestinationZ': -472.2724609375})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ClothWarpMode': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    }

    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'TargetActor': 1, 'SceneName': 'C52-1', 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'StartFrame': 154.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 206.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'StartFrame': 240.0, 'EndFrame': 282.0, 'SceneName': 'C52-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C52-1', 'TargetActor': 1, 'StartFrame': 260.0, 'EndFrame': 312.0, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'StartFrame': 362.0, 'EndFrame': 412.0, 'SceneName': 'C52-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C52-1', 'TargetActor': 1, 'StartFrame': 326.0, 'EndFrame': 375.0, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C52-2', 'IsWaitFinish': True, 'StartFrame': 20.0, 'EndFrame': 38.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C52-1', 'TargetActor': 1, 'StartFrame': 385.0, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 402.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C52-2', 'IsWaitFinish': True, 'StartFrame': 106.0, 'EndFrame': 117.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C52-1', 'TargetActor': 1, 'StartFrame': 422.0, 'EndFrame': 441.0, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C52-2', 'IsWaitFinish': True, 'StartFrame': 165.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 215.0})

    call HerosMemoryStart()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo152_0', 'EntryPointName': 'Demo152_0', 'EndFade': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})

    call HeroMemoryEnd()

}

void HerosMemoryStart_Rito() {
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': False})
    EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 93.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 42.0, 'DestinationY': 323.5799865722656, 'DestinationX': -3607.679931640625, 'DestinationZ': -1821.3299560546875})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ClothWarpMode': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'SceneName': 'C50-0', 'StartFrame': 163.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 215.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'StartFrame': 150.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 192.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'SceneName': 'C50-0', 'StartFrame': 193.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 245.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'StartFrame': 246.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 296.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'SceneName': 'C50-0', 'StartFrame': 265.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 314.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'StartFrame': 347.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 365.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'SceneName': 'C50-0', 'StartFrame': 360.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 377.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'StartFrame': 384.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 395.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'SceneName': 'C50-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 377.0, 'EndFrame': 396.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'SceneName': 'C50-1', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 396.0, 'EndFrame': 446.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationZ': -1822.31103515625, 'DestinationY': 323.6319885253906, 'DestinationX': -3608.404052734375, 'DirectionY': 30.0})
        GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    }


    call HerosMemoryStart()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo151_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo151_0', 'EndFade': 1})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'Saki_Demo', 'WarpDestMapName': 'B-3'})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})

    call HeroMemoryEnd()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
}

void HerosMemoryStart_Gerudo() {
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': False})
    EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-1', 'IsWaitFinish': True, 'EndFrame': 93.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-0', 'StartFrame': 8.0, 'IsWaitFinish': True, 'EndFrame': 60.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-1', 'StartFrame': 108.0, 'EndFrame': 150.0, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-0', 'IsWaitFinish': True, 'StartFrame': 136.0, 'EndFrame': 188.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-1', 'StartFrame': 175.0, 'IsWaitFinish': True, 'EndFrame': 225.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-0', 'StartFrame': 239.0, 'EndFrame': 288.0, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-2', 'IsWaitFinish': True, 'StartFrame': 7.0, 'EndFrame': 25.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True, 'SceneName': 'C53-3', 'StartFrame': 83.0, 'EndFrame': 100.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-2', 'IsWaitFinish': True, 'StartFrame': 16.0, 'EndFrame': 27.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True, 'SceneName': 'C53-3', 'StartFrame': 151.0, 'EndFrame': 170.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C53-2', 'IsWaitFinish': True, 'StartFrame': 97.0, 'EndFrame': 147.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 166.6699981689453, 'DestinationX': -3870.1298828125, 'DestinationZ': 2949.7099609375, 'DirectionY': 110.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    }


    call HerosMemoryStart()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo153_0', 'EndFade': 0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 166.6699981689453, 'DestinationX': -3870.1298828125, 'DestinationZ': 2949.7099609375, 'DirectionY': 110.0})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})

    call HeroMemoryEnd()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
}

void HerosMemoryStart_Goron() {
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': False})
    EventBgmCtrlTag.Demo_Start({'BgmName': 'RememberDemoBgm', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C51-1', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 93.0})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'SceneName': 'C51-0', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 52.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C51-1', 'StartFrame': 150.0, 'EndFrame': 192.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'SceneName': 'C51-0', 'EndFrame': 141.0, 'StartFrame': 89.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C51-1', 'StartFrame': 246.0, 'EndFrame': 296.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'SceneName': 'C51-0', 'StartFrame': 193.0, 'EndFrame': 242.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C51-2', 'EndFrame': 18.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'SceneName': 'C51-0', 'StartFrame': 262.0, 'EndFrame': 279.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C51-2', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 120.0, 'StartFrame': 40.0})
    Npc_Goron006.Demo_VisibleOff({'IsWaitFinish': False})

    call HerosMemoryStart()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 1, 'ActorName': 'Npc_Goron006', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'ObjectId': 0, 'IsTurnToLookAtPos': False})
    Npc_Goron006.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo150_0', 'EntryPointName': 'Demo150_0', 'EndFade': 1})
    EventSystemActor.Demo_WarpPlayer({'WarpDestPosName': 'BurudoFront', 'WarpDestMapName': 'G-2', 'IsWaitFinish': True})

    call HeroMemoryEnd()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
}
