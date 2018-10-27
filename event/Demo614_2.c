-------- EventFlow: Demo614_2 --------

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
actions: ['Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn', 'Demo_CameraAnimFlowAbs']
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

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_TimeSpecRumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: Npc_Musician_AoC_HeroZora
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo614_2() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Mute'})
    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': False, 'ActorName': 'Npc_Musician_AoC_HeroZora'}) {
        Npc_Musician_AoC_HeroZora.Demo_Join({'IsWaitFinish': True})
        Event33:
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})

        call Demo614_0.Demo614_Pre()

        LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'UniqueName': 'Demo614_2HorsePos', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_GiveHeroOrbs'}) {

            call Demo614_2_C01_2nd()

            NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo614_2:Npc_DungeonPriest_talk200'})
            if !EventSystemActor.GeneralChoice2() {
                Event119:

                call Demo614_2_C03_Yes()


                call Demo614_2_C04()


                call Demo614_2_C05()

                EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

                call BalladOfHeroCommon.RemainsSetFlag_Water()

                EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EntryPointName': 'AppearCurse', 'WarpDestPosName': 'StartR', 'WarpDestMapName': 'MainFieldDungeon/RemainsWater', 'EvflName': 'BalladOfHeroZora'})
            } else {

                call Demo614_2_C03_No()

            }
        } else {

            call Demo614_2_C01()


            call Demo614_2_C01-2()


            call Demo614_2_C02()

            EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
            if !EventSystemActor.CheckEventCancel() {
                goto Event119
            } else {
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
                EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'DLCSinJuAkashiNum_00'})
                SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_GiveHeroOrbs'}) {
                    goto Event119
                } else {
                    EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'IsWaitFinish': True, 'RelicPattern': 1})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_GiveHeroOrbs'})
                    goto Event119
                }
            }
        }
    } else {
        goto Event33
    }
}

void Demo614_2_C01() {
    if !EventSystemActor.CheckCurseRRetryEverOnce({'CurseRType': 3}) {
        Event257:

        call Demo614_2_C01Sub()

    } else {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
        goto Event257
    }
}

void Demo614_2_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2924.37890625, 'Pattern1PosY': 395.63897705078125, 'Pattern1PosZ': 143.9034881591797, 'Pattern1AtX': 2950.142333984375, 'Pattern1AtY': 476.8662109375, 'Pattern1AtZ': 225.98135375976562, 'Pattern1Fovy': 59.849395751953125, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0})

    fork {
        EventSystemActor[2nd].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_2:Npc_DungeonPriest_talk100'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        EventSystemActor.Demo_AppearNumHeroSeal({'IsWaitFinish': True, 'RelicPattern': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        EventSystemActor.Demo_IncreaseNumHeroSeal({'Value': -3, 'IsWaitFinish': True, 'RelicPattern': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_GiveHeroOrbs'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_DisappearNumHeroSeal({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_2:Npc_DungeonPriest_talk101'})
}

void Demo614_2_C03_Yes() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})
    if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Finish'}) {
        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': False, 'IsWaitFinish': True, 'StepName': 'Finish', 'QuestName': 'BalladOfHeroZora'})
    }
}

void Demo614_2_C04() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo614_2-C04-Link-A-0', 'ClothWarpMode': 1})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.06323199719190598, 'Pattern1PosY': 1.5042719841003418, 'Pattern1PosZ': 3.35400390625, 'Pattern1AtX': 0.0004879999905824661, 'Pattern1AtY': 1.4017330408096313, 'Pattern1AtZ': -0.0003659999929368496, 'Pattern1Fovy': 24.999980926513672, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.05493199825286865, 'Pattern1PosY': 1.4898990392684937, 'Pattern1PosZ': 2.883544921875, 'Pattern1AtX': 0.0004879999905824661, 'Pattern1AtY': 1.4017330408096313, 'Pattern1AtZ': -0.0003659999929368496, 'Pattern1Fovy': 24.999980926513672, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 86.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo614_2_C03_No() {
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo614_2_C05() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.12133800238370895, 'Pattern1PosY': 1.805053949356079, 'Pattern1PosZ': 4.303955078125, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.495177984237671, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 7.650000095367432})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo614_Fringe', 'SLinkKey': 'Demo614_Fringe', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'Seconds': 5, 'IsWaitFinish': False, 'IsWait': True})
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
        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'Seconds': 1, 'IsWaitFinish': False, 'IsWait': False})
    }

    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
}

void Demo614_2_C01-2() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.6303709745407104, 'Pattern1PosY': 0.754302978515625, 'Pattern1PosZ': 2.719970941543579, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.502959966659546, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo614_2:Npc_DungeonPriest_talk000'})
}

void Demo614_2_C01_2nd() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    call Demo614_2_C01Sub()

    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
    if EventSystemActor.CheckEventCancel() {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2942.861328125, 'Pattern1PosY': 408.18719482421875, 'Pattern1PosZ': 126.92218780517578, 'Pattern1AtX': 2943.239501953125, 'Pattern1AtY': 408.9421081542969, 'Pattern1AtZ': 132.0030059814453, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
    }
}

void Demo614_2_C01Sub() {
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 10.0, 'DestinationX': 2944.800048828125, 'DestinationY': 407.0, 'DestinationZ': 131.6999969482422})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo614_2-C01-Link-A-0'})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': False})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
}
