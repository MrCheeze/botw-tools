-------- EventFlow: Demo601_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OpenMap', 'Demo_CloseItemMenu', 'Demo_WarpPlayerToAnchor', 'Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_SetChallengeIcon']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_ResetBoneCtrl', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[FinalTrial_Entrance]
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'RotY': -39.0, 'PosY': 237.27017211914062, 'PosX': -1120.185302734375, 'PosZ': 1907.02197265625}

Actor: FldObj_DLC_BlowSwordBase_A[BlowSwordBase_01]
entrypoint: None()
actions: ['Demo_WarpEffectValueSetter', 'Demo_VisibleOff', 'Demo_VisibleOn']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_Bind', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_XLinkEventFade', 'Demo_WarpEffectValueSetter', 'Demo_StopChargeChemicalWeapon']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[Demo601_0_DownloadTerminal_Active(FldObj_DownloadTerminal_A_02)]
entrypoint: Demo601_0_DownloadTerminal_Active(FldObj_DownloadTerminal_A_02)
actions: []
queries: []
params: None

Actor: Obj_DRStoneStand[Demo601_0_DownloadTerminalSet(Obj_DRStoneStand)]
entrypoint: Demo601_0_DownloadTerminalSet(Obj_DRStoneStand)
actions: []
queries: []
params: None

void Demo601_0() {

    call Demo601_0_C01()


    call Demo601_0_C02()


    call Demo601_0_C03()


    call Demo601_0_C04()


    call Demo601_0_C05()


    call Demo601_0_C06()


    call Demo601_0_C09()

}

void Demo601_0_C01() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 4, 'ActorName': '', 'IsValid': True, 'FaceId': 2})
    DgnObj_DLC_Weapon_Sword_502.Demo_StopChargeChemicalWeapon({'IsWaitFinish': True})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.897199034690857, 'Pattern1PosY': 2.2129220962524414, 'Pattern1PosZ': -0.5571020245552063, 'Pattern1AtX': -0.16559800505638123, 'Pattern1AtY': 0.8450210094451904, 'Pattern1AtZ': 0.834201991558075, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'IsWaitFinish': False, 'ASName': 'Demo601_0-C01-Link-A-0'})
    } {
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        call Demo601_0_DownloadTerminal_Active({'SheikerStoneTarget_UniqueName': 'FinalTrial_Entrance', 'ActorName': 'FldObj_DownloadTerminal_A_02', 'FldObj_DownloadTerminal_A_02': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="FinalTrial_Entrance")})

    } {
        EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo601_0_Start'})
    }

    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo601_0:Talk05', 'IsCloseMessageDialog': True})
    FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_XLinkEventCreate({'ELinkKey': 'DLC_TerminalElevatorStart', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})

    fork {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'ASName': 'ToActivatedWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    }

}

void Demo601_0_C02() {
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'BalladOfHeroes', 'ForceRunTelop': False, 'StepName': 'Retire'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'BalladOfHeroes'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 2, 'WorldPos': [-1061.0, 249.3000030517578, 2000.0]})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'NoErrorCheck': False, 'ASName': 'Demo601_0-C02-Link-A-0', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'MorphingFrame': 5.0})
    FldObj_DLC_BlowSwordBase_A[BlowSwordBase_01].Demo_VisibleOff({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo601_0:Talk02'})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
}

void Demo601_0_C03() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.897199034690857, 'Pattern1PosY': 2.2129220962524414, 'Pattern1PosZ': -0.5571020245552063, 'Pattern1AtX': -0.16559800505638123, 'Pattern1AtY': 0.8450210094451904, 'Pattern1AtZ': 0.834201991558075, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    call Demo601_0_DownloadTerminalSet({'Obj_DRStoneStand': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="FinalTrial_Entrance"), 'ShiekerStoneBindTargetUniqueName': 'FinalTrial_Entrance', 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_02'})

}

void Demo601_0_C04() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.615601062774658, 'Pattern1PosY': 2.2332921028137207, 'Pattern1PosZ': -6.2412109375, 'Pattern1AtX': 1.535156011581421, 'Pattern1AtY': 2.0518341064453125, 'Pattern1AtZ': -3.622070074081421, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'ELinkKey': 'DLC2_Demo601_0_Warp_In', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DLC2_Demo601_0_Warp_In'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff'})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Demo601_0-C04-Link-A-0', 'IsWaitFinish': True, 'ClothWarpMode': 1})
}

