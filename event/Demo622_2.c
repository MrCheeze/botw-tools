-------- EventFlow: Demo622_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_SetGameDataInt', 'Demo_WarpPlayerToDestination', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_DeletePorchItemInEquip', 'Demo_RecoverPlayerLife', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_ForceOpenMainScreen', 'Demo_AutoSave']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_XLinkEventCreate', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_Ctrl', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroZora
entrypoint: None()
actions: ['Demo_Join']
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

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void LevelUp() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'EnvReduce'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

    call Demo622_2_C01()

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Finish'}) {

        call Demo622_2_C02_Rest()


        call Demo622_2_C03_Rest()


        call Demo622_2_2nd_End()

        Event24:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {

        call Demo622_2_C02_1st()


        call Demo622_2_C03_1st()


        call Demo622_2_C04_1st()


        call Demo622_2_GetUI()


        call Demo622_2_End()


        call Demo622_2_label()


        call Demo622_2ToDemo622_3()

        goto Event24
    }
}

void Demo622_2_C01() {
    Npc_Musician_AoC_HeroZora.Demo_Join({'IsWaitFinish': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 10.0, 'DestinationX': 2944.800048828125, 'DestinationY': 407.0, 'DestinationZ': 131.6999969482422})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_GenerateCurse'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_DieCurse'})

    call BalladOfHeroCommon.RemainsResetFlag()

    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo622_Fringe', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo622_Fringe'})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'UniqueName': '', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo622_2-C01-Link-A-0_Loop'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_2-C01-Link-A-0', 'IsWaitFinish': False, 'NoErrorCheck': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ASName': 'DemoWait'})
    } {
        Fader.Demo_FadeIn({'Frame': 2, 'IsWaitFinish': True, 'Color': 0, 'DispMode': 'Auto'})
    }

}

void Demo622_2_GetUI() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Demo622_2-GetUI-Link-A-0', 'NoErrorCheck': True, 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.01196299958974123, 'Pattern1PosY': 1.1295169591903687, 'Pattern1PosZ': 2.445496082305908, 'Pattern1AtX': -0.005859000142663717, 'Pattern1AtY': 0.6278690099716187, 'Pattern1AtZ': -2.162169933319092, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'IsWaitFinish': False})
    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': -1, 'PorchItemName': 'Obj_HeroSoul_Zora'})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Obj_DLC_HeroSoul_Zora', 'IsInvalidOpenPouch': True})

}

void Demo622_2_C02_1st() {
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo612_2', 'EntryPointName': ''})
}

void Demo622_2_End() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5505369901657104, 'Pattern1PosY': 2.407927989959717, 'Pattern1PosZ': -5.674622058868408, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo622_2_C03_Rest() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 1}) {

        call Demo622_2_2nd()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 2})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 2}) {

        call Demo622_2_3rd()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 3})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 3}) {

        call Demo622_2_4th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 4})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 4}) {

        call Demo622_2_5th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 5})
    } else {

        call Demo622_2_6th()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice', 'Value': 1})
    }
}

void Demo622_2_C02_Rest() {
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6503909826278687, 'Pattern1PosY': 1.167907953262329, 'Pattern1PosZ': 2.816528081893921, 'Pattern1AtX': 0.6223139762878418, 'Pattern1AtY': 1.1120610237121582, 'Pattern1AtZ': -2.537230968475342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': 10.0, 'ASName': 'Demo622_2-C02-Link-A-0'})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo622_2-C02-Link-A-0_Loop', 'MorphingFrame': -1.0})
}

