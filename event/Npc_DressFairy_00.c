-------- EventFlow: Npc_DressFairy_00 --------

Actor: Npc_DressFairy_00
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ArmorProcessing', 'Demo_ManufactItem', 'Demo_TalkNoMessageStepper', 'Demo_PlayASForDemo', 'Demo_CloseArmorProcessing', 'Demo_OpenMessageDialogTrig']
queries: ['CheckHasManifactureArmor']
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4, 'IsGrounding': True}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_CallDemo', 'Demo_ExitEventPlayer']
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
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Faily]
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
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

Actor: EventSystemActor[Fairy02]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['RandomChoice4']
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
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy1_Appear'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.9277340173721313, 'Pattern1PosY': 5.634582996368408, 'Pattern1PosZ': 6.274199962615967, 'Pattern1AtX': -3.296143054962158, 'Pattern1AtY': 2.189301013946533, 'Pattern1AtZ': 3.565764904022217, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_A_01', 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_DressFairy_00', 'ObjectId': 0})
    EventSystemActor[Faily].Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
    EventSystemActor[Fairy].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'InstanceName': '', 'ActorName': 'Npc_DressFairy_00'})

    fork {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_00', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
    } {
        Npc_DressFairy_00.Demo_PlayASForDemo({'ASName': 'Act_ReAppearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ClothWarpMode': -2})
        Npc_DressFairy_00.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk00', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False})
    } {
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

        call KuchuraHi()

        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 6})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Count': 1, 'Power': 0.05000000074505806, 'Pattern': 2})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.638916015625, 'Pattern1PosY': 3.350677013397217, 'Pattern1PosZ': 8.82708740234375, 'Pattern1AtX': -0.10449200123548508, 'Pattern1AtY': 5.462769031524658, 'Pattern1AtZ': 3.821197986602783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'MotionMode': 0, 'Count': 0.0, 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'ActorName1': 'TwnObj_FairySpring_A_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Count': 1, 'Pattern': 1, 'Power': 0.30000001192092896})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Power': 0.5, 'Pattern': 4, 'Count': 2})
        EventControllerRumble.Demo_RumbleMiddle({'Count': 3, 'IsWaitFinish': False})
    }

    Event258:
    if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
        if Npc_DressFairy_00.CheckHasManifactureArmor() {
            Event158:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {
                Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk12'})
                Event10:
                if !EventSystemActor.GeneralChoice2() {
                    Event57:
                    Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk08'})
                    Event65:
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) {

                        call KuchuraSelectCloth({'ArmorProcessingRank': 2})

                        Event86:
                        if !EventSystemActor.GeneralChoice2() {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            Npc_DressFairy_00.Demo_CloseArmorProcessing({'IsWaitFinish': True})
                            Npc_DressFairy_00.Demo_ManufactItem({'IsWaitFinish': True})
                            Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk17', 'IsCloseMessageDialog': True})
                            EventSystemActor.Demo_CallDemo({'EntryPointName': 'Fairy_00', 'IsWaitFinish': True, 'DemoName': 'Demo029_0', 'EndFade': 0})
                            if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy_Rank1_Talk'}) {
                                Event251:
                                Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk04'})
                                Event250:
                                if Npc_DressFairy_00.CheckHasManifactureArmor() {
                                    Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk05'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event57
                                    } else
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk02', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                        Event269:
                                        EventSystemActor.Demo_FlagOFF({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})

                                        call ExitDressFairy_00()

                                    } else
                                    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy1_AllRevival'}) {

                                        call KuchuraBye()

                                    } else {
                                        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk16', 'IsCloseMessageDialog': False})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy1_AllRevival'})
                                        goto Event269
                                    }
                                } else {
                                    Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk07'})
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
                                        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk48'})
                                    } else {
                                        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk49'})
                                    }
                                    goto Event269
                                }
                            } else
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'GreatFairy_ArmorRank', 'Operator': 'Equal', 'Value': 2}) {
                                Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk50'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'GreatFairy_Rank1_Talk', 'IsWaitFinish': True})
                                goto Event250
                            } else {
                                goto Event251
                            }
                        } else {

                            call KuchuraRechoice()

                            goto Event65
                        }
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {

                        call KuchuraSelectCloth({'ArmorProcessingRank': 3})

                        goto Event86
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {

                        call KuchuraSelectCloth({'ArmorProcessingRank': 4})

                        goto Event86
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) {

                        call KuchuraSelectCloth({'ArmorProcessingRank': 5})

                        goto Event86
                    }
                } else {
                    Event11:
                    Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk01', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    Event156:

                    call ExitDressFairy_00()

                }
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 2}) {
                Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk13'})
                goto Event10
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Operator': 'Equal', 'Value': 3}) {
                Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk14'})
                goto Event10
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 4, 'Operator': 'GreaterThanOrEqualTo'}) in [1, 0] {
                Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk15'})
                goto Event10
            }
        } else
        if !EventSystemActor.HasPouchItemByPouchCategory({'Count': 1, 'Category': 4}) {
            Event247:
            Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk47', 'IsWaitFinish': True})
            if !EventSystemActor.GeneralChoice2() {
                Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk10'})
                goto Event65
            } else {

                call KuchuraBye()

            }
        } else {
            Npc_DressFairy_00.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk11'})
            goto Event156
        }
    } else
    if Npc_DressFairy_00.CheckHasManifactureArmor() {
        goto Event158
    } else {
        goto Event247
    }
}