void Demo601_0_C05() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'IsEnabledAnimeDriven': -1, 'NoErrorCheck': False, 'IsWaitFinish': False, 'ASName': 'Demo601_0-C05-Link-A-0'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1127.828857421875, 'Pattern1PosY': 238.3818359375, 'Pattern1PosZ': 1903.519287109375, 'Pattern1AtX': -1125.0936279296875, 'Pattern1AtY': 238.59799194335938, 'Pattern1AtZ': 1904.2481689453125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1128.1038818359375, 'Pattern1PosY': 238.38192749023438, 'Pattern1PosZ': 1904.2232666015625, 'Pattern1AtX': -1125.368408203125, 'Pattern1AtY': 238.59799194335938, 'Pattern1AtZ': 1904.952392578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 120.0})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo601_0_IchigekiImage', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1120.914794921875, 'Pattern1PosY': 238.84178161621094, 'Pattern1PosZ': 1908.1929931640625, 'Pattern1AtX': -1120.177978515625, 'Pattern1AtY': 239.07484436035156, 'Pattern1AtZ': 1907.0274658203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1121.16064453125, 'Pattern1PosY': 238.14447021484375, 'Pattern1PosZ': 1908.9234619140625, 'Pattern1AtX': -1120.177978515625, 'Pattern1AtY': 238.7071075439453, 'Pattern1AtZ': 1907.0274658203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 150.0})
    } {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Ichigeki_Sword_Appear'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            DgnObj_DLC_Weapon_Sword_502.Demo_WarpEffectValueSetter({'SetFrame': 120.0, 'ChangeType': 0, 'IsWaitFinish': False})
        } {
            FldObj_DLC_BlowSwordBase_A[BlowSwordBase_01].Demo_WarpEffectValueSetter({'SetFrame': 120.0, 'IsWaitFinish': True, 'ChangeType': 0})
            FldObj_DLC_BlowSwordBase_A[BlowSwordBase_01].Demo_VisibleOn({'IsWaitFinish': False})
        }

    }

}

void Demo601_0_C06() {
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': False, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'FldObj_DLC_BlowSwordBase_A', 'UniqueName': 'BlowSwordBase_01'})
    DgnObj_DLC_Weapon_Sword_502.Demo_XLinkEventFade({'ELinkKey': 'DLC2_Demo601_0_Warp_In', 'IsWaitFinish': True, 'SLinkKey': ''})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo601_0:Talk03'})
}

void Demo601_0_C09() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0725099965929985, 'Pattern1PosY': 3.9193570613861084, 'Pattern1PosZ': -5.1192169189453125, 'Pattern1AtX': -0.0087890001013875, 'Pattern1AtY': 3.206299066543579, 'Pattern1AtZ': -3.5001220703125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_DRStoneStand'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void Demo601_0_DownloadTerminal_Active() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    fork {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Activate', 'IsIgnoreSame': True})
    } {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Activate_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 88})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Set', 'SLinkKey': 'Set', 'IsTargetDemoSLinkUser': False})
    } {
        Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ActorName', 'UniqueName': 'SheikerStoneTarget_UniqueName'})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 86})
        Item_Conductor.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Set', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void Demo601_0_DownloadTerminalSet() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'NoErrorCheck': False, 'ASName': 'Demo601_0-C03-Link-A-0', 'MorphingFrame': -1.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'GetOffStone_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'ToActivatedWait_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {

        fork {
            Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ShiekerStoneBindTargetActorName', 'UniqueName': 'ShiekerStoneBindTargetUniqueName'})
        } {
            Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
        }

    }

}