void Demo622_2_2nd() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk400', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2961.563720703125, 'Pattern1PosY': 412.84222412109375, 'Pattern1PosZ': 117.15557098388672, 'Pattern1AtX': 2970.02587890625, 'Pattern1AtY': 414.4464111328125, 'Pattern1AtZ': 109.95952606201172, 'Pattern1Fovy': 22.679845809936523, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk410', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'Demo622_2-C05-Link-A-2', 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'MorphingFrame': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.659424066543579, 'Pattern1PosY': 1.4573359489440918, 'Pattern1PosZ': 3.239074945449829, 'Pattern1AtX': 2.537108898162842, 'Pattern1AtY': 1.4026789665222168, 'Pattern1AtZ': 0.0202029999345541, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk420', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'ASName': 'Demo622_2-C02-Link-A-0_Loop'})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk430', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_2_3rd() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk500', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk510', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2915.93505859375, 'Pattern1PosY': 455.0224609375, 'Pattern1PosZ': 118.7196044921875, 'Pattern1AtX': 2923.14892578125, 'Pattern1AtY': 454.0731201171875, 'Pattern1AtZ': 116.5532455444336, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2907.318603515625, 'Pattern1PosY': 455.0224609375, 'Pattern1PosZ': 87.30699920654297, 'Pattern1AtX': 2914.532470703125, 'Pattern1AtY': 454.0731201171875, 'Pattern1AtZ': 85.14064025878906, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 450.0})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk520', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk530', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_2_4th() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk300', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk310', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2933.9208984375, 'Pattern1PosY': 406.7987060546875, 'Pattern1PosZ': 175.13812255859375, 'Pattern1AtX': 2958.32763671875, 'Pattern1AtY': 544.0120849609375, 'Pattern1AtZ': 296.2784118652344, 'Pattern1Fovy': 85.00000762939453, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk320', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3793950080871582, 'Pattern1PosY': 3.423858880996704, 'Pattern1PosZ': 4.158812999725342, 'Pattern1AtX': 0.2807619869709015, 'Pattern1AtY': -0.11428800225257874, 'Pattern1AtZ': -2.46337890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk330', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_2_5th() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk200', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_2-C02-Link-A-5', 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk210', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2907.072021484375, 'Pattern1PosY': 328.2431640625, 'Pattern1PosZ': 80.8321304321289, 'Pattern1AtX': 3036.581298828125, 'Pattern1AtY': 288.02618408203125, 'Pattern1AtZ': 0.9884949922561646, 'Pattern1Fovy': 56.96942138671875, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2916.189208984375, 'Pattern1PosY': 325.45263671875, 'Pattern1PosZ': 73.22219848632812, 'Pattern1AtX': 3038.481689453125, 'Pattern1AtY': 288.02618408203125, 'Pattern1AtZ': -10.502555847167969, 'Pattern1Fovy': 56.96942138671875, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 500.0})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk220', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk230', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo622_2-C05-Link-A-5'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4089359939098358, 'Pattern1PosY': 1.540405035018921, 'Pattern1PosZ': 1.1152340173721313, 'Pattern1AtX': 1.1494139432907104, 'Pattern1AtY': 0.9883120059967041, 'Pattern1AtZ': -2.589478015899658, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk240', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_2_6th() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2935.855712890625, 'Pattern1PosY': 401.5625, 'Pattern1PosZ': 154.34271240234375, 'Pattern1AtX': 2941.30126953125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 177.90342712402344, 'Pattern1Fovy': 79.01912689208984, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2929.297607421875, 'Pattern1PosY': 401.56256103515625, 'Pattern1PosZ': 151.48065185546875, 'Pattern1AtX': 2934.743408203125, 'Pattern1AtY': 419.9399719238281, 'Pattern1AtZ': 175.04116821289062, 'Pattern1Fovy': 79.01912689208984, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 500.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk100', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3066.0302734375, 'Pattern1PosY': 482.6143493652344, 'Pattern1PosZ': 136.2137908935547, 'Pattern1AtX': 2988.09619140625, 'Pattern1AtY': 479.2403869628906, 'Pattern1AtZ': 141.4810333251953, 'Pattern1Fovy': 40.49958038330078, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3077.538818359375, 'Pattern1PosY': 483.1141357421875, 'Pattern1PosZ': 137.25204467773438, 'Pattern1AtX': 2988.060546875, 'Pattern1AtY': 479.2403869628906, 'Pattern1AtZ': 143.2995147705078, 'Pattern1Fovy': 40.49958038330078, 'IsWaitFinish': False, 'Count': 400.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk110', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2945.4970703125, 'Pattern1PosY': 408.50372314453125, 'Pattern1PosZ': 133.0576171875, 'Pattern1AtX': 2941.405029296875, 'Pattern1AtY': 408.11700439453125, 'Pattern1AtZ': 129.01992797851562, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk120', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_2-C03-Link-A-6', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'ASName': 'Demo622_2-C02-Link-A-0_Loop'})
    }

}

void Demo622_2_C03_1st() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Musician_AoC_HeroZora', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.669495105743408, 'Pattern1PosY': 3.137877941131592, 'Pattern1PosZ': -2.492919921875, 'Pattern1AtX': 0.31445300579071045, 'Pattern1AtY': 1.5254520177841187, 'Pattern1AtZ': 0.8442379832267761, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroZora', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroZora_CountVoice'}) {
            if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice'}) {

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2954.539794921875, 'Pattern1PosY': 407.6221923828125, 'Pattern1PosZ': 137.2654266357422, 'Pattern1AtX': 2954.5087890625, 'Pattern1AtY': 407.12060546875, 'Pattern1AtZ': 132.65780639648438, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_2-C02-Link-A-3', 'MorphingFrame': -1.0})
                    }

                    Event286:
                    EventSystemActor.Demo_SetGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroZora_CountVoice'})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
                } else {
                    Event243:

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2954.539794921875, 'Pattern1PosY': 407.6221923828125, 'Pattern1PosZ': 137.2654266357422, 'Pattern1AtX': 2954.5087890625, 'Pattern1AtY': 407.12060546875, 'Pattern1AtZ': 132.65780639648438, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo622_2-C02-Link-A-2', 'MorphingFrame': -1.0})
                    }

                    goto Event286
                }
            } else {
                goto Event243
            }
        } else {
            goto Event243
        }
    } else {
        goto Event243
    }
}

void Demo622_2_C04_1st() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2951.793701171875, 'Pattern1PosY': 407.7784118652344, 'Pattern1PosZ': 111.60246276855469, 'Pattern1AtX': 2938.09716796875, 'Pattern1AtZ': 218.4278564453125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1AtY': 456.2856140136719})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2926.197509765625, 'Pattern1PosY': 408.35687255859375, 'Pattern1PosZ': 111.15916442871094, 'Pattern1AtX': 2928.769775390625, 'Pattern1AtZ': 218.4420928955078, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': False, 'Count': 800.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Pattern1AtY': 457.8315124511719})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_2:Npc_Zora_Hero_talk010', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_2ToDemo622_3() {

    call BalladOfHeroes.Check_4ChampComp()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo623_0', 'EntryPointName': 'Demo623_0'})
}

void Demo622_2_label() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'BalladOfHeroZora'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo622_2_2nd_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5793460011482239, 'Pattern1PosY': 3.0050048828125, 'Pattern1PosZ': -5.965576171875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 20.0, 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
