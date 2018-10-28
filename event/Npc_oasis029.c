-------- EventFlow: Npc_oasis029 --------

Actor: Npc_oasis029
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_SwitchPlayerEquipment', 'Demo_WarpPlayerToAnchor', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_OpenMessageTips']
queries: ['CheckRupee', 'HasPorchItemByCategory', 'GeneralChoice3', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWakeBoardReady']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis020
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis029_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis0020_first'}) {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            if !Npc_oasis029.IsOnInstEventFlag() {
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_17'})
            }
            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_07'})
            Event97:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_08'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        Event144:

                        call StartCamera()

                    } else {
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_11'})
                    }
                } else {
                    Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_12'})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 50}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -50})
                            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_08'})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                            EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Shield': 'Weapon_Shield_001'})
                            goto Event144
                        } else {
                            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_11'})
                        }
                    } else {
                        Event82:
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_09'})
                    }
                }
              case 1:
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_35'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_36'})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_10'})
                goto Event97
              case 2:
                goto Event82
            }
        } else {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            if !Npc_oasis029.IsOnInstEventFlag() {
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_16'})
            }
            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_01'})
            Event66:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_02'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        Event143:

                        call StartCamera()

                        Event69:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis0020_first'})
                    } else {
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_04', 'IsCloseMessageDialog': True})
                        Event76:
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_10'})
                        goto Event66
                    }
                } else {
                    Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_05'})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 50}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -50})
                            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_02'})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                            EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'PorchItemName_Shield': 'Weapon_Shield_001'})
                            goto Event143
                        } else {
                            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_29', 'IsCloseMessageDialog': True})
                            goto Event76
                        }
                    } else {
                        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_03'})
                        goto Event69
                    }
                }
              case 1:
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_34'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 19, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_SandSeal'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_SandSeal'})
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_22'})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                goto Event76
              case 2:
                Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_03'})
                goto Event69
            }
        }
    } else {
        Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_16'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first'}) {
            Event232:
            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_15'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis029_first', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_first_gerudo'}) {
            goto Event232
        } else {
            Npc_oasis029.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:Talk_14'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis029_first', 'IsWaitFinish': True})
        }
    }
}

void StartCamera() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 5.394530773162842, 'Pattern1PosY': 3.56256103515625, 'Pattern1PosZ': 9.85601806640625, 'Pattern1AtX': -0.18066400289535522, 'Pattern1AtY': 1.5196690559387207, 'Pattern1AtZ': 0.08715800195932388, 'Pattern1Fovy': 47.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Npc_oasis029_Warp'})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'UniqueName': '', 'CreateSelf': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'TargetActor1': 1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1PosY': 2.0, 'Pattern1AtY': 1.5, 'Pattern1Fovy': 47.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1AtZ': 0.0, 'Pattern1PosZ': -5.0, 'Count': 60.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void Near() {
    Npc_oasis029.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': 'Act_Touting', 'MessageId': 'EventFlowMsg/Npc_oasis029:Near_04'})
}

void EntryPoint0() {
    switch Npc_oasis020.CheckActorAction13() {
      case 0:
        Npc_oasis020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Near_03', 'IsChecked': False, 'DispFrame': 90})
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_zarashi'}) {
            Npc_oasis020.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_oasis020:Near_02', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_oasis020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis020:Near_04', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}
