-------- EventFlow: Npc_DressFairy_03 --------

Actor: Npc_DressFairy_03
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ArmorProcessing', 'Demo_ManufactItem', 'Demo_TalkNoMessageStepper', 'Demo_PlayASForDemo', 'Demo_CloseArmorProcessing', 'Demo_OpenMessageDialogTrig', 'Demo_OpenMessageDialog', 'Demo_TrigNullASPlay']
queries: ['CheckHasManifactureArmor']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckManufactResult', 'CheckGameDataInt', 'CheckPlayerState', 'HasPouchItemByPouchCategory', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayASAdapt', 'Demo_ResetBoneCtrl']
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
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy4_Appear'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.9277340173721313, 'Pattern1PosY': 5.634582996368408, 'Pattern1PosZ': 6.274199962615967, 'Pattern1AtX': -3.296143054962158, 'Pattern1AtY': 2.189301013946533, 'Pattern1AtZ': 3.565764904022217, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_D_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_03'})
    EventSystemActor[Faily].Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
    EventSystemActor[Fairy].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'InstanceName': '', 'ActorName': 'Npc_DressFairy_03'})

    fork {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_03', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
    } {
        Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_ReAppearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

        call TeraCough()

        Npc_DressFairy_03.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Talk', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
        Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk00', 'ASName': 'Talk'})
    } {
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

        call TeraHi()

        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 6})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Count': 1, 'Power': 0.05000000074505806, 'Pattern': 2})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.638916015625, 'Pattern1PosY': 3.350677013397217, 'Pattern1PosZ': 8.82708740234375, 'Pattern1AtX': -0.10449200123548508, 'Pattern1AtY': 5.462769031524658, 'Pattern1AtZ': 3.821197986602783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'MotionMode': 0, 'Count': 0.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'ActorName1': 'TwnObj_FairySpring_D_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Count': 1, 'Pattern': 1, 'Power': 0.30000001192092896})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Power': 0.5, 'Pattern': 4, 'Count': 2})
        EventControllerRumble.Demo_RumbleMiddle({'Count': 3, 'IsWaitFinish': False})
    }

    Event239:
    if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
        if Npc_DressFairy_03.CheckHasManifactureArmor() {
            Event126:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {
                Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk13'})
                Event31:
                if !EventSystemActor.GeneralChoice2() {
                    Event56:
                    Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk08'})
                    Event61:
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {

                        call TeraSelectCloth({'ArmorProcessingRank': 2})

                        Event82:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk04'})
                            Npc_DressFairy_03.Demo_CloseArmorProcessing({'IsWaitFinish': True})
                            Npc_DressFairy_03.Demo_ManufactItem({'IsWaitFinish': True})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo029_0', 'EntryPointName': 'Fairy_03', 'EndFade': 0})
                            if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy_Rank1_Talk'}) {
                                Event203:

                                call TeraFinished()

                                Event236:
                                if Npc_DressFairy_03.CheckHasManifactureArmor() {
                                    Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk06'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event56
                                    } else
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk02'})
                                        Event255:
                                        EventSystemActor.Demo_FlagOFF({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})

                                        call ExitDressFairy_03()

                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy4_AllRevival'}) {

                                        call TeraBye()

                                    } else {
                                        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk05'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy4_AllRevival'})
                                        goto Event255
                                    }
                                } else {
                                    Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk54'})
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk57'})
                                    } else {
                                        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk58'})
                                    }
                                    goto Event255
                                }
                            } else
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 2}) {
                                Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk59'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})
                                goto Event236
                            } else {
                                goto Event203
                            }
                        } else {

                            call TeraRechoice()

                            goto Event61
                        }
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {

                        call TeraSelectCloth({'ArmorProcessingRank': 3})

                        goto Event82
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {

                        call TeraSelectCloth({'ArmorProcessingRank': 4})

                        goto Event82
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) {

                        call TeraSelectCloth({'ArmorProcessingRank': 5})

                        goto Event82
                    }
                } else {
                    Event32:
                    Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk01'})
                    Event124:

                    call ExitDressFairy_03()

                }
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {
                Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk14'})
                goto Event31
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {
                Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk15'})
                goto Event31
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) in [1, 0] {
                Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk16'})
                goto Event31
            }
        } else
        if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 1, 'Category': 4}) {
            Event234:
            Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk53'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk55'})
                goto Event61
            } else {

                call TeraBye()

            }
        } else {
            Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk56'})
            goto Event124
        }
    } else
    if Npc_DressFairy_03.CheckHasManifactureArmor() {
        goto Event126
    } else {
        goto Event234
    }
}