void DressFairyTalk_First() {

    fork {
        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Revival01'})
        Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Revival02', 'IsCloseMessageDialog': True})
        EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_DressFairy_00', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'NoErrorCheck': False})
    }

    Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Revival03', 'IsCloseMessageDialog': True})
    EventSystemActor[Fairy01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    goto Event258
}

void ExitDressFairy_00() {
    Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk18'})

    fork {
        Npc_DressFairy_00.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_Spring_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
        EventSystemActor[Fairy02].Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor[Fairy02].Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    } {
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 7.492432117462158, 'Pattern1PosY': 18.866363525390625, 'Pattern1PosZ': 13.298065185546875, 'Pattern1AtX': 4.102294921875, 'Pattern1AtY': 13.24481201171875, 'Pattern1AtZ': 7.239044189453125, 'Pattern1Fovy': 39.599979400634766, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

        call KuchuraFarewell()

    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 0.10000000149011612})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GreatFairy1_Appear'})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void KuchuraHi() {
    switch EventSystemActor[Fairy01].RandomChoice4() {
      case 0:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk19', 'CloseDialogOption': 1})
      case 1:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk20', 'CloseDialogOption': 1})
      case 2:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk21', 'CloseDialogOption': 1})
      case 3:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk22', 'CloseDialogOption': 1})
    }
}

void KuchuraBye() {
    goto Event11
}

void KuchuraSelectCloth() {
    Event72:
    Npc_DressFairy_00.Demo_ArmorProcessing({'IsWaitFinish': True, 'ArmorProcessingRank': 'ArmorProcessingRank'})
    switch EventSystemActor.CheckManufactResult() {
      case 0:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk27'})
          case 1:
            Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk28'})
          case 2:
            Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk29'})
          case 3:
            Npc_DressFairy_00.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk30'})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk31'})
            goto Event72
          case 1:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk32'})
            goto Event72
          case 2:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk33'})
            goto Event72
          case 3:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk34'})
            goto Event72
        }
      case 2:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk35'})
            goto Event72
          case 1:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk36'})
            goto Event72
          case 2:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk37'})
            goto Event72
          case 3:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk38'})
            goto Event72
        }
      case 3:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk39'})
            goto Event72
          case 1:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk40'})
            goto Event72
          case 2:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk41'})
            goto Event72
          case 3:
            Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk42'})
            goto Event72
        }
      case 6:

        call KuchuraBye()

    }
}

void KuchuraFarewell() {
    switch EventSystemActor[Fairy02].RandomChoice4() {
      case 0:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk23', 'CloseDialogOption': 1})
        Event278:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
      case 1:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk24', 'CloseDialogOption': 1})
        goto Event278
      case 2:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk25', 'CloseDialogOption': 1})
        goto Event278
      case 3:
        Npc_DressFairy_00.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk26', 'CloseDialogOption': 1})
        goto Event278
    }
}

void KuchuraRechoice() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk43'})
      case 1:
        Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk44'})
      case 2:
        Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk45'})
      case 3:
        Npc_DressFairy_00.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:Talk46'})
    }
}
