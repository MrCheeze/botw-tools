-------- EventFlow: Demo622_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_SetGameDataInt', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_DeletePorchItemInEquip', 'Demo_RecoverPlayerLife', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_ForceOpenMainScreen', 'Demo_AutoSave']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_Ctrl', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroGerudo
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[voice]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void LevelUp() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'EnvReduce'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

    call Demo622_3_C01()

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Finish'}) {

        call Demo622_3_C02_Rest()


        call Demo622_3_C03_Rest()


        call Demo622_3_2nd_End()

        Event106:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {

        call Demo622_3_C02_1st()


        call Demo622_3_C03_1st()


        call Demo622_3_C04_1st()


        call Demo622_3_GetUI()


        call Demo622_3_End()


        call Demo622_3_label()


        call Demo622_3ToDemo623_0()

        goto Event106
    }
}

void Demo622_3_C01() {
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2143.0400390625, 'DestinationY': 470.1000061035156, 'DestinationZ': 2548.0, 'DirectionY': 25.0})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_GenerateCurse'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_DieCurse'})

    call BalladOfHeroCommon.RemainsResetFlag()


    fork {
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
        GameRomCamera.Demo_CameraAnimFlow({'UniqueName': '', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo622_Fringe', 'SLinkKey': 'Demo622_Fringe'})
        GameROMPlayer.Demo_PlayASAdapt({'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo622_3-C01-Link-A-0_Loop'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_3-C01-Link-A-0', 'IsWaitFinish': False, 'NoErrorCheck': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ASName': 'DemoWait'})
    } {
        Fader.Demo_FadeIn({'Frame': 2, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    }

}

void Demo622_3_GetUI() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Demo622_3-GetUI-Link-A-0', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': -1, 'PorchItemName': 'Obj_HeroSoul_Gerudo'})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Obj_DLC_HeroSoul_Gerudo', 'IsInvalidOpenPouch': True})

}

void Demo622_3_C02_1st() {
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo612_3'})
}

void Demo622_3_End() {
    Npc_Musician_AoC_HeroGerudo.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0007319999858736992, 'Pattern1PosY': 1.7367550134658813, 'Pattern1PosZ': -5.248046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Demo622_3_C03_Rest() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 1}) {

        call Demo622_3_C03_2nd()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 2})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 2}) {

        call Demo622_3_C03_3rd()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 3})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 3}) {

        call Demo622_3_C03_4th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 4})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 4}) {

        call Demo622_3_C03_5th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 5})
    } else {

        call Demo622_3_C03_6th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 1})
    }
}

void Demo622_3_C02_Rest() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6586909890174866, 'Pattern1PosY': 0.8477780222892761, 'Pattern1PosZ': 2.481688976287842, 'Pattern1AtX': -0.1267089992761612, 'Pattern1AtY': 0.8848569989204407, 'Pattern1AtZ': 0.8798829913139343, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'ASName': 'Demo622_3-C02-Link-A-0', 'MorphingFrame': 10.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo622_3-C02-Link-A-0_Loop', 'MorphingFrame': 0.0})
}

void Demo622_3_C03_2nd() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk400', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2152.76220703125, 'Pattern1PosY': 479.03228759765625, 'Pattern1PosZ': 2509.072265625, 'Pattern1AtX': -2140.654296875, 'Pattern1AtY': 491.30780029296875, 'Pattern1AtZ': 2526.220947265625, 'Pattern1Fovy': 70.4001235961914, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk410', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk420', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk430', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.2231450080871582, 'Pattern1PosY': 0.8421019911766052, 'Pattern1PosZ': 1.9172359704971313, 'Pattern1AtX': -0.004639000166207552, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 0.0443120002746582, 'Pattern1Fovy': 29.249725341796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk440', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_3_C03_4th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk200', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk210', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.2231450080871582, 'Pattern1PosY': 0.8421019911766052, 'Pattern1PosZ': 1.9172359704971313, 'Pattern1AtX': -0.004639000166207552, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 0.0443120002746582, 'Pattern1Fovy': 29.249725341796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk220', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2152.76220703125, 'Pattern1PosY': 479.03228759765625, 'Pattern1PosZ': 2509.072265625, 'Pattern1AtX': -2140.654296875, 'Pattern1AtY': 491.30780029296875, 'Pattern1AtZ': 2526.220947265625, 'Pattern1Fovy': 70.4001235961914, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk230', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo622_3_C03_5th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk500', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk510', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.2231450080871582, 'Pattern1PosY': 0.8421019911766052, 'Pattern1PosZ': 1.9172359704971313, 'Pattern1AtX': -0.004639000166207552, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 0.0443120002746582, 'Pattern1Fovy': 29.249725341796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk520', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk530', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk540', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.2231450080871582, 'Pattern1PosY': 0.8421019911766052, 'Pattern1PosZ': 1.9172359704971313, 'Pattern1AtX': -0.004639000166207552, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 0.0443120002746582, 'Pattern1Fovy': 29.249725341796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo622_3_C03_6th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk100', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2144.769775390625, 'Pattern1PosY': 471.2584228515625, 'Pattern1PosZ': 2550.48095703125, 'Pattern1AtX': -2142.818115234375, 'Pattern1AtY': 471.44659423828125, 'Pattern1AtZ': 2548.146240234375, 'Pattern1Fovy': 21.959810256958008, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk110', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_3_C03_3rd() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk300', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk310', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk320', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.2231450080871582, 'Pattern1PosY': 0.8421019911766052, 'Pattern1PosZ': 1.9172359704971313, 'Pattern1AtX': -0.004639000166207552, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 0.0443120002746582, 'Pattern1Fovy': 29.249725341796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk330', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk340', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo622_3_C03_1st() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroZora_CountVoice'}) {
            if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice'}) {

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2143.016845703125, 'Pattern1PosY': 471.8389892578125, 'Pattern1PosZ': 2557.78662109375, 'Pattern1AtX': -2144.515380859375, 'Pattern1AtY': 471.72222900390625, 'Pattern1AtZ': 2557.058837890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_3-C02-Link-A-3', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    }

                    Event354:
                    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice', 'Value': 1})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
                } else {
                    Event330:

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2143.016845703125, 'Pattern1PosY': 471.84210205078125, 'Pattern1PosZ': 2557.78955078125, 'Pattern1AtX': -2144.51416015625, 'Pattern1AtY': 471.7253723144531, 'Pattern1AtZ': 2557.06005859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo622_3-C02-Link-A-2', 'MorphingFrame': 5.0})
                    }

                    goto Event354
                }
            } else {
                goto Event330
            }
        } else {
            goto Event330
        }
    } else {
        goto Event330
    }
}

void Demo622_3_C04_1st() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2090.833740234375, 'Pattern1PosY': 539.1151123046875, 'Pattern1PosZ': 2493.27783203125, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2083.697265625, 'Pattern1PosY': 550.123291015625, 'Pattern1PosZ': 2490.030029296875, 'Pattern1AtX': -2087.664306640625, 'Pattern1AtY': 566.6792602539062, 'Pattern1AtZ': 2565.5498046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_3:Npc_Gerudo_Hero_talk010', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_3ToDemo623_0() {

    call BalladOfHeroes.Check_4ChampComp()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo623_0', 'EntryPointName': 'Demo623_3'})
}

void Demo622_3_label() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'BalladOfHeroGerudo'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo622_3_2nd_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5, 'Pattern1PosY': 1.6554570198059082, 'Pattern1PosZ': -5.1541748046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 20.0, 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
