-------- EventFlow: Demo622_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_SetGameDataInt', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_DeletePorchItemInEquip', 'Demo_RecoverPlayerLife', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_ForceOpenMainScreen', 'Demo_AutoSave']
queries: ['CheckGameDataInt', 'CheckFlag']
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

Actor: Npc_Musician_AoC_HeroGoron
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag[forDuckEnvDeathMountain]
entrypoint: None()
actions: ['Demo_CustomDuckingStart']
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

    call Demo622_0_C01()

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {

        call Demo622_0_C02_Rest()


        call Demo622_0_C03_Rest()


        call Demo622_0_2nd_End()

        Event314:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {

        call Demo622_0_C02_1st()


        call Demo622_0_C03_1st()


        call Demo622_0_C04_1st()


        call Demo622_0_GetUI()


        call Demo622_0_End()


        call Demo622_0_label()


        call Demo622_0ToDemo623_0()

        goto Event314
    }
}

void Demo622_0_C01() {
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2478.89990234375, 'DestinationY': 987.0, 'DestinationZ': -2548.5, 'DirectionY': -126.5999984741211})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_GenerateCurse'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_DieCurse'})

    call BalladOfHeroCommon.RemainsResetFlag()


    fork {
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWait': True, 'IsWaitFinish': False, 'Seconds': 1})
        GameRomCamera.Demo_CameraAnimFlow({'UniqueName': '', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo622_Fringe', 'SLinkKey': 'Demo622_Fringe'})
        GameROMPlayer.Demo_PlayASAdapt({'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo622_0-C01-Link-A-0_Loop'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_0-C01-Link-A-0', 'IsWaitFinish': False, 'NoErrorCheck': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': True, 'ASName': 'DemoWait'})
    } {
        Fader.Demo_FadeIn({'Frame': 2, 'IsWaitFinish': True, 'Color': 0, 'DispMode': 'Auto'})
    }

}

void Demo622_0_GetUI() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'NoErrorCheck': False, 'ASName': 'Demo622_0-GetUI-Link-A-0', 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
    }

    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'PorchItemName': 'Obj_HeroSoul_Goron', 'DeleteNum': -1})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Obj_DLC_HeroSoul_Goron', 'IsInvalidOpenPouch': True})

}

void Demo622_0_C02_1st() {
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    SceneSoundCtrlTag[forDuckEnvDeathMountain].Demo_CustomDuckingStart({'IsWaitFinish': True, 'FadeInSec': 2.5, 'TargetGroups': 'EnvBaseNoise', 'ExceptGroups': '', 'StartDelaySec': 0.0, 'Volume': 0.10000000149011612, 'FadeOutSec': 0.5})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo612_0', 'EntryPointName': 'Demo612_0'})
}

void Demo622_0_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0007319999858736992, 'Pattern1PosY': 1.7367550134658813, 'Pattern1PosZ': -5.248046875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Demo622_0_C03_Rest() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 1}) {

        call Demo622_0_C03_2nd()

        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 2})
    } else {
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 2}) {

            call Demo622_0_C03_3rd()

            EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 3})
        } else {
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 3}) {

                call Demo622_0_C03_4th()

                EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 4})
            } else {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 4}) {

                    call Demo622_0_C03_5th()

                    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 5})
                } else {

                    call Demo622_0_C03_6th()

                    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice', 'Value': 1})
                }
            }
        }
    }
}

