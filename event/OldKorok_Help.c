-------- EventFlow: OldKorok_Help --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_IncreasePorchItem', 'Demo_DisappearNumKorokNuts', 'Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_AppearNumKorokNuts', 'Demo_EnableCameraInput', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_CloseMessageDialog', 'Demo_ExitEventPlayer', 'Demo_OpenItemCategory']
queries: ['HasPorchItem', 'GeneralChoice2', 'GeneralChoice4', 'CheckFlag', 'CheckCurrentMap', 'CheckIsOpenItemCategory', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok_Help
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEquipState', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_ResetBoneCtrl', 'Demo_RideHorse']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_BecomeSpeaker', 'Demo_LookAtObject', 'Demo_ResetBoneCtrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_Wait', 'Demo_WarpToAnchor', 'Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: Self[InitTalk_OldKorok(Self)]
entrypoint: InitTalk_OldKorok(Self)
actions: []
queries: []
params: None

void Ready_Npc_OldKorok_Help_Talk() {

    call InitTalk_OldKorok({'WarpDestMapName': 'H-6', 'WarpDestPosName': 'Quest_OldKorok_Help', 'Self': ActorIdentifier(name="Npc_OldKorok_Help")})

    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk01', 'IsCloseMessageDialog': True})
    if EventSystemActor.GeneralChoice2() {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk11'})
    }
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk14'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2057.89990234375, 'Pattern1PosY': 188.67825317382812, 'Pattern1PosZ': 1421.268798828125, 'Pattern1AtX': 2067.53173828125, 'Pattern1AtY': 190.31924438476562, 'Pattern1AtZ': 1421.01611328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Obj_Maracas'}) {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk01_01', 'IsCloseMessageDialog': False})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk13', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2064.8984375, 'Pattern1PosY': 191.7847137451172, 'Pattern1PosZ': 1411.771728515625, 'Pattern1AtX': 2067.99169921875, 'Pattern1AtY': 189.95272827148438, 'Pattern1AtZ': 1420.8604736328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk15'})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventSystemActor.Demo_AdvanceQuest({'QuestName': 'OldKorok_Help', 'ForceRunTelop': True, 'IsWaitFinish': True, 'StepName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})

        call NextStep_OldKorok_Maracus()

    } else {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk01_01'})
        Npc_OldKorok_Help.Demo_TurnAndLookToObject({'ObjectId': 2, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0, 'TurnPosition': [2127.699951171875, 211.5, 1376.5999755859375], 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'TurnPosition': [2127.699951171875, 211.5, 1376.5999755859375]})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2110.892822265625, 'Pattern1PosY': 217.004150390625, 'Pattern1PosZ': 1374.835205078125, 'Pattern1AtX': 2123.975830078125, 'Pattern1AtY': 216.223876953125, 'Pattern1AtZ': 1377.588623046875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk01_03'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2067.712646484375, 'Pattern1PosY': 192.3228302001953, 'Pattern1PosZ': 1411.3824462890625, 'Pattern1AtX': 2067.99169921875, 'Pattern1AtY': 189.95272827148438, 'Pattern1AtZ': 1420.8604736328125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2064.8984375, 'Pattern1PosY': 191.7847137451172, 'Pattern1PosZ': 1411.771728515625, 'Pattern1AtX': 2067.99169921875, 'Pattern1AtY': 189.95272827148438, 'Pattern1AtZ': 1420.8604736328125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_OldKorok_Help.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_OldKorok_Help', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk01_02', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_Activated'})
    }
}

