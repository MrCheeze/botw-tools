-------- EventFlow: BloodyMoonRelief --------

Actor: Npc_HyruleWestHatago006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_ChangePosture']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_LoopEnd', 'Demo_ExitEventPlayer', 'Demo_CallDemo']
queries: ['CheckDuringBloodyMoon', 'CheckFlag', 'GeneralChoice2', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BM_Relief
entrypoint: None()
actions: ['Demo_OnWaitRevival', 'Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_012
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_005[Ready_Talk(Self)]
entrypoint: Ready_Talk(Self)
actions: ['Demo_TurnAndLookToObject', 'Demo_Talk']
queries: []
params: None

Actor: Npc_Musician_005[Finish_Talk(Self)]
entrypoint: Finish_Talk(Self)
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: None

Actor: Npc_Musician_005[Ready_Second_Talk(Self)]
entrypoint: Ready_Second_Talk(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Ready_Npc_HyruleWestHatago006_Talk() {
    Event45:
    if Npc_HyruleWestHatago006.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk01'})
        Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk06'})
    } else {
        switch Npc_HyruleWestHatago006.CheckActorAction13() {
          case 0:
            Event101:

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Event99:
            Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk00'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BloodyMoonRelief_NPC_Talk'})
          case 1:
            Event100:

            call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

            Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk05', 'ASName': 'Act_SitChair_Wait'})
            Npc_HyruleWestHatago006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            goto Event99
          case 2:
            goto Event101
          case 3:
            switch EventSystemActor.CheckWeather() {
              case 0:

                call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

                Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk04', 'ASName': 'Act_GoatCare', 'IsCloseMessageDialog': True})
                Npc_HyruleWestHatago006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                goto Event99
              case 1:
                Event129:
                Npc_HyruleWestHatago006.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                goto Event100
              case 2:
                goto Event129
              case 3:
                goto Event129
            }
          case 4:
            goto Event101
          case 5:
            goto Event101
          case 6:
            goto Event101
          case 7:
            goto Event101
          case 8:
            goto Event101
          case 9:
            goto Event101
          case 10:
            goto Event101
          case 11:
            goto Event101
          case 12:
            goto Event101
          case 13:
            goto Event101
        }
    }
}

void Step1_Npc_HyruleWestHatago006_Talk() {
    goto Event45
}

void BloodyMoonReliefArea_Enter() {
    if EventSystemActor.CheckDuringBloodyMoon() {
        if !EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefFirstTime'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'BloodyMoonReliefFirstTime', 'IsWaitFinish': True})
        }
    }
}

void Step1_Lithograph_EachFrame() {
    Event18:
    if !EventSystemActor.CheckDuringBloodyMoon() {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BloodyMoonReliefOn'})
            Event44:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event18
        } else {
            goto Event44
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
            goto Event44
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BloodyMoonReliefOn'})
            goto Event44
        }
    }
}

void AppearDugeon() {
    if !EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefFirstTime'}) {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 9.6787109375, 'Pattern1PosY': 3.902556896209717, 'Pattern1PosZ': 2.044188976287842, 'Pattern1AtX': 0.30847200751304626, 'Pattern1AtY': 1.0223079919815063, 'Pattern1AtZ': 0.07037399709224701, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'BM_Relief', 'ReviseModeEnd': 0, 'Count': 45.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        BM_Relief.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': '', 'SLinkKey': 'RemainsLithogragh', 'IsTargetDemoSLinkUser': False})
        BM_Relief.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        BM_Relief.Demo_OnWaitRevival({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 30.0, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})

        call Musician_Check()

    }
}

void Step1_Npc_Musician_012_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_012")})


    call Sing()

}

void Step1_Npc_Musician_012_Near() {
    Npc_Musician_012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Near000', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Musician_012_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_012.IsOnInstEventFlag() {

        call Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_012")})

        Event82:

        call Sing()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BloodyMoonRelief_Activated'})
    } else {
        Npc_Musician_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Text007', 'ASName': ''})

        call Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_012")})

        goto Event82
    }
}

void Ready_Npc_Musician_012_Near() {
    Npc_Musician_012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Near000', 'IsChecked': True, 'DispFrame': 300})
}

void Ready_Talk() {
    Npc_Musician_005[Ready_Talk(Self)].Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {
        Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Musician_012:Challenge000'})
        Event72:
        Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk10'})
        Event73:
        Npc_Musician_005[Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk11'})
        if !EventSystemActor.GeneralChoice2() {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
            Npc_Musician_005[Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk01'})
        } else {
            Npc_Musician_005[Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk03'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
        Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk15'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
            Event120:
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
            if !EventSystemActor.GeneralChoice2() {
                Event71:
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
                goto Event72
            } else {
                goto Event71
            }
        } else {
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
            goto Event120
        }
    }
}

void Finish_Talk() {
    if Npc_Musician_005[Finish_Talk(Self)].IsOnInstEventFlag() {
        goto Event73
    } else {
        Npc_Musician_005[Finish_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk12'})
        goto Event73
    }
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2762.235595703125, 'Pattern1PosY': 356.3719177246094, 'Pattern1PosZ': 179.32957458496094, 'Pattern1AtX': -2763.39990234375, 'Pattern1AtY': 350.35107421875, 'Pattern1AtZ': 181.3876495361328, 'Pattern1Fovy': 40.00001525878906, 'Count': 260.0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician012Bgm'})
    Npc_Musician_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_HintChant', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Text004'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_HintChant', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Text005'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'Musician012Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefFirstTime'}) {
        Npc_Musician_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Text008'})
    } else {
        Npc_Musician_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BloodyMoonRelief:Text006'})
    }
}

void Ready_Second_Talk() {
    goto Event73
}

void Musician_Check() {
    if EventSystemActor.CheckFlag({'FlagName': 'Animal_Forest_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HateeluMini_Treasure_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Thunder_Sword_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Relief_Landing_Finish'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Shadow_Sign_Finish'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'MouthofDragon_Finish'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'TwoWheels_Finish'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonRelief_Finish'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Finish'}) {
                                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_Come', 'IsWaitFinish': True})
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