void Demo622_0_C02_Rest() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6503909826278687, 'Pattern1PosY': 1.167907953262329, 'Pattern1PosZ': 2.816528081893921, 'Pattern1AtX': 0.6223139762878418, 'Pattern1AtY': 1.1120610237121582, 'Pattern1AtZ': -2.537230968475342, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    SceneSoundCtrlTag[forDuckEnvDeathMountain].Demo_CustomDuckingStart({'IsWaitFinish': True, 'FadeInSec': 2.5, 'TargetGroups': 'EnvBaseNoise', 'ExceptGroups': '', 'StartDelaySec': 0.0, 'Volume': 0.10000000149011612, 'FadeOutSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_0-C02-Link-A-0', 'MorphingFrame': 10.0, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_0-C02-Link-A-0_Loop', 'IsWaitFinish': False, 'MorphingFrame': 0.0})
}

void Demo622_0_C03_2nd() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk200', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk210', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1972.7501220703125, 'Pattern1PosY': 670.360107421875, 'Pattern1PosZ': -2025.0166015625, 'Pattern1AtX': 2063.667724609375, 'Pattern1AtY': 698.6387329101562, 'Pattern1AtZ': -2114.044189453125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk220', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.8225100040435791, 'Pattern1PosY': 3.149780035018921, 'Pattern1PosZ': 2.086060047149658, 'Pattern1AtX': -0.05761700123548508, 'Pattern1AtY': 0.8295289874076843, 'Pattern1AtZ': -0.037108998745679855, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk230', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_0_C03_3rd() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk300', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0275880098342896, 'Pattern1PosY': 2.778259038925171, 'Pattern1PosZ': 2.104979991912842, 'Pattern1AtX': -0.08398400247097015, 'Pattern1AtY': 1.3249510526657104, 'Pattern1AtZ': -0.0433650016784668, 'Pattern1Fovy': 20.87984275817871, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk310', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 96})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo622_0-C06-Link-A-3', 'ClothWarpMode': -2, 'NoErrorCheck': True, 'IsWaitFinish': True, 'MorphingFrame': 15.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_0-C02-Link-A-0_Loop', 'IsWaitFinish': False, 'MorphingFrame': 30.0})
    } {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk320', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_0_C03_4th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk500', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk510', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1910.2811279296875, 'Pattern1PosY': 1172.855712890625, 'Pattern1PosZ': -2877.04345703125, 'Pattern1AtX': 1977.017333984375, 'Pattern1AtY': 1125.834716796875, 'Pattern1AtZ': -2841.8017578125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk520', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.69970703125, 'Pattern1PosY': 1.055907964706421, 'Pattern1PosZ': 2.414824962615967, 'Pattern1AtX': -0.03955100104212761, 'Pattern1AtY': 1.095154047012329, 'Pattern1AtZ': 0.019286999478936195, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk530', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_0_C03_5th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk400', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0275880098342896, 'Pattern1PosY': 2.778259038925171, 'Pattern1PosZ': 2.104979991912842, 'Pattern1AtX': -0.08398400247097015, 'Pattern1AtY': 1.3249510526657104, 'Pattern1AtZ': -0.0433650016784668, 'Pattern1Fovy': 20.87984275817871, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk410', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2520.53466796875, 'Pattern1PosY': 1024.7454833984375, 'Pattern1PosZ': -2527.892578125, 'Pattern1AtX': 2336.847412109375, 'Pattern1AtY': 952.4092407226562, 'Pattern1AtZ': -2620.293212890625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk420', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0275880098342896, 'Pattern1PosY': 2.778259038925171, 'Pattern1PosZ': 2.104979991912842, 'Pattern1AtX': -0.08398400247097015, 'Pattern1AtY': 1.3249510526657104, 'Pattern1AtZ': -0.0433650016784668, 'Pattern1Fovy': 20.87984275817871, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk430', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_0_C03_6th() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk100', 'CloseDialogOption': 1, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.69970703125, 'Pattern1PosY': 1.055907964706421, 'Pattern1PosZ': 2.414824962615967, 'Pattern1AtX': -0.03955100104212761, 'Pattern1AtY': 1.095154047012329, 'Pattern1AtZ': 0.019286999478936195, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk110', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void Demo622_0_C04_1st() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2390.525390625, 'Pattern1PosY': 1016.644287109375, 'Pattern1PosZ': -2488.89306640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Count': 800.0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk010', 'CloseDialogOption': 1, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }

}

void Demo622_0_C03_1st() {
    Npc_Musician_AoC_HeroGoron.Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2456.8935546875, 'Pattern1PosY': 1001.4644775390625, 'Pattern1PosZ': -2539.278564453125, 'Pattern1AtX': 2458.4951171875, 'Pattern1AtY': 1000.349853515625, 'Pattern1AtZ': -2538.204833984375, 'Pattern1Fovy': 30.000015258789062, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_CountVoice', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroZora_CountVoice'}) {
            if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGerudo_CountVoice'}) {
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice'}) {

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2462.489013671875, 'Pattern1PosY': 996.2799072265625, 'Pattern1PosZ': -2538.483642578125, 'Pattern1AtX': 2463.500244140625, 'Pattern1AtY': 996.1630859375, 'Pattern1AtZ': -2537.160400390625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo622_0-C02-Link-A-3', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
                    }

                    Event293:
                    EventSystemActor.Demo_SetGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroGoron_CountVoice'})
                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
                } else {
                    Event260:

                    fork {
                        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo622_0:Npc_Goron_Hero_talk000', 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'IsCloseMessageDialog': True})
                        EventSystemActor[voice].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2462.488525390625, 'Pattern1PosY': 996.2796630859375, 'Pattern1PosZ': -2538.483154296875, 'Pattern1AtX': 2463.500244140625, 'Pattern1AtY': 996.1630859375, 'Pattern1AtZ': -2537.160400390625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    } {
                        EventSystemActor[Player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo622_0-C02-Link-A-2', 'MorphingFrame': 5.0})
                    }

                    goto Event293
                }
            } else {
                goto Event260
            }
        } else {
            goto Event260
        }
    } else {
        goto Event260
    }
}

void Demo622_0ToDemo623_0() {

    call BalladOfHeroes.Check_4ChampComp()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo623_0', 'EntryPointName': 'Demo623_0'})
}

void Demo622_0_label() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'BalladOfHeroGoron'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo622_0_2nd_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5793460011482239, 'Pattern1PosY': 3.0050048828125, 'Pattern1PosZ': -5.965576171875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 20.0, 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}
