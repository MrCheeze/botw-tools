-------- EventFlow: Demo209_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_PlayerHorseGetOff']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_WaitForFrameOrKeyInput', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Sword_501
entrypoint: None()
actions: ['Demo_Bind', 'Demo_WarpToPos']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': 432.6687927246094, 'PosY': 248.94309997558594, 'PosZ': -2102.095947265625}

Actor: Npc_kokiri005_DLCDemo
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosX': 433.0, 'PosY': 249.35000610351562, 'PosZ': -2102.0, 'IsWorld': True}

Actor: Npc_kokiri006_DLCDemo
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'PosX': 435.6499938964844, 'PosY': 248.6999969482422, 'PosZ': -2103.0, 'CreateMode': 1, 'IsWorld': True}

Actor: Npc_kokiri004_DLCDemo
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosX': 430.29998779296875, 'PosY': 248.6999969482422, 'PosZ': -2101.199951171875, 'IsWorld': True}

Actor: Npc_kokiri012_DLCDemo
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'PosX': 435.3999938964844, 'PosY': 248.6999969482422, 'PosZ': -2101.56005859375, 'CreateMode': 1, 'IsWorld': True}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_NotifyTalk', 'Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[makamaka]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[KorogoC]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[KorogoD]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Demo209_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
        Event167:
        EventSystemActor.Demo_FlagON({'FlagName': '100enemy_Demo209', 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 433.20001220703125, 'DestinationY': 248.89999389648438, 'DestinationZ': -2103.60009765625, 'DirectionY': 191.8000030517578})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
            SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text000', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'DekuTreeDemoBgm', 'IsWaitFinish': True})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text001', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'Demo209_0-C00-Link-A-Walk', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'DemoWait'})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 437.4383850097656, 'Pattern1PosY': 251.22706604003906, 'Pattern1PosZ': -2097.307861328125, 'Pattern1AtX': 434.77069091796875, 'Pattern1AtY': 251.10887145996094, 'Pattern1AtZ': -2102.116943359375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.40826416015625, 'Pattern1PosY': 254.57513427734375, 'Pattern1PosZ': -2101.5654296875, 'Pattern1AtX': 430.3573913574219, 'Pattern1AtY': 263.0378723144531, 'Pattern1AtZ': -2119.1171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 420.0})
        } {
            Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
        }

        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 431.8999938964844, 'DestinationY': 249.7100067138672, 'DestinationZ': -2109.199951171875, 'DirectionY': 188.5})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'ASName': 'DemoWait'})
        Weapon_Sword_501.Demo_WarpToPos({'TargetPos': [432.6687927246094, 248.94309997558594, -2102.095947265625], 'IsWaitFinish': True, 'TargetRot': [0.0, 0.0, 0.0]})

        fork {
            Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
        } {
            Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
        } {
            Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text004', 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 431.02587890625, 'Pattern1PosY': 257.1730041503906, 'Pattern1PosZ': -2116.423828125, 'Pattern1AtX': 431.9877624511719, 'Pattern1AtY': 249.75668334960938, 'Pattern1AtZ': -2108.705810546875, 'Pattern1Fovy': 14.999978065490723, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'EffectWater', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.10000000149011612, 'IsWaitFinish': True, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 434.4793701171875, 'Pattern1PosY': 249.74546813964844, 'Pattern1PosZ': -2097.7392578125, 'Pattern1AtX': 433.0109558105469, 'Pattern1AtY': 249.4187774658203, 'Pattern1AtZ': -2101.834716796875, 'Pattern1Fovy': 33.000022888183594, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'ASName': 'Demo209_0-C04-Link-A-0_Wait'})
        } {
            Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-A-0_Loop', 'MorphingFrame': 0.0})
        } {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text002', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'ASName': ''})
        }


        fork {
            Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-B-0', 'IsWaitFinish': True})
            Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-B-0_Loop'})
        } {
            Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-A-1'})
            Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-A-1_Loop'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-C-0', 'IsWaitFinish': True})
                Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-C-0_Loop'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                Weapon_Sword_501.Demo_Bind({'NodeName': 'Weapon_R', 'UniqueName': '', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'IsContinueBind': True, 'ActorName': 'Npc_kokiri005_DLCDemo', 'IsWaitFinish': True})
            }

        } {
            Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-D-0'})
            Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-D-0_Loop'})
        } {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text006', 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0})
        }


        fork {

            fork {
                Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'ASName': 'Demo209_0-C04-UMii_Korogu_M-B-1', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'ASName': 'Demo209_0-C04-UMii_Korogu_M-B-1_Loop', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 146})
                Npc_kokiri004_DLCDemo.Demo_XLinkEventCreate({'ELinkKey': 'Demo209_KorokKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            }

        } {

            fork {
                Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-A-2'})
                Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'ASName': 'Demo209_0-C04-UMii_Korogu_M-A-2_Loop', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            } {
                EventSystemActor[makamaka].Demo_WaitFrame({'Frame': 82, 'IsWaitFinish': True})
                Npc_kokiri005_DLCDemo.Demo_XLinkEventCreate({'ELinkKey': 'Demo209_KorokKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            }

        } {
            EventSystemActor[KorogoC].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 145})
            Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'IsWaitFinish': True, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': -1, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-C-1'})
            Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': -1, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-C-1_Loop', 'IsWaitFinish': False})
        } {
            EventSystemActor[KorogoD].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 138})
            Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'IsWaitFinish': True, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': -1, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-D-1'})
            Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': -1, 'ASName': 'Demo209_0-C04-UMii_Korogu_M-D-1_Loop', 'IsWaitFinish': False})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'Demo209_0-C04-Link-A-0', 'IsWaitFinish': False})
        }

        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

        fork {

            fork {
                Npc_kokiri004_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
            } {
                Npc_kokiri005_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
            } {
                Npc_kokiri006_DLCDemo.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
            } {
                Npc_kokiri012_DLCDemo.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            }

        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text005', 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text003', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': False})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text007', 'IsCloseMessageDialog': True})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'ASName': 'Demo209_0-C05-Link-A-0'})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 434.22613525390625, 'Pattern1PosY': 250.0893096923828, 'Pattern1PosZ': -2106.831298828125, 'Pattern1AtX': 428.4447021484375, 'Pattern1AtY': 255.89654541015625, 'Pattern1AtZ': -2120.27392578125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text009', 'IsCloseMessageDialog': False})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Face_C_Talk', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo209_0:Demo209_0_Text010', 'IsCloseMessageDialog': True})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.917114019393921, 'Pattern1PosY': 1.0484310388565063, 'Pattern1PosZ': 2.122191905975342, 'Pattern1AtX': 0.45501700043678284, 'Pattern1AtY': 1.5486760139465332, 'Pattern1AtZ': -0.3410640060901642, 'Pattern1Fovy': 14.999978065490723, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        }

        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'Demo209_0-C05-Link-A-1', 'IsWaitFinish': False, 'MorphingFrame': 20.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 37})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.461669921875, 'Pattern1PosY': 1.4564510583877563, 'Pattern1PosZ': -1.1163330078125, 'Pattern1AtX': -0.8414919972419739, 'Pattern1AtY': 0.9358670115470886, 'Pattern1AtZ': 0.6760249733924866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})

        fork {
            GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C08-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        }

        EventSystemActor.Demo_FlagOFF({'FlagName': '100enemy_Demo209', 'IsWaitFinish': True})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'DekuTreeDemoBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})

        call 100enemy.EndDekuTalk()

    } else {
        goto Event167
    }
}
