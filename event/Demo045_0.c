-------- EventFlow: Demo045_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToAnchor', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_IncreaseRupee', 'Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_1_2]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_2_3]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_4_5]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_Horse]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_3_4]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_ResetBoneCtrl', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseGod001
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_DressFairy_00
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_DressFairy_03
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_DressFairy_01
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_DressFairy_02
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: EventSystemActor[player]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GreatFairyBeforeRevival
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: []
queries: ['CompareGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Demo_045_0(Tubomi)]
entrypoint: Demo_045_0(Tubomi)
actions: []
queries: []
params: None

void Demo_045_0() {
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy1_Talk'}) {
        Event32:

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpringClose_A_01', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'UniqueName1': 'CameraRelativeActor', 'Accept1FrameDelay': False, 'Pattern1PosX': 5.483887195587158, 'Pattern1PosY': 2.209656000137329, 'Pattern1PosZ': 13.955349922180176, 'Pattern1AtX': 2.331054925918579, 'Pattern1AtY': 3.979401111602783, 'Pattern1AtZ': 8.2943115234375, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'BudStandPos', 'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        }

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy2_Talk'}) {
        goto Event32
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy3_Talk'}) {
        goto Event32
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy4_Talk'}) {
        goto Event32
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_Talk'}) {
        goto Event32
    } else {

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 2.988555908203125, 'Pattern1PosZ': 17.280059814453125, 'Pattern1AtY': 6.198546886444092, 'Pattern1AtZ': 4.809967041015625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpringClose_A_01', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'UniqueName1': 'CameraRelativeActor', 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'BudStandPos', 'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }
}

void For_1_2() {

    call Demo_045_0({'CameraRelativeActor': 'Bud_1_2', 'Tubomi': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_1_2")})

}

void For_2_3() {

    call Demo_045_0({'CameraRelativeActor': 'Bud_2_3', 'Tubomi': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_2_3")})

}

void For_4_5() {

    call Demo_045_0({'CameraRelativeActor': 'Bud_4_5', 'Tubomi': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_4_5")})

}

void For_HG() {

    call Demo_045_0({'CameraRelativeActor': 'Bud_Horse', 'Tubomi': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_Horse")})

}

void For_3_4() {

    call Demo_045_0({'CameraRelativeActor': 'Bud_3_4', 'Tubomi': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_3_4")})

}

void Pay_Fairy_03() {
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'TalkHandOver', 'ClothWarpMode': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})

    fork {
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
        GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo045_0_PayMoney', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo045_0-C01-Link-A-1', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'ClothWarpMode': -1, 'NoErrorCheck': False, 'MorphingFrame': 14.0})
    } {
        Npc_DressFairy_03.Demo_PlayASForDemo({'ASName': 'Act_Please_Hand_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
        TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand_Ed', 'IsWaitFinish': False})
        TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
    }

}

void Pay_HG() {
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'TalkHandOver', 'IsOneTimeEndKeep': False, 'ClothWarpMode': -1, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})

    fork {
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
        GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo045_0_PayMoney', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 10.0, 'ASName': 'Demo045_0-C01-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'ClothWarpMode': -1, 'IsEnabledAnimeDriven': 1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'MorphingFrame': 14.0})
    } {
        HorseGod001.Demo_PlayASForDemo({'ASName': 'Act_Please_Hand_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand_Ed', 'IsWaitFinish': False})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
    }

}

void Pay_Fairy_00() {
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'TalkHandOver', 'ClothWarpMode': -1, 'IsEnabledAnimeDriven': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})

    fork {
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
        GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo045_0_PayMoney', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo045_0-C01-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'ClothWarpMode': -1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'ClothWarpMode': -1, 'NoErrorCheck': False, 'MorphingFrame': 14.0})
    } {
        Npc_DressFairy_00.Demo_PlayASForDemo({'ASName': 'Act_Please_Hand_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
        TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand_Ed', 'IsWaitFinish': False})
        TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
    }

}

void Pay_Fairy_01() {
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'TalkHandOver', 'ClothWarpMode': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})

    fork {
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
        GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo045_0_PayMoney', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo045_0-C01-Link-A-1', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'ClothWarpMode': -1, 'NoErrorCheck': False, 'MorphingFrame': 14.0})
    } {
        Npc_DressFairy_01.Demo_PlayASForDemo({'ASName': 'Act_Please_Hand_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
        TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand_Ed', 'IsWaitFinish': False})
        TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
    }

}

void Pay_Fairy_02() {
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'TalkHandOver', 'IsOneTimeEndKeep': False, 'ClothWarpMode': -1, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})

    fork {
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 12})
        GameROMPlayer.Demo_XLinkEventCreate({'ELinkKey': 'Demo045_0_PayMoney', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[player].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo045_0-C01-Link-A-1', 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'ClothWarpMode': -1, 'NoErrorCheck': False, 'MorphingFrame': 14.0})
    } {
        Npc_DressFairy_02.Demo_PlayASForDemo({'ASName': 'Act_Please_Hand_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
        TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand_Ed', 'IsWaitFinish': False})
        TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
    }

}

void BeforeRevivalFairy1() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsTalkAboutRupeeWithGreatFairy1'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsOtherFairyRevivalForGreatFairy1'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01C'})

            call GreatFairy1_PleaseHand()

            Event340:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'IsOtherFairyRevivalForGreatFairy1', 'IsWaitFinish': True})
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01B'})
            if !EventSystemActor.GeneralChoice2() {
                if !GameDataCalcMachine.CompareGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName_A': 'CurrentRupee', 'GameDataIntName_B': 'AmountRupeeForNextRevivalFountain'}) {

                    call Pay_Fairy_00()


                    call ArmorProcessingEventTag.PaySuitableRupee()

                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo028_0', 'EntryPointName': 'DressFairy0', 'IsWaitFinish': True, 'EndFade': 0})

                    call Npc_DressFairy_00.DressFairyTalk_First()

                } else {
                    Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                    TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                    TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    Event131:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy1_Appear'})
                }
            } else {
                Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                goto Event131
            }
        } else {

            call GreatFairy1_PleaseHand()

            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk01', 'IsCloseMessageDialog': False})
            goto Event340
        }
    } else {

        call GreatFairy1_PleaseHand()

        EventSystemActor.Demo_FlagON({'FlagName': 'IsTalkAboutRupeeWithGreatFairy1', 'IsWaitFinish': True})
        GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01'})
        goto Event340
    }
}

