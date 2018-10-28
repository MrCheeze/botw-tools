-------- EventFlow: Npc_Zora034 --------

Actor: Npc_Zora034
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'CheckWeather', 'RandomChoice2', 'GeneralChoice4', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call JoadaFirst()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor04'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora034_FinalDa', 'IsWaitFinish': True})
    }
    if Npc_Zora034.IsOnInstEventFlag() {
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk02'})
    } else {
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk01'})
    }
    Event33:
    Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk06'})
    Event81:
    switch EventSystemActor.GeneralChoice4() {
      case 0:

        call JoadaDa()

        Event88:
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk26'})
        goto Event81
      case 1:
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk28', 'IsCloseMessageDialog': False})
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk31'})
        } else {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk30'})
        }
        goto Event88
      case 2:
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk22'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3461.919921875, 'Pattern1PosY': 264.0060729980469, 'Pattern1PosZ': -497.8412780761719, 'Pattern1AtX': 3465.325439453125, 'Pattern1AtY': 264.8684997558594, 'Pattern1AtZ': -495.0382995605469, 'Pattern1Fovy': 50.00001907348633, 'Count': 20.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_Zora034.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'TurnPosition': [3520.0, 284.0, -447.0], 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
        }

        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk25'})

            fork {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
            } {
                Npc_Zora034.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
            }

            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk32'})
            Event94:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora034_Rutta', 'IsWaitFinish': True})
            goto Event88
        } else {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk23', 'IsCloseMessageDialog': True})

            fork {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
            } {
                Npc_Zora034.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
            }

            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk27'})
            goto Event94
        }
      case 3:
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk24'})
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_First'}) {
        Npc_Zora034.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora034:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Water_Relic_RainStop_Talk() {

    call JoadaFirst()

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor04'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora034_FinalDa', 'IsWaitFinish': True})
    }
    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_RainFirst'}) {
            Event26:
            if Npc_Zora034.IsOnInstEventFlag() {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk02'})
            } else {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk01'})
            }
            goto Event33
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora034_RainFirst', 'IsWaitFinish': True})
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk14'})
            goto Event33
        }
      case [1, 2, 3]:
        goto Event26
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor04'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora034_FinalDa', 'IsWaitFinish': True})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_NormalFirst'}) {
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk02'})
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk18'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk19'})
        } else {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk20'})
        }
        Event165:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor04'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk33'})
            if !EventSystemActor.GeneralChoice2() {

                call JoadaDa()

            } else {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk24'})
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora034_NormalFirst'})
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk15'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_First'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk17'})
            goto Event165
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora034_First', 'IsWaitFinish': True})
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk16'})
            goto Event165
        }
    }
}

void JoadaFirst() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_First'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora034_First', 'IsWaitFinish': True})
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk00', 'IsCloseMessageDialog': True})
        Npc_Zora034.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk03'})
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk21'})
        }
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora034:talk04'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void JoadaDa() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite04'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_Kapoda'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk37'})
            Event184:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_FinalDa2'}) {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk36'})
            } else {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk35'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora034_Kapoda', 'IsWaitFinish': True})
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk34'})
            goto Event184
        }
    } else {
        Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk07'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora034_FinalDa2'}) {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk13'})
        } else {
            Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk12'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora034_FinalDa2', 'IsWaitFinish': True})
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk09'})

                fork {
                    Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk10'})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                }

                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk11'})
            } else {
                Npc_Zora034.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora034:talk08'})
            }
        }
    }
}
