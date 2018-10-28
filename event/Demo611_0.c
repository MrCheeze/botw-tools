-------- EventFlow: Demo611_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OpenDungeonMessage', 'Demo_RecoverPlayerLife', 'Demo_RecoverPlayerEnergy', 'Demo_StartHeartDemo', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen', 'Demo_SetupGetDemoModeNumUi', 'Demo_ResetBoneCtrl', 'Demo_SetGameDataInt', 'Demo_FromCDunToMainField', 'Demo_SetCurrentDungeonClearFlag', 'Demo_ForceSystemFadeOut']
queries: ['CheckGameDataInt', 'CheckEventCancel', 'CheckCurrentMap', 'CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_GoalShield_A
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc2nd001
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_ResetBoneCtrl', 'Demo_PlayerShow', 'Demo_PlayerHide']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo611_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    fork {
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor[2nd].Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'TargetActorPosReferenceMode': 0})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    call Demo611_0_CheckDungeon()


    call Demo611_0_C01()


    call Demo611_0_C02()


    call Demo611_0_C03()


    call Demo611_0_C04()


    call Demo611_0_AkashiCount()


    call Demo611_0_C05()


    call Demo611_0_C06()

}

void Demo611_0_CheckDungeon() {
    EventSystemActor.Demo_SetGameDataInt({'Value': 0, 'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon'})
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon124'}) {
        Event130:
        EventSystemActor.Demo_SetGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon'})
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon125'}) {
        goto Event130
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon126'}) {
        goto Event130
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon127'}) {
        Event131:
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Value': 2})
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon128'}) {
        goto Event131
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon129'}) {
        goto Event131
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon130'}) {
        Event132:
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Value': 3})
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon131'}) {
        goto Event132
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon132'}) {
        goto Event132
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon121'}) {
        Event133:
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Value': 4})
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon133'}) {
        goto Event133
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'Dungeon134'}) {
        goto Event133
    }
}

void Demo611_0_C02() {

    fork {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
    } {

        fork {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 1}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Zo_talk000'})
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 2}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Ri_talk000'})
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 3}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Go_talk000'})
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 4}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Ge_talk000'})
            }
        } {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0', 'TargetActorPosReferenceMode': 0})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_DungeonPriestDlc2nd001'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

    }

}

void Demo611_0_C04() {
    if !EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'MorphingFrame': 25.0, 'ClothWarpMode': -1})
        Event31:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_ForceSystemFadeOut({'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 1}) {
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'AddNum': 1, 'IsWaitFinish': True, 'NumUiType': 3})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DLC_HeroSeal_Zora'})

            Event30:
            EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
            EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
            EventSystemActor.Demo_StartHeartDemo({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsIgnoreSame': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 2}) {
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'AddNum': 1, 'IsWaitFinish': True, 'NumUiType': 4})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DLC_HeroSeal_Rito'})

            goto Event30
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 3}) {
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'AddNum': 1, 'IsWaitFinish': True, 'NumUiType': 2})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DLC_HeroSeal_Goron'})

            goto Event30
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 4}) {
            EventSystemActor.Demo_SetupGetDemoModeNumUi({'AddNum': 1, 'IsWaitFinish': True, 'NumUiType': 5})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_DLC_HeroSeal_Gerudo'})

            goto Event30
        } else {
            goto Event30
        }
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        DgnObj_GoalShield_A.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': 'Break'})
        Npc_DungeonPriestDlc2nd001.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'ProofOut', 'SLinkKey': ''})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event31
    }
}