void BeforeRevivalFairy2() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsTalkAboutRupeeWithGreatFairy2'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsOtherFairyRevivalForGreatFairy2'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01C'})

            call GreatFairy2_PleaseHand()

            Event313:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'IsOtherFairyRevivalForGreatFairy2', 'IsWaitFinish': True})
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01B'})
            if !EventSystemActor.GeneralChoice2() {
                if !GameDataCalcMachine.CompareGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName_A': 'CurrentRupee', 'GameDataIntName_B': 'AmountRupeeForNextRevivalFountain'}) {

                    call Pay_Fairy_01()


                    call ArmorProcessingEventTag.PaySuitableRupee()

                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo028_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'DressFairy1'})

                    call Npc_DressFairy_01.DressFairyTalk_First()

                } else {
                    Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                    TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                    TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    Event163:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy2_Appear'})
                }
            } else {
                Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                goto Event163
            }
        } else {

            call GreatFairy2_PleaseHand()

            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk01', 'IsCloseMessageDialog': False})
            goto Event313
        }
    } else {

        call GreatFairy2_PleaseHand()

        EventSystemActor.Demo_FlagON({'FlagName': 'IsTalkAboutRupeeWithGreatFairy2', 'IsWaitFinish': True})
        GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01'})
        goto Event313
    }
}

void BeforeRevivalFairy3() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsTalkAboutRupeeWithGreatFairy3'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsOtherFairyRevivalForGreatFairy3'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01C'})

            call GreatFairy3_PleaseHand()

            Event324:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'IsOtherFairyRevivalForGreatFairy3', 'IsWaitFinish': True})
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01B'})
            if !EventSystemActor.GeneralChoice2() {
                if !GameDataCalcMachine.CompareGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName_A': 'CurrentRupee', 'GameDataIntName_B': 'AmountRupeeForNextRevivalFountain'}) {

                    call Pay_Fairy_02()


                    call ArmorProcessingEventTag.PaySuitableRupee()

                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo028_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'DressFairy2'})

                    call Npc_DressFairy_02.DressFairyTalk_First()

                } else {
                    Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                    TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                    TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    Event195:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy3_Appear'})
                }
            } else {
                Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                goto Event195
            }
        } else {

            call GreatFairy3_PleaseHand()

            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk01', 'IsCloseMessageDialog': False})
            goto Event324
        }
    } else {

        call GreatFairy3_PleaseHand()

        EventSystemActor.Demo_FlagON({'FlagName': 'IsTalkAboutRupeeWithGreatFairy3', 'IsWaitFinish': True})
        GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01'})
        goto Event324
    }
}

void BeforeRevivalFairy4() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsTalkAboutRupeeWithGreatFairy4'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsOtherFairyRevivalForGreatFairy4'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01C'})

            call GreatFairy4_PleaseHand()

            Event335:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'IsOtherFairyRevivalForGreatFairy4', 'IsWaitFinish': True})
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01B'})
            if !EventSystemActor.GeneralChoice2() {
                if !GameDataCalcMachine.CompareGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName_A': 'CurrentRupee', 'GameDataIntName_B': 'AmountRupeeForNextRevivalFountain'}) {

                    call Pay_Fairy_03()


                    call ArmorProcessingEventTag.PaySuitableRupee()

                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo028_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'DressFairy3'})

                    call Npc_DressFairy_03.DressFairyTalk_First()

                } else {
                    Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                    TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                    TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                    Event227:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy4_Appear'})
                }
            } else {
                Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
                TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
                TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                goto Event227
            }
        } else {

            call GreatFairy4_PleaseHand()

            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk01', 'IsCloseMessageDialog': False})
            goto Event335
        }
    } else {

        call GreatFairy4_PleaseHand()

        EventSystemActor.Demo_FlagON({'FlagName': 'IsTalkAboutRupeeWithGreatFairy4', 'IsWaitFinish': True})
        GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_01'})
        goto Event335
    }
}

void BeforeRevivalFairyHG() {

    fork {
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand'})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'HandAppear', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk01', 'IsCloseMessageDialog': False})
    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_05B'})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 1000}) {

            call Pay_HG()

            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -1000})
            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo028_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'HorseGod'})

            call HorseGod001.HorseGodTalk_First()

        } else {
            HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
            TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
            TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk04', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            Event259:
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy5_Appear'})
        }
    } else {
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Hand_Stop'})
        TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'HandAppear', 'SLinkKey': ''})
        GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        goto Event259
    }
}

void GreatFairy1_PleaseHand() {

    fork {
        Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand'})
        TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'HandAppear', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

}

void GreatFairy2_PleaseHand() {

    fork {
        Npc_DressFairy_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand'})
        TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'HandAppear', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

}

void GreatFairy3_PleaseHand() {

    fork {
        Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand'})
        TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'HandAppear', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

}

void GreatFairy4_PleaseHand() {

    fork {
        Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Please_Hand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Hand'})
        TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'HandAppear', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    }

}
