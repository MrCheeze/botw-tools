-------- EventFlow: Demo606_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_SwitchPlayerEquipment', 'Demo_WaitFrame', 'Demo_IncreasePorchItem', 'Demo_FlagOFF', 'Demo_EnableCameraInput', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen']
queries: ['CheckEventCancel', 'CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo606_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    DgnObj_DLC_Weapon_Sword_502.Demo_Join({'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    fork {
        EventSystemActor[Doshi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo606_0:Talk00'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'LookAround', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo606_0-C01-Link-A-0_Loop', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'MorphingFrame': 25.0})
    }

    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo606_0_WhiteOut', 'SoundDelay': 0, 'SLinkInst': ''})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {
        Fader.Demo_FadeOut({'Frame': 2, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0})
        Event22:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Ichigeki_Sword_Appear'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Weapon_Sword_502', 'Value': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'MorphingFrame': 0.0})
        WorldManagerControl.Demo_SetPaletteType({'PaletteType': 45, 'Speed': 3.0, 'IsWaitFinish': False, 'ChangeFrame': 0, 'EndFrame': 0})
        EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_502', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipShield': False, 'UnequipBow': False})
        if !EventSystemActor.CheckEventCancel() {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 0, 'Frame': 1})
            Event27:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

            fork {
                switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Lock_OneHitDungeon001', 'GameDataFlagNo1': 'Lock_OneHitDungeon002', 'GameDataFlagNo2': 'Lock_OneHitDungeon003', 'GameDataFlagNo3': 'Lock_OneHitDungeon004'}) {
                  case 0:
                    Event56:
                    EventSystemActor[Doshi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo606_0:Talk01'})
                  case 1:
                    goto Event56
                  case 2:
                    goto Event56
                  case 3:
                    goto Event56
                  case 4:
                    Event23:
                    EventSystemActor[Doshi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo606_0:Talk02'})
                  case 5:
                    goto Event23
                }
            } {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo606_0-C02-Link-A-0', 'NoErrorCheck': True, 'IsOneTimeEndKeep': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 400})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'MorphingFrame': 20.0})
            }

            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
            if !EventSystemActor.CheckEventCancel() {
                Event57:

                call BalladOfHeroes.SetFlagsForStartIchigeki()

            } else {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
                EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
                SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
                goto Event57
            }
        } else {
            Fader.Demo_FadeIn({'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Color': 1, 'Frame': 2})
            goto Event27
        }
    } else {
        EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event22
    }
}
