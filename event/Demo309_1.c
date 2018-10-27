-------- EventFlow: Demo309_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_UnbindSheikPad']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo309_1() {
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': False, 'DestinationX': 1992.3900146484375, 'DestinationY': 122.87999725341797, 'DestinationZ': 1910.6500244140625, 'DirectionY': -131.57000732421875})
    GameROMPlayer.Demo_UnbindSheikPad({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PictureMemory_Finish'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsRepair_MemoryPhoto_013'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo309_1'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo309_Player_Remember_End', 'IsWaitFinish': False})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-1', 'OverwriteAt': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})

    fork {
        NPC_CaptionVoice.Demo_Talk({'MessageId': 'DemoMsg/Demo309_1:Text_00', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'ASName': '', 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Demo309_1-C01-Link-A-0', 'IsWaitFinish': False, 'ClothWarpMode': -1})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        }

        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'BGM_RememberComplete', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 620})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ASName': 'Demo309_1-C01-Link-A-1', 'ClothWarpMode': -1})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-1', 'IsWaitFinish': True, 'OverwriteAt': True})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 26})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ASName': 'Demo309_1-C01-Link-A-2', 'ClothWarpMode': -1})
    }

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}
