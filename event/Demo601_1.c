-------- EventFlow: Demo601_1 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_SetPlayerDrawingSword']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_SwitchPlayerEquipment', 'Demo_WarpPlayerToDestination', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_RecoverPlayerLife', 'Demo_IchigekiHeartUiOpen', 'Demo_IchigekiHeartDecrease', 'Demo_IchigekiHeartUiClose', 'Demo_SetPLStateToUnequipAndWait']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_BlowSwordBase_A
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Sword_502
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_Bind', 'Demo_WarpToPos', 'Demo_StopChargeChemicalWeapon', 'Demo_ChargeChemicalWeaponPower', 'Demo_RemoveRigidBody']
queries: []
params: {'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'IsGrounding': False, 'CreateMode': 1}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_SweepCollision
entrypoint: None()
actions: ['Demo_Sweep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': -1117.0, 'PosY': 150.0, 'PosZ': 1905.0}

void Demo601_1() {

    call Demo601_1_Start()


    call Demo601_1_C01()


    call Demo601_1_C02()


    call Demo601_1_C03()


    call Demo601_1_C04()


    call Demo601_1_C05()


    call Demo601_1_C06()


    call Demo601_1_C07()


    call Demo601_1_C07_1()


    call Demo601_1_C08()

}

void Demo601_1_Start() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 4, 'ActorName': '', 'IsValid': True, 'FaceId': 2})
    Fader.Demo_FadeOut({'Color': 1, 'Frame': 2, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Ichigeki_Sword_Appear'})
    Weapon_Sword_502.Demo_WarpToPos({'IsWaitFinish': True, 'TargetPos': [-1120.0, 238.54600524902344, 1907.0], 'TargetRot': [0.0, 0.0, 0.0]})
    Weapon_Sword_502.Demo_Bind({'ActorName': 'GameROMPlayer', 'NodeName': 'Weapon_R', 'UniqueName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'IsContinueBind': True, 'IsWaitFinish': False})
    EventSystemActor.Demo_SetPLStateToUnequipAndWait({'IsWaitFinish': True})
    Weapon_Sword_502.Demo_StopChargeChemicalWeapon({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Weapon_Sword_502.Demo_RemoveRigidBody({'IsWaitFinish': False})
    Obj_SweepCollision.Demo_Sweep({'DynScalingTime': 90.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -1120.699951171875, 'DestinationY': 237.3000030517578, 'DestinationZ': 1907.699951171875, 'DirectionY': 145.8509979248047})
}

void Demo601_1_C01() {
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 2, 'DispMode': 'Auto', 'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosZ': 1.282470941543579, 'Pattern1AtZ': 0.8398439884185791, 'Pattern1Fovy': 17.999984741210938, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosY': 1.1943509578704834, 'Pattern1AtY': 1.287811040878296, 'Pattern1PosX': -2.6479339599609375, 'Pattern1AtX': -1.2633670568466187, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'Demo601_1-C03-Link-A-0', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'ClothWarpMode': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo601_1_Blur'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
}

void Demo601_1_C02() {
    FldObj_DLC_BlowSwordBase_A.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -39.0, 'DestinationX': -1120.199951171875, 'DestinationZ': 1907.0, 'DestinationY': 230.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.393860101699829, 'Pattern1PosY': 0.49937400221824646, 'Pattern1PosZ': 2.704590082168579, 'Pattern1AtX': -0.9913939833641052, 'Pattern1AtY': 0.7913209795951843, 'Pattern1AtZ': 1.2458499670028687, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo601_1_Aura', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 19})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.5419620275497437, 'Pattern1PosY': 1.3720699548721313, 'Pattern1PosZ': 3.275391101837158, 'Pattern1AtX': 0.27287301421165466, 'Pattern1AtY': 1.142043948173523, 'Pattern1AtZ': 1.201904058456421, 'Pattern1Fovy': 35.009666442871094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': False, 'Count': 430.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_IchigekiHeartUiOpen({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})

    fork {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 6, 'IsWait': False})
    } {
        EventSystemActor.Demo_IchigekiHeartDecrease({'IsWaitFinish': True, 'UseFrame': 180, 'IsUseConstSpeed': 1})
    } {
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 115})
        Weapon_Sword_502.Demo_ChargeChemicalWeaponPower({'IsWaitFinish': False})
    }

    Weapon_Sword_502.Demo_XLinkEventCreate({'ELinkKey': 'DLC2_Demo601_1_MaxBase', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    EventSystemActor.Demo_IchigekiHeartUiClose({'IsWaitFinish': True})
}

void Demo601_1_C06() {
    GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo601_1-C09-Link-A-0', 'MorphingFrame': -1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.11869800090789795, 'Pattern1PosY': 1.065750002861023, 'Pattern1PosZ': 4.157958984375, 'Pattern1AtX': 0.003281000070273876, 'Pattern1AtY': 1.4944610595703125, 'Pattern1AtZ': 0.9470210075378418, 'Pattern1Fovy': 17.999984741210938, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk02'})
}

void Demo601_1_C07() {
    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C07-0', 'IsWaitFinish': False})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk09'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk03'})
}

void Demo601_1_C08() {
    Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    FldObj_DLC_BlowSwordBase_A.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -39.0, 'DestinationX': -1120.199951171875, 'DestinationY': 237.3000030517578, 'DestinationZ': 1907.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.29191601276397705, 'Pattern1PosY': 1.4018549919128418, 'Pattern1PosZ': -4.9326171875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameROMPlayer.Demo_SetPlayerDrawingSword({'IsWaitFinish': True})
    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_Weapon': 'Weapon_Sword_502', 'IsWaitFinish': True, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'UnequipBow': False, 'UnequipWeapon': False, 'UnequipShield': False})
    Weapon_Sword_502.Demo_Bind({'ActorName': 'Dm_Locator_DLC2nd', 'IsWaitFinish': True, 'UniqueName': '', 'NodeName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'IsContinueBind': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

    call BalladOfHeroes.SetFlagsForStartIchigeki()

    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
}

void Demo601_1_C03() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo601_1-C04-Link-A-0', 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.75531005859375, 'Pattern1PosY': 0.6708679795265198, 'Pattern1PosZ': 0.5461429953575134, 'Pattern1AtX': 3.289551019668579, 'Pattern1AtY': 0.7137759923934937, 'Pattern1AtZ': 0.4895020127296448, 'Pattern1Fovy': 17.999984741210938, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo601_1-C05-Link-A-0', 'IsWaitFinish': True, 'MorphingFrame': -1.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo601_1-C05-Link-A-0_Loop', 'IsWaitFinish': False, 'MorphingFrame': 0.0})
    } {
        WorldManagerControl.Demo_SetPaletteType({'PaletteType': 45, 'ChangeFrame': 1, 'EndFrame': 1, 'Speed': 3.0, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk01'})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'ASName': 'Demo601_1-C05-Link-A-2', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'MorphingFrame': -1.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo601_1-C06-Link-A-0_Loop', 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': False, 'MessageId': 'DemoMsg/Demo601_1:Talk05'})
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        FldObj_DLC_BlowSwordBase_A.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -39.0, 'DestinationX': -1120.199951171875, 'DestinationY': 237.3000030517578, 'DestinationZ': 1907.0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.910019040107727, 'Pattern1PosY': 1.7905579805374146, 'Pattern1PosZ': 3.406981945037842, 'Pattern1AtX': -0.39819300174713135, 'Pattern1AtY': 1.4292759895324707, 'Pattern1AtZ': -0.6450200080871582, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 140})
    }

}

void Demo601_1_C04() {

    fork {
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASAdapt({'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'Demo601_1-C06-Link-A-0', 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk06'})
    }

}

void Demo601_1_C05() {
    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'IsWaitFinish': False, 'SceneName': 'C05-0'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk07'})
    FldObj_DLC_BlowSwordBase_A.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -39.0, 'DestinationX': -1120.199951171875, 'DestinationZ': 1907.0, 'DestinationY': 230.0})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo601_1:Talk08'})
}

void Demo601_1_C07_1() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.9363399744033813, 'Pattern1PosY': 0.964676022529602, 'Pattern1PosZ': 5.001221179962158, 'Pattern1AtX': -0.1688230037689209, 'Pattern1AtY': 0.9706730246543884, 'Pattern1AtZ': 1.0410159826278687, 'Pattern1Fovy': 19.000024795532227, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1359859704971313, 'Pattern1PosY': 0.964676022529602, 'Pattern1PosZ': 6.089110851287842, 'Pattern1AtX': -0.3684079945087433, 'Pattern1AtY': 0.9706730246543884, 'Pattern1AtZ': 2.128662109375, 'Pattern1Fovy': 19.000024795532227, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'CollisionInterpolateSkip': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Count': 120.0, 'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsEnabledAnimeDriven': 0, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo601_1-C02-Link-A-0', 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call GetDemo.GetItemByName({'CheckTargetActorName': 'Weapon_Sword_502', 'IsInvalidOpenPouch': False})

    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
}
