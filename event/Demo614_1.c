-------- EventFlow: Demo614_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_OpenDungeonMessage', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_AppearNumHeroSeal', 'Demo_IncreaseNumHeroSeal', 'Demo_DisappearNumHeroSeal', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_RecoverPlayerLife', 'Demo_KillUIScreen']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckEventCancel', 'CheckCurseRRetryEverOnce', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_XLinkEventCreate', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn', 'Demo_PermitGfxNear']
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

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DoushiMs]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroRito
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo614_1() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Mute'})
    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': False, 'ActorName': 'Npc_Musician_AoC_HeroRito'}) {
        Npc_Musician_AoC_HeroRito.Demo_Join({'IsWaitFinish': True})
        Event154:
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})

        call Demo614_0.Demo614_Pre()

        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_GiveHeroOrbs'}) {

            call Demo614_1_C01_2nd()

            NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo614_1:Npc_DungeonPriest_talk200'})
            if !EventSystemActor.GeneralChoice2() {
                Event72:

                call Demo614_1_C03_Yes()


                call Demo614_1_C04()


                call Demo614_1_C05()

                EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

                call BalladOfHeroCommon.RemainsSetFlag_Wind()

                EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'WarpDestMapName': 'MainFieldDungeon/RemainsWind', 'StartType': -1, 'EntryPointName': 'AppearCurse', 'WarpDestPosName': 'StartR', 'EvflName': 'BalladOfHeroRito'})
            } else {

                call Demo614_1_C03_No()

            }
        } else {

            call Demo614_1_C01()


            call Demo614_1_C01-2()


            call Demo614_1_C02()

            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
            if !EventSystemActor.CheckEventCancel() {
                goto Event72
            } else {
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'DLCSinJuAkashiNum_00'})
                SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_GiveHeroOrbs'}) {
                    goto Event72
                } else {
                    EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'IsWaitFinish': True, 'RelicPattern': 2})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_GiveHeroOrbs'})
                    goto Event72
                }
            }
        }
    } else {
        goto Event154
    }
}

void Demo614_1_C01() {
    if !EventSystemActor.CheckCurseRRetryEverOnce({'CurseRType': 0}) {
        Event214:

        call Demo614_1_C01Sub()

    } else {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        goto Event214
    }
}

void Demo614_1_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -86.962890625, 'Pattern1PosY': -48.27801513671875, 'Pattern1PosZ': 144.987060546875, 'Pattern1AtX': -49.633056640625, 'Pattern1AtY': -8.69647216796875, 'Pattern1AtZ': 68.75927734375, 'Pattern1Fovy': 44.99999237060547, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})

    fork {
        EventSystemActor[DoushiMs].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_1:Npc_DungeonPriest_talk100'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        EventSystemActor.Demo_AppearNumHeroSeal({'IsWaitFinish': True, 'RelicPattern': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'RelicPattern': 2, 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroRito_GiveHeroOrbs', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_DisappearNumHeroSeal({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_1:Npc_DungeonPriest_talk101'})
}

void Demo614_1_C03_Yes() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})
    if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
        EventSystemActor.Demo_AdvanceQuest({'QuestName': 'BalladOfHeroRito', 'ForceRunTelop': False, 'IsWaitFinish': True, 'StepName': 'Finish'})
    }
}

void Demo614_1_C04() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Demo614_1-C04-Link-A-0', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3626.50537109375, 'Pattern1PosY': 516.5614624023438, 'Pattern1PosZ': -1805.099365234375, 'Pattern1AtX': -3627.00048828125, 'Pattern1AtY': 516.3483276367188, 'Pattern1AtZ': -1801.999755859375, 'Pattern1Fovy': 24.999980926513672, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3626.552978515625, 'Pattern1PosY': 516.5614013671875, 'Pattern1PosZ': -1804.8016357421875, 'Pattern1AtX': -3627.048828125, 'Pattern1AtY': 516.3483276367188, 'Pattern1AtZ': -1801.702392578125, 'Pattern1Fovy': 24.999980926513672, 'ReviseModeEnd': 0, 'Count': 86.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo614_1_C03_No() {
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo614_1_C05() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.12133800238370895, 'Pattern1PosY': 1.805053949356079, 'Pattern1PosZ': 4.303955078125, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.495177984237671, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 7.650000095367432})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo614_Fringe', 'SLinkKey': 'Demo614_Fringe', 'IsTargetDemoSLinkUser': False})
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

void Demo614_1_C01-2() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_1:Npc_DungeonPriest_talk000'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.7805179953575134, 'Pattern1PosY': 0.7490839958190918, 'Pattern1PosZ': 2.656493902206421, 'Pattern1AtX': 0.019531000405550003, 'Pattern1AtY': 1.5062869787216187, 'Pattern1AtZ': 0.07080099731683731, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo614_1_C01_2nd() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    call Demo614_1_C01Sub()

    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor.CheckEventCancel() {
        if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': False, 'ActorName': 'Npc_Musician_AoC_HeroRito'}) {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -66.2081298828125, 'Pattern1PosY': -49.43084716796875, 'Pattern1PosZ': -1.8920899629592896, 'Pattern1AtX': -57.5177001953125, 'Pattern1AtY': -48.78253173828125, 'Pattern1AtZ': -2.203125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            Event191:
            SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -66.1187744140625, 'Pattern1PosY': -49.508056640625, 'Pattern1PosZ': -0.9643549919128418, 'Pattern1AtX': -57.517578125, 'Pattern1AtY': -48.78253173828125, 'Pattern1AtZ': -2.202881097793579, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWind', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            goto Event191
        }
    }
}

void Demo614_1_C01Sub() {
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 170.0, 'DestinationX': -3627.0, 'DestinationY': 515.0, 'DestinationZ': -1802.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo614_1-C01-Link-A-0', 'IsWaitFinish': False})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})
    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': False, 'ActorName': 'Npc_Musician_AoC_HeroRito'}) {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'SitRemainsWind', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-1'})
        Event158:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    } else {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'SitRemainsWind', 'SceneName': 'C01-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1})
        goto Event158
    }
}
