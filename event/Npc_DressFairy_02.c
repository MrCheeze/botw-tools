-------- EventFlow: Npc_DressFairy_02 --------

Actor: Npc_DressFairy_02
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ArmorProcessing', 'Demo_ManufactItem', 'Demo_TalkNoMessageStepper', 'Demo_PlayASForDemo', 'Demo_CloseArmorProcessing', 'Demo_OpenMessageDialogTrig']
queries: ['CheckHasManifactureArmor']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckManufactResult', 'CheckGameDataInt', 'RandomChoice4', 'CheckPlayerState', 'HasPouchItemByPouchCategory', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Fairy01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Fairy02]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Faily]
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Fairy]
entrypoint: None()
actions: ['Demo_ChkExistenceOfParticipant']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void DressFairyTalk() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy3_Appear'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.9277340173721313, 'Pattern1PosY': 5.634582996368408, 'Pattern1PosZ': 6.274199962615967, 'Pattern1AtX': -3.296143054962158, 'Pattern1AtY': 2.189301013946533, 'Pattern1AtZ': 3.565764904022217, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_B_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_02'})
    EventSystemActor[Faily].Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
    EventSystemActor[Fairy].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'InstanceName': '', 'ActorName': 'Npc_DressFairy_02'})

    fork {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_02', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
    } {
        Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_ReAppearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk00'})
    } {
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

        call SiizaHi()

        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 6})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Count': 1, 'Power': 0.05000000074505806, 'Pattern': 2})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.638916015625, 'Pattern1PosY': 3.350677013397217, 'Pattern1PosZ': 8.82708740234375, 'Pattern1AtX': -0.10449200123548508, 'Pattern1AtY': 5.462769031524658, 'Pattern1AtZ': 3.821197986602783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'MotionMode': 0, 'Count': 0.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'ActorName1': 'TwnObj_FairySpring_B_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Count': 1, 'Pattern': 1, 'Power': 0.30000001192092896})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Power': 0.5, 'Pattern': 4, 'Count': 2})
        EventControllerRumble.Demo_RumbleMiddle({'Count': 3, 'IsWaitFinish': False})
    }

    Event221:
    if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
        if Npc_DressFairy_02.CheckHasManifactureArmor() {
            Event126:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {
                Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk12'})
                Event31:
                if !EventSystemActor.GeneralChoice2() {
                    Event56:
                    Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk08'})
                    Event153:
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 1}) {

                        call SiizaSelectCloth({'ArmorProcessingRank': 2})

                        Event82:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk17'})
                            Npc_DressFairy_02.Demo_CloseArmorProcessing({'IsWaitFinish': True})
                            Npc_DressFairy_02.Demo_ManufactItem({'IsWaitFinish': True})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo029_0', 'EntryPointName': 'Fairy_02', 'EndFade': 0})
                            if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy_Rank1_Talk'}) {
                                Event234:
                                Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk06'})
                                Event219:
                                if Npc_DressFairy_02.CheckHasManifactureArmor() {
                                    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk46'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event56
                                    } else
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk02'})
                                        Event239:
                                        EventSystemActor.Demo_FlagOFF({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})

                                        call ExitDressFairy_02()

                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy3_AllRevival'}) {

                                        call SiizaBye()

                                    } else {
                                        Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk16'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy3_AllRevival'})
                                        goto Event239
                                    }
                                } else {
                                    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk43'})
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk44'})
                                    } else {
                                        Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk45'})
                                    }
                                    goto Event239
                                }
                            } else
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 2}) {
                                Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk50'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})
                                goto Event219
                            } else {
                                goto Event234
                            }
                        } else {

                            call SiizaRechoice()

                            goto Event153
                        }
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {

                        call SiizaSelectCloth({'ArmorProcessingRank': 3})

                        goto Event82
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {

                        call SiizaSelectCloth({'ArmorProcessingRank': 4})

                        goto Event82
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) {

                        call SiizaSelectCloth({'ArmorProcessingRank': 5})

                        goto Event82
                    }
                } else {
                    Event32:
                    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk01'})
                    Event123:

                    call ExitDressFairy_02()

                }
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {
                Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk13'})
                goto Event31
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {
                Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk14'})
                goto Event31
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) in [1, 0] {
                Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk15'})
                goto Event31
            }
        } else
        if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 1, 'Category': 4}) {
            Event217:
            Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk42'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk10'})
                goto Event153
            } else {

                call SiizaBye()

            }
        } else {
            Npc_DressFairy_02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk11'})
            goto Event123
        }
    } else
    if Npc_DressFairy_02.CheckHasManifactureArmor() {
        goto Event126
    } else {
        goto Event217
    }
}

void DressFairyTalk_First() {

    fork {
        Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Revival00', 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_DressFairy_02', 'IsValid': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'NoErrorCheck': False, 'ASName': 'Talk'})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingS', 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -2, 'MorphingFrame': 15.0, 'NoErrorCheck': False})
    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Revival00_1', 'IsCloseMessageDialog': True})
    EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Revival00_2'})
    goto Event221
}

void ExitDressFairy_02() {
    Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk09'})

    fork {
        Npc_DressFairy_02.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_Spring_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor[Fairy02].Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor[Fairy02].Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    } {
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 7.492432117462158, 'Pattern1PosY': 18.866363525390625, 'Pattern1PosZ': 13.298065185546875, 'Pattern1AtX': 4.102294921875, 'Pattern1AtY': 13.24481201171875, 'Pattern1AtZ': 7.239044189453125, 'Pattern1Fovy': 39.599979400634766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ActorName1': 'TwnObj_FairySpring_B_01'})

        call SizaFarewell()

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 0.10000000149011612})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GreatFairy3_Appear'})
    EventSystemActor[Fairy02].Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void SiizaSelectCloth() {
    Event142:
    Npc_DressFairy_02.Demo_ArmorProcessing({'IsWaitFinish': True, 'ArmorProcessingRank': 'ArmorProcessingRank'})
    switch EventSystemActor.CheckManufactResult() {
      case 0:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk18'})
          case 1:
            Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk19'})
          case 2:
            Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk20'})
          case 3:
            Npc_DressFairy_02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk21'})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk22'})
            goto Event142
          case 1:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk23'})
            goto Event142
          case 2:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk24'})
            goto Event142
          case 3:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk25'})
            goto Event142
        }
      case 2:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk26'})
            goto Event142
          case 1:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk27'})
            goto Event142
          case 2:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk28'})
            goto Event142
          case 3:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk29'})
            goto Event142
        }
      case 3:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk30'})
            goto Event142
          case 1:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk31'})
            goto Event142
          case 2:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk32'})
            goto Event142
          case 3:
            Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk33'})
            goto Event142
        }
      case 6:

        call SiizaBye()

    }
}

void SiizaBye() {
    goto Event32
}

void SiizaHi() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk34', 'CloseDialogOption': 1})
      case 1:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk35', 'CloseDialogOption': 1})
      case 2:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk36', 'CloseDialogOption': 1})
      case 3:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk37', 'CloseDialogOption': 1})
    }
}

void SiizaRechoice() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk38'})
      case 1:
        Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk39'})
      case 2:
        Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk40'})
      case 3:
        Npc_DressFairy_02.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk41'})
    }
}

void SizaFarewell() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk47', 'CloseDialogOption': 1})
        Event252:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
      case 1:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk48', 'CloseDialogOption': 1})
        goto Event252
      case 2:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk51', 'CloseDialogOption': 1})
        goto Event252
      case 3:
        Npc_DressFairy_02.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_02:Talk49', 'CloseDialogOption': 1})
        goto Event252
    }
}
