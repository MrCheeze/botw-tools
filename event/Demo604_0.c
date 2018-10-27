-------- EventFlow: Demo604_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FromCDunToMainField', 'Demo_SetCurrentDungeonClearFlag', 'Demo_WaitFrame', 'Demo_OpenDungeonMessage', 'Demo_RecoverPlayerEnergy', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen', 'Demo_SetupGetDemoModeNumUi', 'Demo_ResetBoneCtrl', 'Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_SwitchPlayerEquipment', 'Demo_DeletePorchItemInEquip']
queries: ['CheckEventCancel', 'WhatDungeonType', 'CountFlag4', 'CheckFlag', 'CheckCurrentMap']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_GoalShield_A
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc2nd001
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[C07-1_Cam]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo604_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    fork {
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor[01].Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0'})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    call Demo604_0_C01()


    call Demo604_0_C02()


    call Demo604_0_C03()


    call Demo604_0_C04()


    call Demo604_0_C05()


    call Demo604_0_C06()

}

void Demo604_0_C02() {

    fork {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
    } {

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
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0'})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_DungeonPriestDlc2nd001'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

    }

}

void Demo604_0_C03() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ProofOut', 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Demo604_0-C06-Link-A-1'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03-0'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C04-0'})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    }

    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'SceneName': 'C05-0'})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
}

void Demo604_0_C04() {
    if !EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'MorphingFrame': 25.0, 'ClothWarpMode': -1})
        Event40:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_SetupGetDemoModeNumUi({'NumUiType': 0, 'AddNum': 1, 'IsWaitFinish': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DungeonClearSeal'})

        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsIgnoreSame': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        DgnObj_GoalShield_A.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': ''})
        Npc_DungeonPriestDlc2nd001.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'ProofOut', 'SLinkKey': ''})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event40
    }
}

void Demo604_0_C05() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})

    fork {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo033_0:talk02'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C06-0'})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 300})
    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        Npc_DungeonPriestDlc2nd001.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'IsWaitFinish': False, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo033_0_PriestVanish'})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    }

}

void Demo604_0_C06() {
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C07-0'})
    EventSystemActor[C07-1_Cam].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_SetCurrentDungeonClearFlag({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {
        Event212:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'Clear_Dungeon122', 'GameDataFlagNo0': 'Clear_Dungeon120', 'GameDataFlagNo2': 'Clear_Dungeon123', 'GameDataFlagNo3': 'Clear_Dungeon135', 'GameDataFlagNo4': ''}) {
          case 0:
            Event0:
            EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo008_4', 'EntryPointName': 'Demo008_4'})
          case 1:
            goto Event0
          case 2:

            call Kass_CheckDungeon()

            goto Event0
          case 3:
            goto Event0
          case 4:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                goto Event0
            } else {
                Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Sword_502'})
                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Sword_503', 'Value': 1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_503', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': ''})
                if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon120'}) {
                    EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo609_0', 'EntryPointName': 'Demo609_0'})
                } else {
                    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon122'}) {
                        EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo609_0', 'EntryPointName': 'Demo609_0-1'})
                    } else {
                        if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon123'}) {
                            EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo609_0', 'EntryPointName': 'Demo609_0-2'})
                        } else {
                            if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon135'}) {
                                Event237:
                                EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo609_0', 'EntryPointName': 'Demo609_0-3'})
                            } else {
                                goto Event237
                            }
                        }
                    }
                }
            }
          case 5:
            goto Event0
        }
    } else {
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event212
    }
}

void Demo604_0_C01() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Demo604_0-C03-Link-A-1'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        DgnObj_GoalShield_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
    } {
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BreakOmen', 'SLinkKey': 'BreakOmen', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    }

}

void Kass_CheckDungeon() {
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon120'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Kasshiwa_Appear1'})
    } else {
        if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon122'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Kasshiwa_Appear2'})
        } else {
            if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon123'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Kasshiwa_Appear3'})
            } else {
                if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon135'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Kasshiwa_Appear4'})
                }
            }
        }
    }
}