void Demo611_0_AkashiCount() {
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 1}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'Clear_Dungeon124', 'GameDataFlagNo1': 'Clear_Dungeon125', 'GameDataFlagNo2': 'Clear_Dungeon126', 'GameDataFlagNo3': '', 'GameDataFlagNo4': ''}) {
          case 0:
            Event256:
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.9999999949504854e-06, 'Pattern1PosY': 0.6801850199699402, 'Pattern1PosZ': 4.477158069610596, 'Pattern1AtX': -1.9999999949504854e-06, 'Pattern1AtY': 0.7951220273971558, 'Pattern1AtZ': 3.4837839603424072, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_DungeonPriestDlc2nd001', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_talk000'})
            EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_talk001', 'IsWaitFinish': True})
            Event251:
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'BalladOfHeroes_CountClearDungeons', 'Value': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
          case 1:
            Event257:
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.9999999949504854e-06, 'Pattern1PosY': 0.6801850199699402, 'Pattern1PosZ': 4.477158069610596, 'Pattern1AtX': -1.9999999949504854e-06, 'Pattern1AtY': 0.7951220273971558, 'Pattern1AtZ': 3.4837839603424072, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_DungeonPriestDlc2nd001', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_talk000'})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_talk002'})
            goto Event251
          case [2, 3, 4, 5]:
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 0, 'SceneName': 'C05-1', 'IsWaitFinish': True})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Zo_talk003'})
            goto Event251
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 2}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'Clear_Dungeon127', 'GameDataFlagNo1': 'Clear_Dungeon128', 'GameDataFlagNo2': 'Clear_Dungeon129', 'GameDataFlagNo3': '', 'GameDataFlagNo4': ''}) {
          case 0:
            goto Event256
          case 1:
            goto Event257
          case [2, 3, 4, 5]:
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 0, 'SceneName': 'C05-1'})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Ri_talk003'})
            goto Event251
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 3}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'Clear_Dungeon130', 'GameDataFlagNo1': 'Clear_Dungeon131', 'GameDataFlagNo2': 'Clear_Dungeon132', 'GameDataFlagNo3': '', 'GameDataFlagNo4': ''}) {
          case 0:
            goto Event256
          case 1:
            goto Event257
          case [2, 3, 4, 5]:
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 0, 'SceneName': 'C05-1'})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Go_talk003'})
            goto Event251
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 4}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'Clear_Dungeon121', 'GameDataFlagNo1': 'Clear_Dungeon133', 'GameDataFlagNo2': 'Clear_Dungeon134', 'GameDataFlagNo3': '', 'GameDataFlagNo4': ''}) {
          case 0:
            goto Event256
          case 1:
            goto Event257
          case [2, 3, 4, 5]:
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': True, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 0, 'SceneName': 'C05-1'})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo611_0:Npc_DungeonPriest_Ge_talk003'})
            goto Event251
        }
    } else {
        goto Event251
    }
}

void Demo611_0_C01() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Demo611_0-C03-Link-A-1'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        DgnObj_GoalShield_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'TargetActorPosReferenceMode': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
    } {
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BreakOmen', 'SLinkKey': 'BreakOmen', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        DgnObj_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    }

}

void Demo611_0_C03() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 1}) {
            Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ProofOut_Water'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 2}) {
            Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ProofOut_Wind'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 3}) {
            Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ProofOut_Fire'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroes_CheckChampDungeon', 'Operator': 'Equal', 'Value': 4}) in [1, 0] {
            Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'ProofOut', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ProofOut_Electric'})
        }
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Demo611_0-C06-Link-A-1'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03-0', 'TargetActorPosReferenceMode': 0})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C04-0', 'TargetActorPosReferenceMode': 0})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    }

    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': -1, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'SceneName': 'C05-0', 'TargetActorPosReferenceMode': 0})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
}

void Demo611_0_C06() {
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C07-0', 'TargetActorPosReferenceMode': 0})
    EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_SetCurrentDungeonClearFlag({'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if EventSystemActor.CheckEventCancel() {
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
    }
    EventSystemActor.Demo_FromCDunToMainField({'StartType': 1, 'IsWaitFinish': True, 'EvflName': 'Demo008_4', 'EntryPointName': 'Demo008_4'})
}

void Demo611_0_C05() {
    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'TargetActor': -1, 'ActorName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C06-0', 'TargetActorPosReferenceMode': 0})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
    } {
        Npc_DungeonPriestDlc2nd001.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'IsWaitFinish': False, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc2nd001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo033_0_PriestVanish'})
    }

}