void SubFlowWeapon() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk10', 'IsCloseMessageDialog': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon01'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -2})
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -1})
    }
    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_Kakariko', 'EndFade': 0})
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'WeaponPorchStockNum'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon01'}) {

        call Npc_OldKorok.OpenPouchAddStock({'Type': 0, 'Xman': ActorIdentifier(name="Npc_OldKorok_Help"), 'GetStockFlagName': 'Npc_OldKorok_Weapon02'})

    } else {

        call Npc_OldKorok.OpenPouchAddStock({'Type': 0, 'GetStockFlagName': 'Npc_OldKorok_Weapon01', 'Xman': ActorIdentifier(name="Npc_OldKorok_Help")})

    }
    Npc_OldKorok_Help.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Wait', 'MorphingFrame': -1.0})
    Fader.Demo_FadeOut({'Frame': 2, 'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk11_1', 'ASName': 'Talk'})
    Event284:
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2057.89990234375, 'Pattern1PosY': 188.67825317382812, 'Pattern1PosZ': 1421.268798828125, 'Pattern1AtX': 2067.53173828125, 'Pattern1AtY': 190.31924438476562, 'Pattern1AtZ': 1421.01611328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_FirstPorch'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_SecondPorch'})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk06', 'IsCloseMessageDialog': True})
        Event379:
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Finish'}) {
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_Finish'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_FirstPorch'})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk16', 'IsCloseMessageDialog': False})
            Event424:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if !EventSystemActor.CheckIsOpenItemCategory({'Category': 0}) {
                    Event436:

                    call NutsCK_Weapon()

                } else {
                    EventSystemActor.Demo_OpenItemCategory({'Category': 0, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    goto Event436
                }
              case 1:
                if !EventSystemActor.CheckIsOpenItemCategory({'Category': 1}) {
                    Event437:

                    call NutsCK_Bow()

                } else {
                    EventSystemActor.Demo_OpenItemCategory({'IsWaitFinish': True, 'Category': 1})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    goto Event437
                }
              case 2:
                if !EventSystemActor.CheckIsOpenItemCategory({'Category': 2}) {
                    Event438:

                    call NutsCK_Shield()

                } else {
                    EventSystemActor.Demo_OpenItemCategory({'IsWaitFinish': True, 'Category': 2})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    goto Event438
                }
              case 3:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk18', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                goto Event379
            }
        } else {
            Event413:
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk17', 'IsCloseMessageDialog': False})
            goto Event379
        }
    }
}

void SubFlowBow() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk10', 'IsCloseMessageDialog': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow01'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -2})
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -1})
    }
    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_Kakariko', 'EndFade': 0})
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'BowPorchStockNum'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow01'}) {

        call Npc_OldKorok.OpenPouchAddStock({'Type': 1, 'GetStockFlagName': 'Npc_OldKorok_Bow02', 'Xman': ActorIdentifier(name="Npc_OldKorok_Help")})

    } else {

        call Npc_OldKorok.OpenPouchAddStock({'Type': 1, 'GetStockFlagName': 'Npc_OldKorok_Bow01', 'Xman': ActorIdentifier(name="Npc_OldKorok_Help")})

    }
    Npc_OldKorok_Help.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Wait', 'MorphingFrame': -1.0})
    Fader.Demo_FadeOut({'Frame': 2, 'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk11_2', 'ASName': 'Talk'})
    goto Event284
}

void SubFlowShield() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk10', 'IsCloseMessageDialog': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield01'}) {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -2})
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Obj_KorokNuts', 'Value': -1})
    }
    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_Kakariko', 'EndFade': 0})
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'ShieldPorchStockNum'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield01'}) {

        call Npc_OldKorok.OpenPouchAddStock({'GetStockFlagName': 'Npc_OldKorok_Shield02', 'Xman': ActorIdentifier(name="Npc_OldKorok_Help"), 'Type': 2})

    } else {

        call Npc_OldKorok.OpenPouchAddStock({'Type': 2, 'GetStockFlagName': 'Npc_OldKorok_Shield01', 'Xman': ActorIdentifier(name="Npc_OldKorok_Help")})

    }
    Npc_OldKorok_Help.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
    Fader.Demo_FadeOut({'Frame': 2, 'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk11_3', 'ASName': 'Talk'})
    goto Event284
}

void Ready_Npc_OldKorok_Help_Near() {
    Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near01', 'DispFrame': 300, 'IsChecked': True})
}

void Maracus_Npc_OldKorok_Help_Talk() {

    call InitTalk_OldKorok({'WarpDestMapName': 'H-6', 'WarpDestPosName': 'Quest_OldKorok_Help', 'Self': ActorIdentifier(name="Npc_OldKorok_Help")})

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Obj_Maracas'}) {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk03', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Event109:
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        Npc_OldKorok_Help.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
        EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'IsWaitFinish': True, 'PorchItemName': 'Obj_Maracas'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_Maracus'})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2057.89990234375, 'Pattern1PosY': 188.67825317382812, 'Pattern1PosZ': 1421.268798828125, 'Pattern1AtX': 2067.53173828125, 'Pattern1AtY': 190.31924438476562, 'Pattern1AtZ': 1421.01611328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk04'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2064.8984375, 'Pattern1PosY': 191.7847137451172, 'Pattern1PosZ': 1411.771728515625, 'Pattern1AtX': 2067.99169921875, 'Pattern1AtY': 189.95272827148438, 'Pattern1AtZ': 1420.8604736328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk04_01'})
    } else {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk02'})
    }
}

