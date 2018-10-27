-------- EventFlow: Demo707_0 --------

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckFlag', 'CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Korogu_Minister_Maracas
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Korogu_Minister_Maracas_Left
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok_Rvs
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_OldKorok_Help
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_OldKorok_WetLand
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_OldKorok_Forest
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_OldKorok
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Dm_Locator
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[left]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok[EndDance(XMan)]
entrypoint: EndDance(XMan)
actions: ['Demo_XLinkEventCreate']
queries: []
params: None

Actor: Npc_OldKorok[StartDance(XMan)]
entrypoint: StartDance(XMan)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: Npc_OldKorok[Demo707_9(XMan)]
entrypoint: Demo707_9(XMan)
actions: []
queries: []
params: None

Actor: Npc_OldKorok[Skipped(XMan)]
entrypoint: Skipped(XMan)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: Npc_OldKorok[Demo707_Weapon(XMan)]
entrypoint: Demo707_Weapon(XMan)
actions: []
queries: []
params: None

Actor: Npc_OldKorok[Demo707_Bow(XMan)]
entrypoint: Demo707_Bow(XMan)
actions: []
queries: []
params: None

Actor: Npc_OldKorok[Demo707_Shield(XMan)]
entrypoint: Demo707_Shield(XMan)
actions: []
queries: []
params: None

void FlagCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_1st'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_2nd'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_3rd'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_4th'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Fld_5th'})
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Fld_4th'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Fld_3rd'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Fld_2nd', 'IsWaitFinish': True})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Fld_1st', 'IsWaitFinish': True})
    }
}

void Demo707_0_Weapon_Kakariko() {

    call Demo707_Weapon({'XMan': ActorIdentifier(name="Npc_OldKorok_Help")})

}

void Demo707_0_Weapon_Rvs() {

    call FlagCheck()


    call Demo707_Weapon({'XMan': ActorIdentifier(name="Npc_OldKorok_Rvs")})

}

void Demo707_0_Weapon_WetLand() {

    call FlagCheck()


    call Demo707_Weapon({'XMan': ActorIdentifier(name="Npc_OldKorok_WetLand")})

}

void Demo707_0_Weapon_Forest() {

    call FlagCheck()


    call Demo707_Weapon({'XMan': ActorIdentifier(name="Npc_OldKorok_Forest")})

}

void Demo707_0_Weapon_KoroguWoods() {

    call Demo707_Weapon({'XMan': ActorIdentifier(name="Npc_OldKorok")})

}

void Demo707_0_Bow_Kakariko() {

    call Demo707_Bow({'XMan': ActorIdentifier(name="Npc_OldKorok_Help")})

}

void Demo707_0_Bow_Rvs() {

    call FlagCheck()


    call Demo707_Bow({'XMan': ActorIdentifier(name="Npc_OldKorok_Rvs")})

}

void Demo707_0_Bow_WetLand() {

    call FlagCheck()


    call Demo707_Bow({'XMan': ActorIdentifier(name="Npc_OldKorok_WetLand")})

}

void Demo707_0_Bow_Forest() {

    call FlagCheck()


    call Demo707_Bow({'XMan': ActorIdentifier(name="Npc_OldKorok_Forest")})

}

void Demo707_0_Bow_KoroguWoods() {

    call Demo707_Bow({'XMan': ActorIdentifier(name="Npc_OldKorok")})

}

void Demo707_0_Shield_Kakariko() {

    call Demo707_Shield({'XMan': ActorIdentifier(name="Npc_OldKorok_Help")})

}

void Demo707_0_Shield_Rvs() {

    call FlagCheck()


    call Demo707_Shield({'XMan': ActorIdentifier(name="Npc_OldKorok_Rvs")})

}

void Demo707_0_Shield_WetLand() {

    call FlagCheck()


    call Demo707_Shield({'XMan': ActorIdentifier(name="Npc_OldKorok_WetLand")})

}

