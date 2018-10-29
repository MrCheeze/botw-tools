-------- EventFlow: Demo014_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_LookDirect', 'Demo_Look']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BasicSignalTag
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller1]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller2]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller3]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller4]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller5]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller6]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[Patroller7]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo014_0_Assasin_C03_2_A]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo014_0_Assasin_C03_2_B]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo014_0_Assasin_C03_1_A]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo014_0_Assasin_C03_1_B]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Shooter_Azito_Junior[Archer3]
entrypoint: None()
actions: ['Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Shooter_Azito_Junior[Archer4]
entrypoint: None()
actions: ['Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Shooter_Azito_Junior[Archer1]
entrypoint: None()
actions: ['Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Shooter_Azito_Junior[Archer2]
entrypoint: None()
actions: ['Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Azito_Middle[EntryPoint0(Arg_actor)]
entrypoint: EntryPoint0(Arg_actor)
actions: []
queries: []
params: None

Actor: Enemy_Assassin_Azito_Middle[C01(Enemy_Assassin_Azito_Middle)]
entrypoint: C01(Enemy_Assassin_Azito_Middle)
actions: ['Demo_Notify', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: Enemy_Assassin_Azito_Middle[EntryPoint1(Arg_actor)]
entrypoint: EntryPoint1(Arg_actor)
actions: []
queries: []
params: None

Actor: Enemy_Assassin_Azito_Middle[DrawSword(Arg_actor)]
entrypoint: DrawSword(Arg_actor)
actions: ['Demo_DropWeapon', 'Demo_WeaponDrawn', 'Demo_PlayASForDemo']
queries: []
params: None

void EntryPoint0() {
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})

    call C01({'Enemy_Assassin_Azito_Middle': 'Arg_actor', 'Arg_Patroller_UniqueName1': 'Arg_Patroller_UniqueName'})


    fork {

        call DrawSword({'Arg_actor': 'Arg_actor'})

    } {

        call C02({'Arg_TargetUniqueName': 'Arg_Focus_Door_UniqueName'})


        call C03_1({'Arg_TargetUniqueName': 'Arg_Focus_Door_UniqueName'})


        call C04()

    }

}

void C03_1() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-4', 'UniqueName': '', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': -1, 'ActorName': '', 'TargetActorPosReferenceMode': 3, 'TargetActorDirReferenceMode': 3})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Dm_Locator[Demo014_0_Assasin_C03_1_A].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo014_0_AssassinAppear', 'SLinkKey': 'Demo014_0_AssassinAppear', 'IsTargetDemoSLinkUser': True})
        } {

            fork {
                Dm_Locator[Demo014_0_Assasin_C03_1_B].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo014_0_AssassinAppear', 'SLinkKey': 'Demo014_0_AssassinAppear', 'IsTargetDemoSLinkUser': True})
            } {
                EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 2})
            }

        }

        BasicSignalTag.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})

        fork {
            Enemy_Assassin_Shooter_Azito_Junior[Archer1].Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 1})
        } {
            Enemy_Assassin_Shooter_Azito_Junior[Archer2].Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void C02() {
    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'FldObj_AssassinDoor_A_01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-2', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventControllerRumble.Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
}

void Notice_1() {

    call EntryPoint0({'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_1', 'Arg_Focus_Door_UniqueName': 'Door_1', 'Arg_Patroller_UniqueName': 'Patroller1', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller1")})

}

void Notice_2() {
    Enemy_Assassin_Azito_Middle[Patroller1].Demo_Join({'IsWaitFinish': True})

    call EntryPoint0({'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_1', 'Arg_Focus_Door_UniqueName': 'Door_1', 'Arg_Patroller_UniqueName': 'Patroller2', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller2")})

}

void Notice_3() {
    Enemy_Assassin_Azito_Middle[Patroller1].Demo_Join({'IsWaitFinish': True})

    call EntryPoint0({'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_1', 'Arg_Focus_Door_UniqueName': 'Door_1', 'Arg_Patroller_UniqueName': 'Patroller3', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller3")})

}

void Notice_4() {
    Enemy_Assassin_Azito_Middle[Patroller1].Demo_Join({'IsWaitFinish': True})

    call EntryPoint0({'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_1', 'Arg_Focus_Door_UniqueName': 'Door_1', 'Arg_Patroller_UniqueName': 'Patroller4', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller4")})

}

void Notice_5() {
    Enemy_Assassin_Azito_Middle[Patroller1].Demo_Join({'IsWaitFinish': True})

    call EntryPoint0({'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_1', 'Arg_Focus_Door_UniqueName': 'Door_1', 'Arg_Patroller_UniqueName': 'Patroller5', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller5")})

}

void Notice_6() {
    Enemy_Assassin_Azito_Middle[Patroller7].Demo_Join({'IsWaitFinish': True})

    call EntryPoint1({'Arg_Focus_Door_UniqueName': 'Door_2', 'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_2', 'Arg_Patroller_UniqueName': 'Patroller6', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller6")})

}

void Notice_7() {

    call EntryPoint1({'Arg_Focus_Door_UniqueName': 'Door_2', 'Arg_Focus_Assassin_Shooter_UniqueName': 'Assassin_Shooter_2', 'Arg_Patroller_UniqueName': 'Patroller7', 'Arg_actor': ActorIdentifier(name="Enemy_Assassin_Azito_Middle", sub_name="Patroller7")})

}

void C01() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Enemy_Assassin_Azito_Middle[C01(Enemy_Assassin_Azito_Middle)].Demo_Notify({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        } {
            Enemy_Assassin_Azito_Middle[C01(Enemy_Assassin_Azito_Middle)].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo014_0-C01-Assassin_Leader', 'IsWaitFinish': False, 'ClothWarpMode': -2})
        }

    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Enemy_Assassin_Azito_Middle', 'UniqueName': 'Arg_Patroller_UniqueName1', 'TargetActorPosReferenceMode': 2, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

}

void C04() {
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'SceneName': 'C01-5', 'TargetActor': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': False, 'BgCheck': True, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    }

}

void C03_2() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-3', 'UniqueName': '', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': -1, 'ActorName': '', 'TargetActorPosReferenceMode': 3, 'TargetActorDirReferenceMode': 3})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Dm_Locator[Demo014_0_Assasin_C03_2_A].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo014_0_AssassinAppear', 'SLinkKey': 'Demo014_0_AssassinAppear', 'IsTargetDemoSLinkUser': True})
        } {

            fork {
                Dm_Locator[Demo014_0_Assasin_C03_2_B].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo014_0_AssassinAppear', 'SLinkKey': 'Demo014_0_AssassinAppear', 'IsTargetDemoSLinkUser': True})
            } {
                EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 2})
            }

        }

        BasicSignalTag.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})

        fork {
            Enemy_Assassin_Shooter_Azito_Junior[Archer3].Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 1})
        } {
            Enemy_Assassin_Shooter_Azito_Junior[Archer4].Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void EntryPoint1() {
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})

    call C01({'Enemy_Assassin_Azito_Middle': 'Arg_actor', 'Arg_Patroller_UniqueName1': 'Arg_Patroller_UniqueName'})


    fork {

        call DrawSword({'Arg_actor': 'Arg_actor'})

    } {

        call C02({'Arg_TargetUniqueName': 'Arg_Focus_Door_UniqueName'})


        call C03_2({'Arg_TargetUniqueName': 'Arg_Focus_Door_UniqueName'})


        call C04()

    }

}

void DrawSword() {
    Enemy_Assassin_Azito_Middle[DrawSword(Arg_actor)].Demo_DropWeapon({'IsWaitFinish': True})
    Enemy_Assassin_Azito_Middle[DrawSword(Arg_actor)].Demo_WeaponDrawn({'IsWaitFinish': True})
    Enemy_Assassin_Azito_Middle[DrawSword(Arg_actor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'BattleWait', 'ClothWarpMode': -2})
}
