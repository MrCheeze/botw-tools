-------- EventFlow: Demo622_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_SetGameDataInt', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_DeletePorchItemInEquip', 'Demo_RecoverPlayerLife', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_ForceOpenMainScreen']
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
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_Ctrl', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroRito
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle']
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
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})

    call Demo622_1_C01()

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {

        call Demo622_1_C02_Rest()


        call Demo622_1_C03_Rest()


        call Demo622_1_2nd_End()

        Event36:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
    } else {

        call Demo622_1_C02_1st()


        call Demo622_1_C03_1st()


        call Demo622_1_C04_1st()


        call Demo622_1_GetUI()


        call Demo622_1_End()


        call Demo622_1_label()


        call Demo622_1ToDemo622_3()

        goto Event36
    }
}

void Demo622_1_C01() {
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 170.0, 'DestinationX': -3627.800048828125, 'DestinationY': 515.0, 'DestinationZ': -1802.0})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_GenerateCurse'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_DieCurse'})

    call BalladOfHeroCommon.RemainsResetFlag()

    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo622_Fringe', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo622_Fringe'})

    fork {
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWait': True, 'IsWaitFinish': False, 'Seconds': 1})
        GameRomCamera.Demo_CameraAnimFlow({'UniqueName': '', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_1-C01-Link-A-0_Loop', 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_1-C01-Link-A-0', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ASName': 'DemoWait'})
    } {
        Fader.Demo_FadeIn({'Frame': 2, 'IsWaitFinish': True, 'Color': 0, 'DispMode': 'Auto'})
    }

}

void Demo622_1_GetUI() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'ClothWarpMode': -2, 'ASName': 'Demo622_1-GetUI-Link-A-0'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0})
    }

    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': -1, 'PorchItemName': 'Obj_HeroSoul_Rito'})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Obj_DLC_HeroSoul_Rito', 'IsInvalidOpenPouch': True})

}

void Demo622_1_C02_1st() {
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo612_1'})
}

void Demo622_1_End() {
    Npc_Musician_AoC_HeroRito.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_DemoObj01'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0007319999858736992, 'Pattern1PosY': 1.7367550134658813, 'Pattern1PosZ': -5.248046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
}

void Demo622_1_C03_Rest() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'LessThanOrEqualTo', 'Value': 1}) {

        call Demo622_1_C03_2nd()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'IsWaitFinish': True, 'Value': 2})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'Equal', 'Value': 2}) {

        call Demo622_1_C03_3rd()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'IsWaitFinish': True, 'Value': 3})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'Equal', 'Value': 3}) {

        call Demo622_1_C03_4th()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'IsWaitFinish': True, 'Value': 4})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'Equal', 'Value': 4}) {

        call Demo622_1_C03_5th()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'IsWaitFinish': True, 'Value': 5})
    } else {

        call Demo622_1_C03_6th()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'IsWaitFinish': True, 'Value': 1})
    }
}

void Demo622_1_C02_Rest() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6503909826278687, 'Pattern1PosY': 1.167907953262329, 'Pattern1PosZ': 2.816528081893921, 'Pattern1AtX': 0.6223139762878418, 'Pattern1AtY': 1.1120610237121582, 'Pattern1AtZ': -2.537230968475342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo622_1-C02-Link-A-0', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': 10.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C02-Link-A-0_Loop', 'IsWaitFinish': False, 'MorphingFrame': 0.0})
}

