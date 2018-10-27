-------- EventFlow: Demo012_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckHorseCustomizeSelect', 'GeneralChoice4', 'HasPorchItemByCategory', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Talk', 'Demo_GetOffFromHorse']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Self_HorseAssociationCustum
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog', 'Demo_WarpOwnedHorse', 'Demo_SetHorseFmPassedFlag', 'Demo_HorseCustomReception', 'Demo_TalkNoMessageStepper', 'Demo_CustomizeHorse', 'Demo_CloseHorseCustom', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo']
queries: ['CheckOwnedHorseFamiliarity', 'IsHorseFamiliarityPassedAlready']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_Wait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Demo012_0() {
    GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': False, 'ClearDemoMemberIfNotOwned': True})
    GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})

    fork {
        Self_HorseAssociationCustum.Demo_WarpOwnedHorse({'IsWaitFinish': True})
        OwnedHorse_ForEvent.Demo_Wait({'IsWaitFinish': False, 'HasToCue': True, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'IsNoMorph': False})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 2, 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'HorseCustomPos', 'IsWaitFinish': True})
        Self_HorseAssociationCustum.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': 'HorseCustom'})
        EventSystemActor.Demo_WaitFrame({'Frame': 2, 'IsWaitFinish': True})
        Self_HorseAssociationCustum.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 6.0, 'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'PosOffset': [4.0, 0.0, 0.0], 'ActorName': 'HorsePlacmentAnchor', 'FaceId': 2})
    }

    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
    if !Self_HorseAssociationCustum.IsHorseFamiliarityPassedAlready() {
        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_00'})
        Self_HorseAssociationCustum.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsConfront': False, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_01'})
        if !EventSystemActor.GeneralChoice2() {
            Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Self_HorseAssociationCustum.Demo_TurnAndLookToObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'TurnDirection': 70.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'HorsePlacmentAnchor'})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'SceneName': 'C01-5', 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'TargetActor': 3, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
            Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk09', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo012-C01-UMii_Hylia_W-A-0', 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
            Self_HorseAssociationCustum.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'SceneName': 'C01-8', 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
            switch Self_HorseAssociationCustum.CheckOwnedHorseFamiliarity() {
              case 0:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_1', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo012-C02-UMii_Hylia_W-A-0', 'IsCloseMessageDialog': True})
                Event161:
                GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'SceneName': 'C01-7', 'BgCheck': True, 'OverwriteAtDist': 1.0, 'TargetActor': 1, 'UniqueName': '', 'IsWaitFinish': True, 'ActorName': '', 'OverwriteAt': True})
              case 1:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_2', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo012-C03-UMii_Hylia_W-A-0', 'IsCloseMessageDialog': True})
                goto Event161
              case 2:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_3', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo012-C04-UMii_Hylia_W-A-0', 'IsCloseMessageDialog': True})
                goto Event161
              case 3:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_4', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo012-C05-UMii_Hylia_W-A-0', 'IsCloseMessageDialog': True})
                Self_HorseAssociationCustum.Demo_SetHorseFmPassedFlag({'IsWaitFinish': True})
                Event174:

                fork {
                    Self_HorseAssociationCustum.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo012-C04-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                } {
                    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                }

                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk10', 'IsCloseMessageDialog': True})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Event144:
                    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-2', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                    Event179:
                    Self_HorseAssociationCustum.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk13'})
                    Self_HorseAssociationCustum.Demo_HorseCustomReception({'IsWaitFinish': True, 'CustomItemType': 0})
                    switch EventSystemActor.CheckHorseCustomizeSelect() {
                      case 0:
                        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk14'})
                        if !EventSystemActor.GeneralChoice2() {
                            Event111:
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            Self_HorseAssociationCustum.Demo_CloseHorseCustom({'IsWaitFinish': True})
                            Self_HorseAssociationCustum.Demo_CustomizeHorse({'IsWaitFinish': True})
                            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'HorseCustom_Change', 'IsWaitFinish': True})
                            Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk08', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                            Event148:
                            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk17', 'IsCloseMessageDialog': True})
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                goto Event144
                              case 1:
                                Event44:
                                if !EventSystemActor.HasPorchItemByCategory({'Category': 14, 'Count': 1}) {
                                    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2, 'SceneName': 'C01-3', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                                    Event180:
                                    Self_HorseAssociationCustum.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk15'})
                                    Self_HorseAssociationCustum.Demo_HorseCustomReception({'IsWaitFinish': True, 'CustomItemType': 1})
                                    switch EventSystemActor.CheckHorseCustomizeSelect() {
                                      case 0:
                                        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk14'})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event111
                                        } else {
                                            Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk20', 'CloseDialogOption': 0, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                            goto Event180
                                        }
                                      case 1:
                                        Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk28', 'CloseDialogOption': 0, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        goto Event180
                                      case 2:
                                        Event182:
                                        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                                        if EventSystemActor.CheckFlag({'FlagName': 'HorseCustom_Change'}) {
                                            goto Event148
                                        } else {
                                            goto Event174
                                        }
                                    }
                                } else {
                                    Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk11', 'IsCloseMessageDialog': False})
                                    goto Event148
                                }
                              case 2:
                                Event72:
                                if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 15}) {
                                    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-4', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                                    Event181:
                                    Self_HorseAssociationCustum.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk16'})
                                    Self_HorseAssociationCustum.Demo_HorseCustomReception({'IsWaitFinish': True, 'CustomItemType': 2})
                                    switch EventSystemActor.CheckHorseCustomizeSelect() {
                                      case 0:
                                        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk14'})
                                        if !EventSystemActor.GeneralChoice2() {
                                            goto Event111
                                        } else {
                                            Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk21', 'CloseDialogOption': 0, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                            goto Event181
                                        }
                                      case 1:
                                        Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk29', 'CloseDialogOption': 0, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        goto Event181
                                      case 2:
                                        goto Event182
                                    }
                                } else {
                                    Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk12'})
                                    goto Event148
                                }
                              case 3:
                                GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C01-6', 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk18', 'IsCloseMessageDialog': True})
                                EventSystemActor.Demo_FlagOFF({'FlagName': 'HorseCustom_Change', 'IsWaitFinish': True})
                                Event171:
                                GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'SceneName': 'C01-7', 'BgCheck': True, 'OverwriteAtDist': 1.0, 'TargetActor': 1, 'UniqueName': '', 'IsWaitFinish': True, 'ActorName': '', 'OverwriteAt': True})
                            }
                        } else {
                            Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk19', 'IsWaitAS': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 0})
                            goto Event179
                        }
                      case 1:
                        Self_HorseAssociationCustum.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk26', 'CloseDialogOption': 0, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        goto Event179
                      case 2:
                        goto Event182
                    }
                  case 1:
                    goto Event44
                  case 2:
                    goto Event72
                  case 3:
                    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C01-6', 'TargetActor': 3, 'ActorName': 'LookTag', 'UniqueName': 'HorseCustom', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                    Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk04', 'IsCloseMessageDialog': True})
                    goto Event171
                }
            }
        } else {
            Event20:
            Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk04', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'SceneName': 'C01-7', 'BgCheck': True, 'OverwriteAtDist': 1.0, 'TargetActor': 1, 'UniqueName': '', 'IsWaitFinish': True, 'ActorName': '', 'OverwriteAt': True})
        }
    } else {
        Self_HorseAssociationCustum.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01_02', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            goto Event174
        } else {
            goto Event20
        }
    }
}