void Maracus_Npc_OldKorok_Help_Near() {
    Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near02', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_Npc_OldKorok_Help_Talk() {

    call InitTalk_OldKorok({'WarpDestMapName': 'H-6', 'WarpDestPosName': 'Quest_OldKorok_Help', 'Self': ActorIdentifier(name="Npc_OldKorok_Help")})

    EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_KorokFruit'}) {
        Event155:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_snif'}) {
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk05_01'})
                Event158:
                if !EventSystemActor.GeneralChoice2() {

                    call AgeAction()

                    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk09'})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        if !EventSystemActor.CheckIsOpenItemCategory({'Category': 0}) {
                            Event160:

                            call SubFlowWeapon()

                        } else {
                            EventSystemActor.Demo_OpenItemCategory({'Category': 0, 'IsWaitFinish': True})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                            goto Event160
                        }
                      case 1:
                        if !EventSystemActor.CheckIsOpenItemCategory({'Category': 1}) {
                            Event162:

                            call SubFlowBow()

                        } else {
                            EventSystemActor.Demo_OpenItemCategory({'IsWaitFinish': True, 'Category': 1})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                            goto Event162
                        }
                      case 2:
                        if !EventSystemActor.CheckIsOpenItemCategory({'Category': 2}) {
                            Event163:

                            call SubFlowShield()

                        } else {
                            EventSystemActor.Demo_OpenItemCategory({'IsWaitFinish': True, 'Category': 2})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                            goto Event163
                        }
                      case 3:
                        Event161:
                        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk07'})
                        EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                    }
                } else {
                    goto Event161
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_snif'})
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk05'})
                goto Event158
            }
        } else {
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk12'})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
        }
    } else {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk08'})
        EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Help_KorokFruit', 'IsWaitFinish': True})
        goto Event155
    }
}

void Finish_Npc_OldKorok_Help_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
        Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near03', 'DispFrame': 300, 'IsChecked': True})
    } else {
        Event11:
        Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near03', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Maracus_Npc_OldKorok_Help_OldKorok_Help_KorokFruit_Near() {
    goto Event11
}

void Maracus_Npc_OldKorok_Help_StepStart() {
    Event179:
    Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near04', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_Npc_OldKorok_Help_StepStart() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
        Npc_OldKorok_Help.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OldKorok_Help:Near04', 'IsChecked': True, 'DispFrame': 300})
    } else {
        goto Event179
    }
}

