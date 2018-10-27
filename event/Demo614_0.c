-------- EventFlow: Demo614_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_OpenDungeonMessage', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_AppearNumHeroSeal', 'Demo_IncreaseNumHeroSeal', 'Demo_DisappearNumHeroSeal', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_RecoverPlayerLife', 'Demo_KillUIScreen']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckEventCancel', 'CheckCurseRRetryEverOnce', 'CheckPlayerRideHorse', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_XLinkEventCreate', 'Demo_GetOffFromHorse', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DoshiMes]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: Npc_Musician_AoC_HeroGoron
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo614_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Mute'})
    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': False, 'ActorName': 'Npc_Musician_AoC_HeroGoron'}) {
        Npc_Musician_AoC_HeroGoron.Demo_Join({'IsWaitFinish': True})
        Event106:
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})

        call Demo614_Pre()

        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_GiveHeroOrbs'}) {

            call Demo614_0_C01_2nd()

            NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo614_0:Npc_DungeonPriest_talk200'})
            if !EventSystemActor.GeneralChoice2() {
                Event82:

                call Demo614_0_C03_Yes()


                call Demo614_0_C04()


                call Demo614_0_C05()

                EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

                call BalladOfHeroCommon.RemainsSetFlag_Fire()

                EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EntryPointName': 'AppearCurse', 'WarpDestPosName': 'StartR', 'WarpDestMapName': 'MainFieldDungeon/RemainsFire', 'EvflName': 'BalladOfHeroGoron'})
            } else {

                call Demo614_0_C03_No()

            }
        } else {

            call Demo614_0_C01()


            call Demo614_0_C01-2()


            call Demo614_0_C02()

            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
            if !EventSystemActor.CheckEventCancel() {
                goto Event82
            } else {
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'DLCSinJuAkashiNum_00'})
                SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_GiveHeroOrbs'}) {
                    goto Event82
                } else {
                    EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'IsWaitFinish': True, 'RelicPattern': 0})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_GiveHeroOrbs'})
                    goto Event82
                }
            }
        }
    } else {
        goto Event106
    }
}

void Demo614_0_C01() {
    if !EventSystemActor.CheckCurseRRetryEverOnce({'CurseRType': 2}) {
        Event173:

        call Demo614_0_C01Sub()

    } else {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        goto Event173
    }
}

void Demo614_0_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2373.9931640625, 'Pattern1PosY': 1000.2161254882812, 'Pattern1PosZ': -2491.945556640625, 'Pattern1AtX': 2420.291259765625, 'Pattern1AtY': 983.56884765625, 'Pattern1AtZ': -2562.60546875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'IsWaitFinish': True})

    fork {
        EventSystemActor[DoshiMes].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_0:Npc_DungeonPriest_talk100'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        EventSystemActor.Demo_AppearNumHeroSeal({'IsWaitFinish': True, 'RelicPattern': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'IsWaitFinish': True, 'RelicPattern': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_GiveHeroOrbs'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_DisappearNumHeroSeal({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_0:Npc_DungeonPriest_talk101'})
}

void Demo614_0_C03_Yes() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})
    if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': False, 'IsWaitFinish': True, 'StepName': 'Finish', 'QuestName': 'BalladOfHeroGoron'})
    }
}

void Demo614_0_C03_No() {
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo614_0_C04() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'ASName': 'Demo614_0-C04-Link-A-0'})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.5994869470596313, 'Pattern1PosZ': 3.575927972793579, 'Pattern1AtY': 1.4017330408096313, 'Pattern1AtZ': 0.43689000606536865, 'Pattern1Fovy': 24.999980926513672, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.5994869470596313, 'Pattern1PosZ': 3.160767078399658, 'Pattern1AtY': 1.4017330408096313, 'Pattern1AtZ': 0.021484000608325005, 'Pattern1Fovy': 24.999980926513672, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 86.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1AtX': 0.0, 'Pattern1PosX': 0.0})
    }

}

void Demo614_0_C05() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.12133800238370895, 'Pattern1PosY': 1.805053949356079, 'Pattern1PosZ': 4.303955078125, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.495177984237671, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 7.650000095367432})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo614_Fringe', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo614_Fringe'})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWait': True, 'IsWaitFinish': False, 'Seconds': 5})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 3, 'Power': 0.0020000000949949026})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 3, 'Power': 0.004999999888241291})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventCameraRumble.Demo_RumbleLoop({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 3, 'Power': 0.009999999776482582})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C04-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 0, 'Frame': 2})
    } {
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'SLinkKey': '', 'ELinkKey': 'Demo614_BackFlare'})
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
    }

    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
}

void Demo614_0_C01-2() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_0:Npc_DungeonPriest_talk000'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.7805179953575134, 'Pattern1PosY': 0.7490839958190918, 'Pattern1PosZ': 2.656493902206421, 'Pattern1AtX': 0.019531000405550003, 'Pattern1AtY': 1.5062869787216187, 'Pattern1AtZ': 0.07080099731683731, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo614_0_C01_2nd() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    call Demo614_0_C01Sub()

    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor.CheckEventCancel() {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2486.800537109375, 'Pattern1PosY': 986.931884765625, 'Pattern1PosZ': -2547.824462890625, 'Pattern1AtX': 2440.708984375, 'Pattern1AtY': 1003.7725219726562, 'Pattern1AtZ': -2569.227783203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
    }
}

void Demo614_0_C01Sub() {
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2478.89990234375, 'DestinationY': 987.0, 'DestinationZ': -2548.5, 'DirectionY': -100.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo614_0-C01-Link-A-0'})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
}

void Demo614_Pre() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': False, 'ClearDemoMemberIfNotOwned': True})
        Event188:
        OwnedHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
    } else {
        LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
        goto Event188
    }
}
