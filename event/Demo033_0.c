-------- EventFlow: Demo033_0 --------

Actor: Npc_DungeonPriest001
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FromCDunToMainField', 'Demo_SetCurrentDungeonClearFlag', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_IncreaseGameDataInt', 'Demo_OpenDungeonMessage', 'Demo_RecoverPlayerLife', 'Demo_RecoverPlayerEnergy', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen', 'Demo_CallDemo', 'Demo_StartHeartDemo', 'Demo_SetupGetDemoModeNumUi', 'Demo_ResetBoneCtrl', 'Demo_AdvanceQuest']
queries: ['CheckFlag', 'CheckGameDataInt', 'CheckEventCancel', 'WhatDungeonType', 'CheckE3Mode', 'CheckCurrentMap']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_GoalShield_A
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_LookAtObject', 'Demo_PlayASAdapt', 'Demo_Idling', 'Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_MovePosFlow', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[C07-1_Cam]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo033_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    fork {
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor[01].Demo_WarpPlayerToDestination({'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY', 'IsWaitFinish': True})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } else {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        }
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo033_0-C03-Link-A-1', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
            DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            DgnObj_GoalShield_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
        }

        Event74:

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
        } {
            DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BreakOmen', 'SLinkKey': 'BreakOmen', 'IsTargetDemoSLinkUser': False})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
            DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        } {
            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo033_0-C03-Link-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsOneTimeEndKeep': False})
            }
        }


        fork {
            EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        } {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {

                fork {
                    switch EventSystemActor.WhatDungeonType() {
                      case 0:
                        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk00'})
                      case 1:
                        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk04'})
                      case 2:
                        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk05'})
                    }
                } {
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C05-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'ActorName': 'Npc_DungeonPriest001', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                }

            } else {

                fork {
                    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk01'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_DungeonPriest_First', 'IsWaitFinish': True})
                } {
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C04-0', 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C04-1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 390})
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'SceneName': 'C04-2', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                }

            }
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_DungeonPriest001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ProofOut', 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False})
        } {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'ASName': 'Demo033_0-C06-Link-A-1', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo033_0-C06-Link-A-0', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            }
        } {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-1', 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_DungeonPriest_First'}) {
                EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            } else {
                EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            }
        }

        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False})
        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
        if !EventSystemActor.CheckEventCancel() {
            EventSystemActor.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'MorphingFrame': 25.0, 'ClothWarpMode': -1})
            Event94:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'NumUiType': 0, 'AddNum': 1, 'IsWaitFinish': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DungeonClearSeal'})

            EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
            EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
            EventSystemActor.Demo_StartHeartDemo({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsIgnoreSame': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 119}) {
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C04-1', 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk03'})
                EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'CompleteDungeon', 'StepName': 'Finish', 'ForceRunTelop': True, 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 165, 'IsWaitFinish': True})
                Event260:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 3}) {
                    switch EventSystemActor.CheckE3Mode() {
                      case 0:
                        Event47:
                        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 1, 'IsWaitFinish': True})
                        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})

                        fork {
                            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk02'})
                        } {
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                            EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 300})
                        } {
                            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                            Npc_DungeonPriest001.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'IsWaitFinish': False, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                            Npc_DungeonPriest001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
                            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo033_0_PriestVanish'})
                        } {
                            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
                        }

                        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C07-1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        EventSystemActor[C07-1_Cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        EventSystemActor.Demo_SetCurrentDungeonClearFlag({'IsWaitFinish': True})
                        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
                        if !EventSystemActor.CheckEventCancel() {
                            Event207:
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 1}) {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_1'})
                                Event3:
                                EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo008_4', 'EntryPointName': 'Demo008_4'})
                            } else {
                                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 4}) {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_4'})
                                    switch EventSystemActor.CheckE3Mode() {
                                      case 0:
                                        goto Event3
                                      case 1:
                                        Event170:
                                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo985_0', 'EntryPointName': 'Demo985_0', 'EndFade': 0})
                                      case 2:
                                        goto Event170
                                      case 3:
                                        goto Event3
                                    }
                                } else {
                                    goto Event3
                                }
                            }
                        } else {
                            SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'Demo033_0_PriestVanish', 'IsWaitFinish': True})
                            goto Event207
                        }
                      case 1:
                        Event262:
                        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Value': 1, 'IsWaitFinish': True})

                        fork {
                            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk02'})
                        } {
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                            EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 300})
                        } {
                            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                            Npc_DungeonPriest001.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'IsWaitFinish': False, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                            Npc_DungeonPriest001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
                            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo033_0_PriestVanish'})
                        } {
                            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
                        }

                        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C07-1', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        EventSystemActor[C07-1_Cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        EventSystemActor.Demo_SetCurrentDungeonClearFlag({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
                        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 1}) {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_1'})
                            Event233:
                            EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo008_4', 'EntryPointName': 'Demo008_4'})
                        } else {
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'Equal', 'Value': 4}) {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon_Clear_4'})
                                switch EventSystemActor.CheckE3Mode() {
                                  case 0:
                                    goto Event233
                                  case 1:
                                    Event247:
                                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo985_0', 'EntryPointName': 'Demo985_0', 'EndFade': 0})
                                  case 2:
                                    goto Event247
                                  case 3:
                                    goto Event233
                                }
                            } else {
                                goto Event233
                            }
                        }
                      case 2:
                        goto Event262
                      case 3:
                        goto Event47
                    }
                } else {
                    goto Event47
                }
            } else {
                goto Event260
            }
        } else {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
            DgnObj_GoalShield_A.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': 'Break'})
            Npc_DungeonPriest001.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'ProofOut', 'SLinkKey': 'ProofOut'})
            goto Event94
        }
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo033_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
            DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            DgnObj_GoalShield_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 95})
        }

        goto Event74
    }
}

void ItemGetCheck() {
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon009'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimer'}) {
            Event219:
            GameROMPlayer.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk07'})
        }
    } else {
        if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon038'}) {
            if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Magnetglove'}) {
                goto Event219
            }
        } else {
            if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon041'}) {
                if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBomb'}) {
                    goto Event219
                }
            } else {
                if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon065'}) {
                    if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_IceMaker'}) {
                        goto Event219
                    }
                }
            }
        }
    }
}