void Demo707_0_Shield_Forest() {

    call FlagCheck()


    call Demo707_Shield({'XMan': ActorIdentifier(name="Npc_OldKorok_Forest")})

}

void Demo707_0_Shield_KoroguWoods() {

    call Demo707_Shield({'XMan': ActorIdentifier(name="Npc_OldKorok")})

}

void Camera() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C01-0', 'DOFUse': False, 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C02-0', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C02-1', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C02-2', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C03-0', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C03-1', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'SceneName': 'C04-0', 'BgCheck': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'ActorName': 'Dm_Locator', 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void EndDance() {
    EventSystemActor[left].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})

    fork {
        Npc_Korogu_Minister_Maracas.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'EndDance_XLinkEventCreate_ELinkKey'})
        Npc_Korogu_Minister_Maracas.Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'EndDance_XLinkEventFade_ELinkKey'})
    } {
        Npc_OldKorok[EndDance(XMan)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'Demo_DanceEnd', 'IsTargetDemoSLinkUser': False})
    } {
        Npc_Korogu_Minister_Maracas_Left.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'EndDance_XLinkEventCreate_ELinkKey'})
        Npc_Korogu_Minister_Maracas_Left.Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'EndDance_XLinkEventFade_ELinkKey'})
    } {
        GameRomCamera.Demo_XLinkEventCreate({'ELinkKey': 'EndDance_Ban', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }

}

void StartDance() {
    Npc_OldKorok[StartDance(XMan)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo707_0-C01-Npc_Korogu_Minister-A-0', 'MorphingFrame': -1.0})

    fork {
        Npc_Korogu_Minister_Maracas.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'StartDance_XLinkEventCreate_ELinkKey'})
    } {
        Npc_Korogu_Minister_Maracas_Left.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'StartDance_XLinkEventCreate_ELinkKey'})
    }

}

void Demo707_9() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})

    fork {
        Dm_Locator.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    } {

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            SoundTriggerTag.Demo_SoundTrigger({'SLinkInst': '', 'Sound': 'Demo707_0_KorogMinisterDance', 'SoundDelay': 0, 'IsWaitFinish': False})
        } {

            call StartDance({'XMan': 'XMan', 'StartDance_XLinkEventCreate_ELinkKey': 'StartDance_XLinkEventCreate_ELinkKey'})

        }

    } {

        call Camera()

    }

    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if !EventSystemActor.CheckEventCancel() {
        Event429:

        call EndDance({'XMan': 'XMan', 'EndDance_XLinkEventCreate_ELinkKey': 'EndDance_XLinkEventCreate_ELinkKey', 'EndDance_XLinkEventFade_ELinkKey': 'StartDance_XLinkEventCreate_ELinkKey', 'EndDance_Ban': 'EndDance_Ban'})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
        GameRomCamera.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'EndDance_Ban'})
    } else {

        call Skipped({'XMan': 'XMan'})

        goto Event429
    }
}

void Skipped() {
    Npc_OldKorok[Skipped(XMan)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
}

void Demo707_Weapon() {

    call Demo707_9({'XMan': 'XMan', 'StartDance_XLinkEventCreate_ELinkKey': 'Maracas_Weapon', 'EndDance_XLinkEventCreate_ELinkKey': 'DanceEnd_Weapon', 'EndDance_Ban': 'Demo707_0_DancePtcl_Weapon'})

}

void Demo707_Bow() {

    call Demo707_9({'XMan': 'XMan', 'StartDance_XLinkEventCreate_ELinkKey': 'Maracas_Bow', 'EndDance_XLinkEventCreate_ELinkKey': 'DanceEnd_Bow', 'EndDance_Ban': 'Demo707_0_DancePtcl_Bow'})

}

void Demo707_Shield() {

    call Demo707_9({'XMan': 'XMan', 'StartDance_XLinkEventCreate_ELinkKey': 'Maracas_Shield', 'EndDance_XLinkEventCreate_ELinkKey': 'DanceEnd_Shield', 'EndDance_Ban': 'Demo707_0_DancePtcl_Shield'})

}
