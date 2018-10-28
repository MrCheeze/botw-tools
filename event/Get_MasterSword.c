-------- EventFlow: Get_MasterSword --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WarpPlayer', 'Demo_RecoverPlayerLife', 'Demo_ResetPullSwordStartLife', 'Demo_AutoSave', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_EquipLastSetItem', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_AdvanceQuest']
queries: ['CheckExtraLifeOfPlayer', 'ComparePlayerMaxHeart', 'CheckGameDataInt', 'HasPorchItem', 'CheckFlag', 'CheckPlayerPullSwordFailEnd', 'ComparePlayerHeart', 'ComparePlayerMaxStamina']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_Idling', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Weapon_Sword_070
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_SuccessGet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[first]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[second]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void NukiGameStart() {
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo104_0', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo300_0', 'EntryPointName': 'Demo300_0_a', 'IsWaitFinish': True, 'EndFade': 0})
    Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 2})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo104_1', 'EndFade': 1})

    fork {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'F-2', 'WarpDestPosName': 'MasterSword_Out', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        GameROMPlayer.Demo_TurnAndLookToObjectNow({'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'TwnObj_Village_Korok_DekuTree_A_01', 'IsValid': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.37322998046875, 'Pattern1PosY': 250.1218719482422, 'Pattern1PosZ': -2108.63818359375, 'Pattern1AtX': 431.4632568359375, 'Pattern1AtY': 253.07264709472656, 'Pattern1AtZ': -2114.03173828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 1}) {
      case 0:
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Talk00', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk'})
        Event231:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': 'Finish', 'QuestName': 'Get_MasterSword'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
      case [1, 2]:
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Talk01', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk'})
        goto Event231
    }
}

void NukiGameCancel() {

    fork {

        call NukiGameDekuHint()

    } {
        if !EventSystemActor.CheckPlayerPullSwordFailEnd() {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.37322998046875, 'Pattern1PosY': 250.1218719482422, 'Pattern1PosZ': -2108.63818359375, 'Pattern1AtX': 431.4632568359375, 'Pattern1AtY': 253.07264709472656, 'Pattern1AtZ': -2114.03173828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo300_0-C02-Link-A-2', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -2})
        } else {
            GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Weapon_Sword_070', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
            if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_FirstCancel'}) {
                EventSystemActor[second].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.215759038925171, 'Pattern1PosY': 1.3622280359268188, 'Pattern1PosZ': -4.872069835662842, 'Pattern1AtX': -0.30731201171875, 'Pattern1AtY': 1.4169009923934937, 'Pattern1AtZ': -0.5998539924621582, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_MasterSwordBase_A_01', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'ASName': 'Demo300_0-C01-Link-A-7', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
            } else {
                EventSystemActor[first].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.37322998046875, 'Pattern1PosY': 250.1218719482422, 'Pattern1PosZ': -2108.63818359375, 'Pattern1AtX': 431.4632568359375, 'Pattern1AtY': 253.07264709472656, 'Pattern1AtZ': -2114.03173828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': True, 'ASName': 'Demo300_0-C01-Link-A-7', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ActorName': 'TwnObj_Village_Korok_DekuTree_A_01', 'PosOffset': [0.0, 0.0, 0.0]})
            }
        }
    }

    Event127:
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsCenterHeartGauge_Demo'})
    EventSystemActor.Demo_ResetPullSwordStartLife({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Get_MasterSword_Heart52', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Get_MasterSword_Heart40'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}

void NukiGameFinish() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo109_0'})
    SoundTriggerTag.Demo_SoundTrigger({'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo300_Player_Remember', 'SoundDelay': 0})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'NoLogo', 'Frame': 1, 'Color': 0})
    Weapon_Sword_070.Demo_TrigNullASPlay({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo300_0-C01-Weapon_Sword_070-A-1'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo109_1', 'EndFade': 0})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.37322998046875, 'Pattern1PosY': 250.1218719482422, 'Pattern1PosZ': -2108.63818359375, 'Pattern1AtX': 431.4632568359375, 'Pattern1AtY': 253.07264709472656, 'Pattern1AtZ': -2114.03173828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'TwnObj_Village_Korok_DekuTree_A_01', 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': 1})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Weapon_Sword_070', 'IsInvalidOpenPouch': False})

    EventSystemActor.Demo_EquipLastSetItem({'IsWaitFinish': True})
    Weapon_Sword_070.Demo_SuccessGet({'IsWaitFinish': False})
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 4}) {
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Finish02'})
    } else {
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Finish01'})
    }
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsCenterHeartGauge_Demo'})
    EventSystemActor.Demo_ResetPullSwordStartLife({'IsWaitFinish': True})
    EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Get_MasterSword_Finish'})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}

void NukiGameFirstFailure() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Get_MasterSword_FirstFailure'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.37322998046875, 'Pattern1PosY': 250.1218719482422, 'Pattern1PosZ': -2108.63818359375, 'Pattern1AtX': 431.4632568359375, 'Pattern1AtY': 253.07264709472656, 'Pattern1AtZ': -2114.03173828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'TwnObj_Village_Korok_DekuTree_A_01', 'PosOffset': [0.0, 200.0, 0.0]})

    fork {
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_FirstFailure01', 'ASName': 'Face_C_Talk'})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_FirstFailure02', 'ASName': 'Face_C_Talk'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo300_0-C02-Link-A-2', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -2})
    }

    goto Event127
}

void NukiGameDekuHint() {
    if !EventSystemActor.CheckPlayerPullSwordFailEnd() {
        if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 13}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'GreaterThanOrEqualTo', 'Value': 40}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_DungeonClearSeal', 'Count': 4}) {
                    TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel04', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
                } else {
                    TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel03', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
                }
                Event89:
                TwnObj_Village_Korok_DekuTree_A_01.Demo_SetInstEventFlag({'IsWaitFinish': True})
            } else
            if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 10}) {
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel00', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
                goto Event89
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Heart40'}) {
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel01', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': False})
                if !EventSystemActor.ComparePlayerHeart({'Threshold': 4}) {
                    TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel01_2', 'IsCloseMessageDialog': True})
                } else {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                }
                goto Event89
            } else {
                Event108:
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel05', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
                goto Event89
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Heart52'}) {
            goto Event108
        } else {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel02', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
        }
        goto Event89
    } else
    if !EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_FirstCancel'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Get_MasterSword_FirstCancel', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Get_MasterSword:Deku_Cancel06', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': True})
        goto Event89
    }
}
