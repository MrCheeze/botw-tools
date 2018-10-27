-------- EventFlow: Common --------

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithograph_A_01
entrypoint: None()
actions: ['Demo_OnWaitRevival', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02
entrypoint: None()
actions: ['Demo_OnWaitRevival', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_WarpPlayerToDestination', 'Demo_ShowPhoto', 'Demo_CloseItemMenu', 'Demo_SwitchPlayerEquipment']
queries: ['CheckPlayerRideHorse', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayASAdapt', 'Demo_Join', 'Demo_PlayerWait', 'Demo_PlayerAirWait', 'Demo_StopInAir', 'Demo_DisableUnliftInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko003[LookPicture(Self)]
entrypoint: LookPicture(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Self[ShowSheikPad(Self)]
entrypoint: ShowSheikPad(Self)
actions: ['Demo_LookAtObject']
queries: []
params: None

Actor: Self[TidyUpSheikPadAfterPicture(Self)]
entrypoint: TidyUpSheikPadAfterPicture(Self)
actions: ['Demo_LookAtObject']
queries: []
params: None

Actor: FldObj_GiantBrotherBall_01[RemainsLithogragh_Giant(Self)]
entrypoint: RemainsLithogragh_Giant(Self)
actions: ['Demo_Delete']
queries: []
params: None

Actor: DgnObj_RemainsLithogragh_A_02[RemainsLithogragh_Giant(DgnObj_RemainsLithogragh_A_02)]
entrypoint: RemainsLithogragh_Giant(DgnObj_RemainsLithogragh_A_02)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_OnWaitRevival']
queries: []
params: None

Actor: Npc_OasisHylia_002[Lookpicture_for_Ch_SnowBoots(Self)]
entrypoint: Lookpicture_for_Ch_SnowBoots(Self)
actions: ['Demo_Talk']
queries: []
params: None

void RemainsLithograph() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithograph_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': '', 'SLinkKey': 'RemainsLithogragh', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithograph_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithograph_A_01.Demo_OnWaitRevival({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void RemainsLithogragh_Hole() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithogragh_A_02.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'RemainsLithogragh_Hole', 'ELinkKey': 'Actiove', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithogragh_A_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithogragh_A_02.Demo_OnWaitRevival({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
    DgnObj_RemainsLithogragh_A_02.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void DisableSaveAndWarp() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BloodyMoonProhibition'})
}

void EnableSaveAndWarp() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BloodyMoonProhibition'})
}

void ResetPlayerPosition() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': ''})
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'DestinationX', 'DestinationY': 'DestinationY', 'DestinationZ': 'DestinationZ', 'DirectionY': 'DirectionY'})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': ''})
}

void ResetPlayerPositionWithInitTalk() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': ''})
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'DestinationX', 'DestinationY': 'DestinationY', 'DestinationZ': 'DestinationZ', 'DirectionY': 'DirectionY'})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': ''})
}

void DisableWarp() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
}

void EnableWarp() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
}

void LookPicture() {

    call ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_Kakariko003[LookPicture(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/FairyFountain:LookPicture'})

    call TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void ShowSheikPad() {
    Item_Conductor.Demo_Join({'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOn', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    } {
        Self[ShowSheikPad(Self)].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Item_Conductor', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
    }

}

void TidyUpSheikPad() {
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOff', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
}

void ZoomUpSheikPad() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Item_Conductor', 'TargetActor2': 1, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 20.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'Pattern1AtX': -0.07999999821186066, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 55.0, 'Count': 0.0, 'Cushion': 0.0, 'Pattern1PosY': 0.5600000023841858, 'Pattern1PosX': -0.8399999737739563, 'Pattern1PosZ': -0.12999999523162842, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Item_Conductor', 'TargetActor2': 1, 'Pattern1Fovy': 50.0, 'MotionMode': 0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'LatShiftRange': 0.0, 'LngShiftRange': 20.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'FovyAppendMode': 1, 'IsWaitFinish': True, 'Pattern1AtX': -0.07999999821186066, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1PosX': -0.6700000166893005, 'Pattern1PosY': 0.4399999976158142, 'Pattern1PosZ': -0.10000000149011612, 'Count': 'ZoomTimer', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Event109:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    } else {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'StartCalcOnly': True, 'Pattern1AtZ': 0.20000000298023224, 'Pattern1AtX': 0.20000000298023224, 'Pattern1PosX': 1.0, 'Pattern1PosZ': 1.0, 'Pattern1PosY': 0.9300000071525574, 'Pattern1Fovy': 55.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'LngShiftRange': 20.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 0.7300000190734863, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'LatShiftRange': 0.0, 'Pattern1PosY': 0.8299999833106995, 'Pattern1AtX': 0.20000000298023224, 'Cushion': 0.20000000298023224, 'Pattern1AtZ': 0.20000000298023224, 'Pattern1PosX': 0.800000011920929, 'Pattern1PosZ': 0.800000011920929, 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'LngShiftRange': 20.0, 'Count': 'ZoomTimer', 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 0.7300000190734863, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        goto Event109
    }
}

void TidyUpSheikPadAfterPicture() {
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSheikPadShowOff', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': 1})
    } {
        Self[TidyUpSheikPadAfterPicture(Self)].Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': '', 'IsConfront': False})
    }

}

void ShowSword() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Weapon': 'PorchItemName_Weapon'})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowSword', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
}

void ShowLargeSword() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Weapon': 'PorchItemName_Weapon'})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowLsword', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
}

void ShowSpear() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Weapon': 'PorchItemName_Weapon'})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowSpear', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
}

void ShowBow() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Bow': 'PorchItemName_Weapon', 'PorchItemName_Weapon': ''})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkWeaponShowBow', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
}

void Play_ReadRiddle() {
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void Play_ReadRiddle_NoWait() {
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': False})
}

void RemainsLithogragh_Giant() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithogragh_A_02[RemainsLithogragh_Giant(DgnObj_RemainsLithogragh_A_02)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'RemainsLithogragh_Hole', 'ELinkKey': 'Actiove', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithogragh_A_02[RemainsLithogragh_Giant(DgnObj_RemainsLithogragh_A_02)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithogragh_A_02[RemainsLithogragh_Giant(DgnObj_RemainsLithogragh_A_02)].Demo_OnWaitRevival({'IsWaitFinish': False})
    FldObj_GiantBrotherBall_01[RemainsLithogragh_Giant(Self)].Demo_Delete({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void Lookpicture_for_Ch_SnowBoots() {

    call ShowSheikPad({'Self': 'Self'})

    EventSystemActor.Demo_ShowPhoto({'IsWaitFinish': True, 'ActorName': 'ActorName'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_OasisHylia_002[Lookpicture_for_Ch_SnowBoots(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:LookPicture', 'IsOverWriteLabelActorName': False})

    call TidyUpSheikPadAfterPicture({'Self': 'Self'})

}

void AirStartUP_Player() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
}

void AirStartUP_Player2() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': True})
    }
}

void AirStartUP_Player_NoDrop() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_DisableUnliftInEvent({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
}
