-------- EventFlow: Demo029_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_WarpPlayerToAnchor', 'Demo_ReqCreateManufactedItem']
queries: ['CheckFlag', 'CheckEventCancel', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Fairy]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop', 'Demo_NotifyTalk', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_UpdateEquip', 'Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_DressFairy_00
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_02
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_03
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Fairy01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_00[Demo_029(FairyActor)]
entrypoint: Demo_029(FairyActor)
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: None

void Demo_029() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 1.7000000476837158, 'ExceptGroups': '', 'FadeInSec': 2.5})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 2}) {
        EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'ASName': 'Demo029_0-C03-Link-A-0', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True})
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C12-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'CameraTargetActorName', 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': True, 'OverwriteAtDist': 15.0})
        } {
            Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Give_Refuge', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
            EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'SLinkKey': 'Breath', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo029_0_Breath_Lv1'})
            EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 95})
        }

        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
        if !EventSystemActor.CheckEventCancel() {
            Fader.Demo_FadeOut({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 1, 'Frame': 0})
            Event326:

            fork {

                call BranchEquip()

                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': 0.0, 'NoErrorCheck': False})
            } {
                Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventFade({'SLinkKey': '', 'IsWaitFinish': True, 'ELinkKey': 'Demo029_0_Breath_Lv1'})
                EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Give_Refuge_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
            }

            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'StartCalcOnly': True, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'TargetActor1': 3, 'UniqueName1': '', 'ActorName1': 'CameraTargetActorName', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 3.3499999046325684, 'Pattern1PosZ': 14.800000190734863, 'Pattern1AtX': 0.0, 'Pattern1AtY': 6.400000095367432, 'Pattern1AtZ': -1.3300000429153442, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
            Fader.Demo_FadeIn({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 1, 'Frame': 2})
            GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'NoErrorCheck': False})

            call GetDemo.ShopDressFairyGetDemo()

            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None'})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        } else {
            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
            goto Event326
        }
    } else {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 3}) {
            EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo029_0-C03-Link-A-1', 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'MorphingFrame': 15.0, 'NoErrorCheck': True})
                GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'CameraTargetActorName', 'SceneName': 'C12-1', 'Accept1FrameDelay': False, 'OverwriteAtDist': 10.0, 'OverwriteAt': True})
            } {
                Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Give_Refuge2', 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
                EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
                Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'SLinkKey': 'Breath', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': ''})

                fork {
                    EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 95})
                } {
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'SLinkKey': 'Breath', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo029_0_Breath_Lv2_01'})
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo029_0_Breath_Lv2_01', 'SLinkKey': ''})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo029_0_Breath_Lv2_02', 'SLinkKey': ''})
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 31})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo029_0_Breath_Lv2_02', 'SLinkKey': ''})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_Breath_Lv2_03'})
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_Breath_Lv2_03'})
                }

            }

            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
            if !EventSystemActor.CheckEventCancel() {
                Fader.Demo_FadeOut({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 1, 'Frame': 0})
                Event331:

                fork {

                    call BranchEquip()

                    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'NoErrorCheck': False})
                } {
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Give_Refuge2_Ed', 'ClothWarpMode': -1, 'MorphingFrame': 0.0})
                }

                GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'StartCalcOnly': True, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'TargetActor1': 3, 'UniqueName1': '', 'ActorName1': 'CameraTargetActorName', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 3.3499999046325684, 'Pattern1PosZ': 14.800000190734863, 'Pattern1AtX': 0.0, 'Pattern1AtY': 6.400000095367432, 'Pattern1AtZ': -1.3300000429153442, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
                Fader.Demo_FadeIn({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 1, 'Frame': 2})
                GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'NoErrorCheck': False})

                call GetDemo.ShopDressFairyGetDemo()

                SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None'})
                SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            } else {
                SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
                goto Event331
            }
        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 4}) {
                EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'CameraTargetActorName', 'SceneName': 'C12-2', 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': True, 'OverwriteAtDist': 15.0})

                    fork {
                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo029_0-C03-Link-A-4', 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
                        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
                    } {
                        GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'CameraTargetActorName', 'TargetActor': 1, 'SceneName': 'C13-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'IsWaitFinish': False})
                    }

                } {
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Give_Refuge3', 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'SLinkKey': 'Breath', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo029_0_Breath_Lv3'})
                    EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
                }

                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
                EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
                if !EventSystemActor.CheckEventCancel() {
                    Event338:

                    fork {

                        call BranchEquip()

                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': False, 'ASName': 'StaminaOut', 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'NoErrorCheck': False})
                    } {
                        Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventFade({'SLinkKey': '', 'IsWaitFinish': True, 'ELinkKey': 'Demo029_0_Breath_Lv3'})
                        Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'ASName': 'Act_Give_Refuge3_Ed', 'MorphingFrame': -1.0})
                    }

                    GameRomCamera.Demo_MovePosFlow({'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'StartCalcOnly': True, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'TargetActor1': 3, 'UniqueName1': '', 'ActorName1': 'CameraTargetActorName', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 3.3499999046325684, 'Pattern1PosZ': 14.800000190734863, 'Pattern1AtX': 0.0, 'Pattern1AtY': 6.400000095367432, 'Pattern1AtZ': -1.3300000429153442, 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
                    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'PV704', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
                    if !EventSystemActor.CheckEventCancel() {
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 1, 'Color': 1})
                        Event260:
                        EventSystemActor[Fairy].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                        GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After'})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'MorphingFrame': 25.0, 'NoErrorCheck': False})

                        call GetDemo.ShopDressFairyGetDemo()

                        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None'})
                        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
                    } else {
                        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
                        goto Event260
                    }
                } else {
                    SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
                    goto Event338
                }
            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 5}) {
                    EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

                    fork {
                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo029_0-C03-Link-A-6', 'IsEnabledAnimeDriven': 1, 'MorphingFrame': 0.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ClothWarpMode': 1})
                    } {
                        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'CameraTargetActorName', 'SceneName': 'C12-3', 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAtDist': 5.0, 'OverwriteAt': True})
                    } {
                        Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Give_Refuge4', 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                        EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Sideways': False, 'Power': 0.699999988079071})
                        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 1})
                        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_Breath_Lv4'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                        GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_Breath_Lv4'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
                        Npc_DressFairy_00[Demo_029(FairyActor)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'WaterSplash_Back', 'SLinkKey': ''})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 27})
                    }

                    Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1, 'ASName': 'Act_Wait'})
                    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
                    if !EventSystemActor.CheckEventCancel() {
                        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                        Event390:
                        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
                        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
                        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'Player', 'FadeOutSec': 0.0, 'FadeInSec': 2.5, 'Volume': 0.0, 'StartDelaySec': 0.0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                        fork {
                            EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})

                            call BranchEquip()

                            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': False, 'ASName': 'Demo029_0-C03-Link-A-7', 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'NoErrorCheck': False})
                            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After', 'IsTargetDemoSLinkUser': False})
                            if EventSystemActor.CheckEventCancel() {
                                SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
                            }
                        } {
                            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'StartCalcOnly': True, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'TargetActor1': 3, 'UniqueName1': '', 'ActorName1': 'CameraTargetActorName', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 3.3499999046325684, 'Pattern1PosZ': 14.800000190734863, 'Pattern1AtX': 0.0, 'Pattern1AtY': 6.400000095367432, 'Pattern1AtZ': -1.3300000429153442, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        } {
                            Npc_DressFairy_00[Demo_029(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'ASName': 'Act_Give_Refuge4_Ed', 'MorphingFrame': 0.0})
                        }

                        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        GameROMPlayer.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo029_0_After'})
                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo029_0-C03-Link-A-8', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 1, 'NoErrorCheck': False})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'NoErrorCheck': False})

                        call GetDemo.ShopDressFairyGetDemo()

                        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None'})
                        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
                        SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
                    } else {
                        goto Event390
                    }
                }
            }
        }
    }
}

void Fairy_00() {

    call Demo_029({'CameraTargetActorName': 'Npc_DressFairy_00', 'FairyActor': ActorIdentifier(name="Npc_DressFairy_00")})

}

void Fairy_01() {

    call Demo_029({'FairyActor': ActorIdentifier(name="Npc_DressFairy_01"), 'CameraTargetActorName': 'Npc_DressFairy_01'})

}

void Fairy_02() {

    call Demo_029({'FairyActor': ActorIdentifier(name="Npc_DressFairy_02"), 'CameraTargetActorName': 'Npc_DressFairy_02'})

}

void Fairy_03() {

    call Demo_029({'FairyActor': ActorIdentifier(name="Npc_DressFairy_03"), 'CameraTargetActorName': 'Npc_DressFairy_03'})

}

void BranchEquip() {
    if EventSystemActor.CheckFlag({'FlagName': 'Shop_IsManufactureEquipItem'}) {

        call UpdateEquip()

    }
}

void UpdateEquip() {
    EventSystemActor.Demo_ReqCreateManufactedItem({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
}
