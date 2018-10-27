-------- EventFlow: Npc_oasis003 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'RandomChoice2', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis003[Rouge03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction14_2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Questend_talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event95:

    call RAIMEI_CK()

    switch Npc_oasis003[Rouge03].CheckActorAction13() {
      case [0, 6, 7, 8]:
        if Npc_oasis003[Rouge03].IsOnInstEventFlag() {
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_11'})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_02'})
            Event153:
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_005'})
                        Event146:
                        if !EventSystemActor.GeneralChoice2() {
                            Event128:
                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_010'})
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_inBedroom'}) {
                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_015'})
                                Event150:
                                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                                    Event89:
                                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                                } else {
                                    Event149:
                                    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_001-002r', 'IsCloseMessageDialog': True})
                                    Event127:
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        goto Event128
                                      case 1:
                                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_003_aboutGem'}) {
                                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_014'})
                                            goto Event149
                                        } else {
                                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_013'})
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_003_aboutGem'})
                                            goto Event149
                                        }
                                      case 2:
                                        Event132:
                                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk16', 'ASName': ''})
                                        goto Event89
                                    }
                                }
                            } else {
                                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_012'})
                                goto Event150
                            }
                        } else {
                            goto Event132
                        }
                    } else {
                        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_002'})
                        goto Event127
                    }
                }
            } else {
                goto Event89
            }
        } else {
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_10'})
            goto Event153
        }
      case [1, 9]:
        if EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
            if Npc_oasis003[Rouge03].IsOnInstEventFlag() {
                Event25:
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event152:
                if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_003'})
                            goto Event146
                        } else {
                            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis003_DLC2nd_SD_000'})
                            goto Event127
                        }
                    }
                }
            } else {

                call hello()

                goto Event25
            }
        } else {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.8984375, 'Pattern1PosY': 161.76290893554688, 'Pattern1PosZ': 2967.98828125, 'Pattern1AtX': -3887.874267578125, 'Pattern1AtY': 160.04476928710938, 'Pattern1AtZ': 2970.104736328125, 'Pattern1Fovy': 51.24998474121094, 'Count': 60.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk17'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6025999784469604, 'Pattern1PosY': 1.4381099939346313, 'Pattern1PosZ': 0.6831049919128418, 'Pattern1AtX': 0.022338999435305595, 'Pattern1AtY': 1.748810052871704, 'Pattern1AtZ': -0.32177698612213135, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge03', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Helmet:Talk18'})
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Activated'}) {
                    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': True, 'NoConnect': True})
                    goto Event152
                }
            }
        }
      case 2:
        if Npc_oasis003[Rouge03].IsOnInstEventFlag() {
            Event79:
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_05'})
            goto Event153
        } else {
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_10'})
            goto Event79
        }
      case 3:
        if Npc_oasis003[Rouge03].IsOnInstEventFlag() {
            Event80:
            if !EventSystemActor.RandomChoice2() {
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_03'})
                goto Event153
            } else {
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_04'})
                goto Event153
            }
        } else {

            call hello()

            goto Event80
        }
      case 4:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_06'})
        goto Event153
      case 5:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_07'})
        goto Event152
      case 10:
        Event116:
        if Npc_oasis003[Rouge03].IsOnInstEventFlag() {
            Event85:
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_08'})
            goto Event152
        } else {

            call hello()

            goto Event85
        }
      case 11:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_09'})
      case 13:
        if !Npc_oasis003[Rouge03].CheckActorAction14_2() {
            goto Event116
        } else {
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:mother'})
            goto Event153
        }
    }
}

void Electric_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event95
}

void Demo176_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo176_0', 'EntryPointName': '', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'Demo176_0', 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})

    call Electric_Relic.Ready_Npc_oasis003_Talk()

}

void Gerudo_Ch_Helmet_Finish_Near() {
    switch Npc_oasis003[Rouge03].CheckActorAction13() {
      case 5:
        Npc_oasis003[Rouge03].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:near000'})
      case 11:
        Npc_oasis003[Rouge03].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:near001'})
      case 13:
        if Npc_oasis003[Rouge03].CheckActorAction14_2() {
            Npc_oasis003[Rouge03].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:near002'})
        }
    }
}

void RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis003_Raimei_CK'}) {
            switch Npc_oasis003[Rouge03].CheckActorAction13() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Raimei_CK_001'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis003_Raimei_CK', 'IsWaitFinish': True})
                goto Event153
              case 11:
                Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:Quest_finish_09'})
            }
        }
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:hello'})
      case [2, 3, 4]:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:hello_00'})
      case [5, 6, 7]:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis003:hello_01'})
    }
}