void Demo622_1_C03_2nd() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk200', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.44165000319480896, 'Pattern1PosY': 1.2645260095596313, 'Pattern1PosZ': 1.9788819551467896, 'Pattern1AtX': 0.8374019861221313, 'Pattern1AtY': 1.5248409509658813, 'Pattern1AtZ': -3.367187976837158, 'Pattern1Fovy': 34.559669494628906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C04-Link-A-3', 'MorphingFrame': 15.0, 'ClothWarpMode': -1})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk210', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3604.052978515625, 'Pattern1PosY': 512.0575561523438, 'Pattern1PosZ': -1903.010498046875, 'Pattern1AtX': -3590.6171875, 'Pattern1AtY': 430.87493896484375, 'Pattern1AtZ': -1863.1534423828125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3602.87060546875, 'Pattern1PosY': 504.9154052734375, 'Pattern1PosZ': -1899.5040283203125, 'Pattern1AtX': -3590.6171875, 'Pattern1AtY': 430.87493896484375, 'Pattern1AtZ': -1863.1534423828125, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk220', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk230', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }

    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C07-Link-A-3', 'ClothWarpMode': -2, 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.44165000319480896, 'Pattern1PosY': 1.2645260095596313, 'Pattern1PosZ': 1.9788819551467896, 'Pattern1AtX': 0.8374019861221313, 'Pattern1AtY': 1.5248409509658813, 'Pattern1AtZ': -3.367187976837158, 'Pattern1Fovy': 34.559669494628906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk240', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_1_C03_3rd() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk500', 'IsWaitAS': True, 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1, 'ASName': 'Demo622_1-C04-Link-A-3', 'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3604.052978515625, 'Pattern1PosY': 512.0575561523438, 'Pattern1PosZ': -1903.010498046875, 'Pattern1AtX': -3590.6171875, 'Pattern1AtY': 430.87493896484375, 'Pattern1AtZ': -1863.1534423828125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3602.87060546875, 'Pattern1PosY': 504.9154052734375, 'Pattern1PosZ': -1899.5040283203125, 'Pattern1AtX': -3590.6171875, 'Pattern1AtY': 430.87493896484375, 'Pattern1AtZ': -1863.1534423828125, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk510', 'IsWaitAS': True, 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.44165000319480896, 'Pattern1PosY': 1.2645260095596313, 'Pattern1PosZ': 1.9788819551467896, 'Pattern1AtX': 0.8374019861221313, 'Pattern1AtY': 1.5248409509658813, 'Pattern1AtZ': -3.367187976837158, 'Pattern1Fovy': 34.559669494628906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo622_1-C07-Link-A-3', 'ClothWarpMode': -1, 'IsWaitFinish': False, 'NoErrorCheck': False})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk520', 'IsWaitAS': False, 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk530', 'IsWaitAS': False, 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }

}