void InitTalk_OldKorok() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    Starter.Demo_BecomeSpeaker({'IsWaitFinish': True})

    fork {
        if EventSystemActor.CheckPlayerRideHorse() {
            LastRiddenHorse_ForEvent.Demo_Wait({'IsWaitFinish': False, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': True, 'IsNoMorph': True})
            GameROMPlayer.Demo_RideHorse({'IsWaitFinish': False, 'Horse': ActorIdentifier(name="LastRiddenHorse_ForEvent")})

            fork {
                GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk'})
            } {
                if EventSystemActor.CheckCurrentMap({'MapName': 'F-5'}) {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'AnchorName': 'StartPos', 'UniqueName': 'OldKorok_WetlandsStable'})
                } else
                if EventSystemActor.CheckCurrentMap({'MapName': 'G-3'}) {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'AnchorName': 'StartPos', 'UniqueName': 'OldKorok_ForestStable'})
                } else
                if EventSystemActor.CheckCurrentMap({'MapName': 'F-6'}) {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'AnchorName': 'StartPos', 'UniqueName': 'OldKorok_RiversideStable'})
                } else
                if EventSystemActor.CheckCurrentMap({'MapName': 'F-2'}) {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'AnchorName': 'StartPos', 'UniqueName': 'OldKorokTalk'})
                } else {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'AnchorName': 'StartPos', 'UniqueName': 'Quest_OldKorok_Help'})
                }
            }

        } else {
            LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayASAdapt({'MorphingFrame': 0.0, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Talk', 'ClothWarpMode': 1})
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'WarpDestMapName', 'WarpDestPosName': 'WarpDestPosName'})
        }
    } {
        Starter.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        if EventSystemActor.CheckCurrentMap({'MapName': 'F-5'}) {
            if EventSystemActor.CheckPlayerRideHorse() {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 873.2200317382812, 'Pattern1PosY': 134.42300415039062, 'Pattern1PosZ': 197.9176483154297, 'Pattern1AtX': 869.9359130859375, 'Pattern1AtY': 133.8286590576172, 'Pattern1AtZ': 202.52662658691406, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            } else {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 871.8618774414062, 'Pattern1PosY': 133.0048065185547, 'Pattern1PosZ': 197.2057647705078, 'Pattern1AtX': 869.9359130859375, 'Pattern1AtY': 133.6060028076172, 'Pattern1AtZ': 202.52662658691406, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            }
        } else
        if EventSystemActor.CheckCurrentMap({'MapName': 'G-3'}) {
            if EventSystemActor.CheckPlayerRideHorse() {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1056.5120849609375, 'Pattern1PosY': 130.17068481445312, 'Pattern1PosZ': -1106.755126953125, 'Pattern1AtX': 1059.073486328125, 'Pattern1AtY': 130.59579467773438, 'Pattern1AtZ': -1104.1058349609375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            } else {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1057.2694091796875, 'Pattern1PosY': 129.26983642578125, 'Pattern1PosZ': -1107.0770263671875, 'Pattern1AtX': 1059.0958251953125, 'Pattern1AtY': 129.97705078125, 'Pattern1AtZ': -1104.311767578125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            }
        } else
        if EventSystemActor.CheckCurrentMap({'MapName': 'F-6'}) {
            if EventSystemActor.CheckPlayerRideHorse() {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 381.5234375, 'Pattern1PosY': 124.4677734375, 'Pattern1PosZ': 1037.630615234375, 'Pattern1AtX': 386.9939270019531, 'Pattern1AtY': 124.31391143798828, 'Pattern1AtZ': 1037.2203369140625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            } else {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 382.43255615234375, 'Pattern1PosY': 122.7572021484375, 'Pattern1PosZ': 1036.00146484375, 'Pattern1AtX': 386.9939270019531, 'Pattern1AtY': 123.64102172851562, 'Pattern1AtZ': 1037.2203369140625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            }
        } else
        if EventSystemActor.CheckCurrentMap({'MapName': 'F-2'}) {
            if EventSystemActor.CheckPlayerRideHorse() {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 463.4387512207031, 'Pattern1PosY': 251.75062561035156, 'Pattern1PosZ': -2106.995849609375, 'Pattern1AtX': 464.074951171875, 'Pattern1AtY': 252.1884002685547, 'Pattern1AtZ': -2110.45703125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            } else {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 462.43804931640625, 'Pattern1PosY': 250.7890167236328, 'Pattern1PosZ': -2107.362548828125, 'Pattern1AtX': 464.074951171875, 'Pattern1AtY': 251.35585021972656, 'Pattern1AtZ': -2110.45703125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            }
        } else
        if EventSystemActor.CheckPlayerRideHorse() {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.412169933319092, 'Pattern1PosY': 2.1528470516204834, 'Pattern1PosZ': 6.867919921875, 'Pattern1AtX': 0.21160900592803955, 'Pattern1AtY': 2.6527860164642334, 'Pattern1AtZ': 1.342041015625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_OldKorok_Help', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2064.34326171875, 'Pattern1PosY': 189.1691131591797, 'Pattern1PosZ': 1418.918701171875, 'Pattern1AtX': 2068.912109375, 'Pattern1AtY': 190.1861114501953, 'Pattern1AtZ': 1421.064453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        }
    }


    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Starter.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    }

}

void NextStep_OldKorok_Maracus() {
    goto Event109
}

void AfterQuest() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
        EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk19', 'IsCloseMessageDialog': False})
        goto Event424
    } else {
        goto Event413
    }
}

void NutsCK_Weapon() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon01'}) {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})
        if !EventSystemActor.GeneralChoice2() {

            call AgeAction()

            if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 2}) {
                Event387:

                call SubFlowWeapon()

            } else {
                Event391:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk85'})

                call AfterCK()

            }
        } else {
            Event451:
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk07'})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OldKorok_Help_Finish'})
        }
    } else {
        goto Event387
    }
}

void AfterCK() {
    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OldKorok_Help:Talk20', 'IsCloseMessageDialog': False})
    goto Event424
}

void NutsCK_Bow() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow01'}) {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})
        if !EventSystemActor.GeneralChoice2() {

            call AgeAction()

            if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 2}) {
                Event398:

                call SubFlowBow()

            } else {
                goto Event391
            }
        } else {
            goto Event451
        }
    } else {
        goto Event398
    }
}

void NutsCK_Shield() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield01'}) {
        Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})
        if !EventSystemActor.GeneralChoice2() {

            call AgeAction()

            if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 2}) {
                Event404:

                call SubFlowShield()

            } else {
                goto Event391
            }
        } else {
            goto Event451
        }
    } else {
        goto Event404
    }
}

void AgeAction() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}