void DressFairyTalk_First() {

    fork {
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk41', 'ASName': 'Act_Cough', 'IsBecomingSpeaker': False})
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Revival00', 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_DressFairy_03', 'IsValid': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'NoErrorCheck': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Revival00_1'})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'GreaterThanOrEqualTo', 'Value': 2}) {
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Revival00_2', 'IsCloseMessageDialog': False})
    } else {
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Revival00_3', 'IsCloseMessageDialog': False})
    }
    Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Revival00_4'})
    goto Event239
}

void ExitDressFairy_03() {
    Npc_DressFairy_03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk09'})

    fork {
        Npc_DressFairy_03.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_Spring_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor[Fairy02].Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor[Fairy02].Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    } {
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 7.492432117462158, 'Pattern1PosY': 18.866363525390625, 'Pattern1PosZ': 13.298065185546875, 'Pattern1AtX': 4.102294921875, 'Pattern1AtY': 13.24481201171875, 'Pattern1AtZ': 7.239044189453125, 'Pattern1Fovy': 39.599979400634766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ActorName1': 'TwnObj_FairySpring_D_01'})

        call TeraBack()

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 0.10000000149011612})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GreatFairy4_Appear'})
    EventSystemActor[Fairy02].Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void TeraHi() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk17', 'CloseDialogOption': 1})
      case 1:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk18', 'CloseDialogOption': 1})
      case 2:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk19', 'CloseDialogOption': 1})
      case 3:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk20', 'CloseDialogOption': 1})
    }
}

void TeraBye() {
    goto Event32
}

void TeraSelectCloth() {
    Event151:
    Npc_DressFairy_03.Demo_ArmorProcessing({'IsWaitFinish': True, 'ArmorProcessingRank': 'ArmorProcessingRank'})
    switch EventSystemActor.CheckManufactResult() {
      case 0:
        switch EventSystemActor[Fairy02].RandomChoice4() {
          case 0:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk25', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 1:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk26', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 2:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk27', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
          case 3:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk28', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        }
      case 1:
        switch EventSystemActor[Fairy02].RandomChoice4() {
          case 0:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk29'})
            goto Event151
          case 1:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk30'})
            goto Event151
          case 2:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk31'})
            goto Event151
          case 3:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk32'})
            goto Event151
        }
      case 2:
        switch EventSystemActor[Fairy02].RandomChoice4() {
          case 0:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk33'})
            goto Event151
          case 1:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk34'})
            goto Event151
          case 2:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk35'})
            goto Event151
          case 3:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk36'})
            goto Event151
        }
      case 3:
        switch EventSystemActor[Fairy02].RandomChoice4() {
          case 0:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk37'})
            goto Event151
          case 1:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk38'})
            goto Event151
          case 2:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk39'})
            goto Event151
          case 3:
            Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk40'})
            goto Event151
        }
      case 6:

        call TeraBye()

    }
}

void TeraCough() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk41', 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        Event215:
        switch EventSystemActor[Fairy02].RandomChoice4() {
          case 0:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk10'})
          case 1:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk11'})
          case 2:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk12'})
          case 3:
            Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk07'})
        }
      case 1:
        Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk42', 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event215
      case 2:
        Npc_DressFairy_03.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk43', 'IsCloseMessageDialog': False, 'ASName': 'Act_Cough', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event215
    }
}

void TeraRechoice() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk45'})
      case 1:
        Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk46'})
      case 2:
        Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk47'})
      case 3:
        Npc_DressFairy_03.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk48'})
    }
}

void TeraFinished() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk49', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 1:
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk50', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk52', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        Npc_DressFairy_03.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk51', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void TeraBack() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk21', 'CloseDialogOption': 1})
        Event263:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
      case 1:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk22', 'CloseDialogOption': 1})
        goto Event263
      case 2:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk23', 'CloseDialogOption': 1})
        goto Event263
      case 3:
        Npc_DressFairy_03.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk24', 'CloseDialogOption': 1})
        goto Event263
    }
}
