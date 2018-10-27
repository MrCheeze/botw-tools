-------- EventFlow: Demo046_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_UpdateEquip', 'Demo_XLinkEventCreate', 'Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToAnchor', 'Demo_SetGameDataInt', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_WarpPlayerToDestination']
queries: ['CheckEventCancel', 'BranchByDyeColor', 'CheckFadeState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage001
entrypoint: None()
actions: ['Demo_DyeGoods']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_HatenoTrapFloor_A_01[gimic_01]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_HatenoTrapFloor_A_01[gimic_02]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_KillAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt1]
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt0]
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt2]
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt3]
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait0]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo046() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

    call Intro()

    GameROMPlayer.Demo_PlayASAdapt({'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo046_0-C03-Link-A-0', 'TargetIndex': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'StainingStart', 'SoundDelay': 0, 'SLinkInst': ''})

    call camera_3StepsCloseup()


    fork {
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo046_0-C01-TwnObj_Village_HatenoTrapFloor_A_01-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo046_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventControllerRumble[Cnt0].Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameRomCamera.Demo_CameraAnimFlowAbs({'StartFrame': 0.0, 'SceneName': 'C03-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 120.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        call DyeWaterEffect()

        EventControllerRumble[Cnt1].Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})

        call DyeingSmoke()

    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventSystemActor[CntWait0].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble[Cnt2].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': True})
        EventControllerRumble[Cnt3].Demo_TimeSpecRumbleSmall({'Seconds': 1, 'IsWait': False, 'IsWaitFinish': False})
    }

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {

        call dye({'Frame': 1})


        call CleaningUp()

        Fader.Demo_FadeIn({'Frame': 0, 'Color': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})
        Event266:
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'stained', 'SoundDelay': 0, 'SLinkInst': ''})

        call Outro()

        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    } else {

        call dye({'Frame': 45})


        call CleaningUp()

        SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
        if !EventSystemActor.CheckFadeState({'FadeType': 0, 'State': 1}) {
            Event149:
            Fader.Demo_FadeIn({'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': False, 'Color': 1})
            goto Event266
        } else {
            Fader.Demo_FadeIn({'DispMode': 'Auto', 'IsWaitFinish': True, 'Color': 0, 'Frame': 2})
            goto Event149
        }
    }
}

void Demo046_Reset() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

    call Intro()

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})

    fork {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'BleachingStart'})

        call camera_3StepsCloseup()

    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True, 'ASName': 'Demo046_0-C04-Link-A-0'})
    }


    fork {
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'ASName': 'Demo046_0-C01-TwnObj_Village_HatenoTrapFloor_A_01-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo046_0-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventControllerRumble[Cnt0].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameRomCamera.Demo_CameraAnimFlowAbs({'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 120.0, 'SceneName': 'C05-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
        EventControllerRumble[Cnt1].Demo_RumbleMiddle({'Count': 1, 'IsWaitFinish': True})
        EventControllerRumble[Cnt2].Demo_TimeSpecRumbleSmall({'Seconds': 1, 'IsWait': False, 'IsWaitFinish': False})

        call DyeingSmoke2()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ColorChange_MaterialIndex', 'Value': 0})
    }

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {

        call dye({'Frame': 1})

        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 3401.070068359375, 'DestinationZ': 2148.909912109375, 'IsWaitFinish': True, 'DirectionY': 127.0, 'DestinationY': 226.72000122070312})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosY': 1.0, 'Pattern1AtY': 0.6000000238418579, 'IsWaitFinish': False, 'StartCalcOnly': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosZ': 3.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Wait', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})
        Event265:
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'destained', 'SoundDelay': 0, 'SLinkInst': ''})

        call Outro()

        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    } else {

        call dye({'Frame': 45})

        EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': '', 'IsWaitFinish': False, 'UniqueName': 'DyeShop_PlayerPos4'})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosY': 1.0, 'Pattern1AtY': 0.6000000238418579, 'IsWaitFinish': False, 'StartCalcOnly': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosZ': 3.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Wait', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        if !EventSystemActor.CheckFadeState({'FadeType': 0, 'State': 1}) {
            Event248:
            Fader.Demo_FadeIn({'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': False, 'Color': 1})
            goto Event265
        } else {
            Fader.Demo_FadeIn({'DispMode': 'Auto', 'Color': 0, 'Frame': 2, 'IsWaitFinish': True})
            goto Event248
        }
    }
}

void CleaningUp() {
    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': '', 'UniqueName': 'DyeShop_PlayerPos2', 'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 0, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 0.0, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosZ': 5.0, 'Pattern1PosY': 1.0, 'Pattern1AtY': 0.6000000238418579, 'IsWaitFinish': False, 'StartCalcOnly': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
}

void DyeWaterEffect() {
    switch EventSystemActor.BranchByDyeColor() {
      case 0:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 1:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Blue', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 2:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Red', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 3:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Yellow', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 4:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_White', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 5:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Black', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 6:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Purple', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 7:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Green', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 8:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_LightBlue', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 9:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_DarkBlue', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 10:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Orange', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 11:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Pink', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 12:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_WineRed', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 13:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Cream', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 14:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Brown', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
      case 15:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Dyeing_Gray', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo_Dyeing'})
    }
}

void camera_3StepsCloseup() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'SceneName': 'C01-0', 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'EndFrame': 45.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C07-0', 'EndFrame': 54.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C08-0', 'EndFrame': 40.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C09-0', 'EndFrame': 22.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'StartFrame': 0.0, 'SceneName': 'C02-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 20.0, 'TargetActor': 1, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
}

void Intro() {
    GameRomCamera.Demo_CameraAnimFlow({'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 5.0, 'SceneName': 'C01-0', 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
}

void Outro() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 120.0, 'SceneName': 'C04-0', 'TargetActor': 1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo046_0-C02-Link-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

}

void DyeingSmoke() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo046_0_DyeingSmoke', 'SLinkKey': 'Demo_Smoke', 'IsTargetDemoSLinkUser': False})
}

void DyeingSmoke2() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo046_0_DyeingSmoke', 'SLinkKey': 'Demo_Smoke'})
}

void dye() {
    Npc_HatenoVillage001.Demo_DyeGoods({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 'Frame'})

    fork {
        GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo046_0_KiraKira', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

}