void Demo622_1_C03_4th() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk400', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3461.300537109375, 'Pattern1PosY': 470.521240234375, 'Pattern1PosZ': -1700.9541015625, 'Pattern1AtX': -3505.80859375, 'Pattern1AtY': 513.33935546875, 'Pattern1AtZ': -1761.8916015625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3454.649169921875, 'Pattern1PosY': 470.8160400390625, 'Pattern1PosZ': -1706.1944580078125, 'Pattern1AtX': -3505.80859375, 'Pattern1AtY': 513.33935546875, 'Pattern1AtZ': -1761.8916015625, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk410', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6503909826278687, 'Pattern1PosY': 1.167907953262329, 'Pattern1PosZ': 2.816528081893921, 'Pattern1AtX': 0.6223139762878418, 'Pattern1AtY': 1.1120610237121582, 'Pattern1AtZ': -2.537230968475342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk420', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3523.011962890625, 'Pattern1PosY': 564.072998046875, 'Pattern1PosZ': -1801.080078125, 'Pattern1AtX': -3562.076171875, 'Pattern1AtY': 610.9495239257812, 'Pattern1AtZ': -1862.759033203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3513.036376953125, 'Pattern1PosY': 563.6636352539062, 'Pattern1PosZ': -1809.02978515625, 'Pattern1AtX': -3562.076171875, 'Pattern1AtY': 610.9495239257812, 'Pattern1AtZ': -1862.759033203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 800.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk430', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.42553699016571045, 'Pattern1PosY': 1.4016720056533813, 'Pattern1PosZ': 2.217406988143921, 'Pattern1AtX': 0.9936519861221313, 'Pattern1AtY': 1.1120610237121582, 'Pattern1AtZ': -4.191895008087158, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1Fovy': 27.300100326538086})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk440', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_1_C03_5th() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk300', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.44165000319480896, 'Pattern1PosY': 1.2645260095596313, 'Pattern1PosZ': 1.9788819551467896, 'Pattern1AtX': 0.8374019861221313, 'Pattern1AtY': 1.5248409509658813, 'Pattern1AtZ': -3.367187976837158, 'Pattern1Fovy': 34.559669494628906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C04-Link-A-4', 'MorphingFrame': 15.0, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk310', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C04-Link-B-4', 'IsOneTimeEndKeep': False, 'MorphingFrame': 15.0, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk320', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3646.10009765625, 'Pattern1PosY': 627.8258666992188, 'Pattern1PosZ': -1806.9578857421875, 'Pattern1AtX': -3551.08984375, 'Pattern1AtY': 600.7017822265625, 'Pattern1AtZ': -1819.815673828125, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3637.802978515625, 'Pattern1PosY': 625.4571533203125, 'Pattern1PosZ': -1808.0806884765625, 'Pattern1AtX': -3551.08984375, 'Pattern1AtY': 600.7017822265625, 'Pattern1AtZ': -1819.815673828125, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk330', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_1_C03_6th() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk100', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3644.5, 'Pattern1PosY': 627.5999755859375, 'Pattern1PosZ': -1816.4000244140625, 'Pattern1AtY': 601.4000244140625, 'Pattern1AtX': -3549.199951171875, 'Pattern1AtZ': -1814.4000244140625})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3644.5, 'Pattern1PosY': 627.5999755859375, 'Pattern1PosZ': -1816.4000244140625, 'Pattern1AtY': 601.4000244140625, 'Pattern1AtX': -3550.60009765625, 'Pattern1AtZ': -1799.5, 'Count': 400.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk110', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo622_1-C05-Link-A-2', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': -3626.60009765625, 'Pattern1AtZ': -1801.96630859375, 'Pattern1Fovy': 23.999998092651367, 'Pattern1PosY': 516.2000122070312, 'Pattern1AtY': 516.2000122070312, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3631.52001953125, 'Pattern1PosZ': -1803.800048828125, 'ReviseModeEnd': 0, 'Count': 0.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk120', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk130', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_1_C04_1st() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -64.3580322265625, 'Pattern1PosY': -43.68609619140625, 'Pattern1PosZ': 11.626220703125, 'Pattern1AtX': -60.6385498046875, 'Pattern1AtY': -39.87469482421875, 'Pattern1AtZ': 12.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -65.5281982421875, 'Pattern1PosY': -36.205078125, 'Pattern1PosZ': 22.13232421875, 'Pattern1AtX': -61.8087158203125, 'Pattern1AtY': -32.3936767578125, 'Pattern1AtZ': 22.5712890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 800.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk010', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_1_C03_1st() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3625.064697265625, 'Pattern1PosY': 518.6025390625, 'Pattern1PosZ': -1812.8983154296875, 'Pattern1AtX': -3628.902587890625, 'Pattern1AtY': 517.0880737304688, 'Pattern1AtZ': -1809.1270751953125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroZora_CountVoice'}) {
            if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice'}) {

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk000', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3626.3388671875, 'Pattern1PosY': 516.3895263671875, 'Pattern1PosZ': -1808.8209228515625, 'Pattern1AtX': -3627.64990234375, 'Pattern1AtY': 516.272705078125, 'Pattern1AtZ': -1807.793701171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo622_1-C02-Link-A-3', 'MorphingFrame': -1.0})
                    }

                    Event330:
                    EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Value': 1, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
                } else {
                    Event323:

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo622_1:Npc_Rito_Hero_talk000', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3626.3388671875, 'Pattern1PosY': 516.3895263671875, 'Pattern1PosZ': -1808.8209228515625, 'Pattern1AtX': -3627.64990234375, 'Pattern1AtY': 516.272705078125, 'Pattern1AtZ': -1807.793701171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_1-C02-Link-A-2', 'MorphingFrame': 5.0})
                    }

                    goto Event330
                }
            } else {
                goto Event323
            }
        } else {
            goto Event323
        }
    } else {
        goto Event323
    }
}

void Demo622_1ToDemo622_3() {

    call BalladOfHeroes.Check_4ChampComp()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo623_0', 'EntryPointName': 'Demo623_0'})
}

void Demo622_1_label() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'BalladOfHeroRito'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo622_1_2nd_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0007319999858736992, 'Pattern1PosY': 1.7367550134658813, 'Pattern1PosZ': -5.248046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 20.0, 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
