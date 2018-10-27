-------- EventFlow: OneHundred --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr01[free]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr02[free]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr02
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr03[free]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr03
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr04[free]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis004_fr04
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_NPC_oasis004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch NPC_oasis004.CheckActorAction13() {
      case 6:
        Event67:
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_100', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_102'})
        Event107:
        EventSystemActor.Demo_FlagON({'FlagName': 'OneHundred_Activated', 'IsWaitFinish': True})
      case 7:
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_100', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_101'})
        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_102'})
        goto Event107
      case 8:
        goto Event67
      case 9:
        goto Event67
    }
}

void Finish_NPC_oasis004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch NPC_oasis004.CheckActorAction13() {
      case 6:
        Event111:
        if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr0Free'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr02Free'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr03Free'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                        NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_119'})
                        if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_1st'}) {
                            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_118'})
                            Event174:
                            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_122'})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Gold'})

                            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_120', 'IsCloseMessageDialog': True})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHundred_Finish'})
                        } else {
                            NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_117'})
                            goto Event174
                        }
                    } else {
                        Event138:
                        if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_1st'}) {
                            switch NPC_oasis004.CheckActorAction13() {
                              case 0:
                                Event153:
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_111'})
                                if !EventSystemActor.GeneralChoice2() {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_115'})
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_116'})
                                }
                              case 1:
                                goto Event153
                              case 2:
                                goto Event153
                              case 3:
                                goto Event153
                              case 4:
                                goto Event153
                              case 5:
                                goto Event153
                              case 6:
                                goto Event153
                              case 7:
                                if NPC_oasis004.IsOnInstEventFlag() {
                                    goto Event153
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_100', 'IsCloseMessageDialog': True})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_113'})
                                    goto Event153
                                }
                              case 8:
                                goto Event153
                              case 9:
                                goto Event153
                              case 10:
                                goto Event153
                              case 11:
                                goto Event153
                              case 12:
                                goto Event153
                              case 13:
                                goto Event153
                            }
                        } else {
                            switch NPC_oasis004.CheckActorAction13() {
                              case 0:
                                Event139:
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_109'})
                                Event130:
                                if !EventSystemActor.GeneralChoice2() {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_107'})
                                    Event132:
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_108'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHundred_1st'})
                                } else {
                                    goto Event132
                                }
                              case 1:
                                goto Event139
                              case 2:
                                goto Event139
                              case 3:
                                goto Event139
                              case 4:
                                goto Event139
                              case 5:
                                goto Event139
                              case 6:
                                goto Event139
                              case 7:
                                if NPC_oasis004.IsOnInstEventFlag() {
                                    goto Event139
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_110'})
                                    goto Event139
                                }
                              case 8:
                                goto Event139
                              case 9:
                                goto Event139
                              case 10:
                                goto Event139
                              case 11:
                                goto Event139
                              case 12:
                                goto Event139
                              case 13:
                                goto Event139
                            }
                        }
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                        goto Event138
                    } else {
                        goto Event138
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr03Free'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                        goto Event138
                    } else {
                        goto Event138
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                        goto Event138
                    } else {
                        Event156:
                        if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_1st'}) {
                            switch NPC_oasis004.CheckActorAction13() {
                              case 0:
                                Event160:
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_114'})
                                if !EventSystemActor.GeneralChoice2() {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_115'})
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_116'})
                                }
                              case 1:
                                goto Event160
                              case 2:
                                goto Event160
                              case 3:
                                goto Event160
                              case 4:
                                goto Event160
                              case 5:
                                goto Event160
                              case 6:
                                goto Event160
                              case 7:
                                if NPC_oasis004.IsOnInstEventFlag() {
                                    goto Event160
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_100', 'IsCloseMessageDialog': True})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_113'})
                                    goto Event160
                                }
                              case 8:
                                goto Event160
                              case 9:
                                goto Event160
                              case 10:
                                goto Event160
                              case 11:
                                goto Event160
                              case 12:
                                goto Event160
                              case 13:
                                goto Event160
                            }
                        } else {
                            switch NPC_oasis004.CheckActorAction13() {
                              case 0:
                                Event129:
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_106'})
                                goto Event130
                              case 1:
                                goto Event129
                              case 2:
                                goto Event129
                              case 3:
                                goto Event129
                              case 4:
                                goto Event129
                              case 5:
                                goto Event129
                              case 6:
                                goto Event129
                              case 7:
                                if NPC_oasis004.IsOnInstEventFlag() {
                                    goto Event129
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_110'})
                                    goto Event129
                                }
                              case 8:
                                goto Event129
                              case 9:
                                goto Event129
                              case 10:
                                goto Event129
                              case 11:
                                goto Event129
                              case 12:
                                goto Event129
                              case 13:
                                goto Event129
                            }
                        }
                    }
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr02Free'}) {
                goto Event156
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr03Free'}) {
                    goto Event156
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                        goto Event156
                    } else {
                        if NPC_oasis004.CheckActorAction({'ActionName': 'Root/Timeline/Action4/到着'}) {
                            if NPC_oasis004.IsOnInstEventFlag() {
                                Event115:
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_104'})
                                if !EventSystemActor.GeneralChoice2() {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_101'})
                                } else {
                                    NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_103'})
                                }
                            } else {
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_Talk_100', 'IsCloseMessageDialog': True})
                                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_112'})
                                goto Event115
                            }
                        } else {
                            if NPC_oasis004.IsOnInstEventFlag() {
                                goto Event115
                            } else {
                                NPC_oasis004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:Npc_oasis004_105'})
                                goto Event115
                            }
                        }
                    }
                }
            }
        }
      case 7:
        goto Event111
      case 8:
        goto Event111
      case 9:
        goto Event111
    }
}

void Ready_NPC_oasis004_Near() {
    switch NPC_oasis004.CheckActorAction13() {
      case 0:
        Event46:
        NPC_oasis004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near01', 'DispFrame': 300, 'IsChecked': True})
      case 1:
        goto Event46
      case 2:
        goto Event46
      case 3:
        goto Event46
      case 4:
        goto Event46
      case 5:
        goto Event46
      case 6:
        goto Event46
      case 7:
        Event47:
        NPC_oasis004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/OneHundred:near02'})
      case 8:
        goto Event46
      case 9:
        goto Event46
      case 10:
        goto Event46
      case 11:
        goto Event46
      case 12:
        goto Event46
      case 13:
        goto Event46
    }
}

void Finish_NPC_oasis004_Near() {
    switch NPC_oasis004.CheckActorAction13() {
      case 0:
        Event49:
        NPC_oasis004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/OneHundred:near03'})
      case 1:
        goto Event49
      case 2:
        goto Event49
      case 3:
        goto Event49
      case 4:
        goto Event49
      case 5:
        goto Event49
      case 6:
        goto Event49
      case 7:
        goto Event47
      case 8:
        goto Event49
      case 9:
        goto Event49
      case 10:
        goto Event49
      case 11:
        goto Event49
      case 12:
        goto Event49
      case 13:
        goto Event49
    }
}

void Finish_NPC_oasis004_fr01_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_oasis004_fr01.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    NPC_oasis004_fr01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR01_Talk_02', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    NPC_oasis004_fr01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR01_Talk_04', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'FlagName': 'OneHundred_Fr0Free', 'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})

    call Step_CK()

}

void Finish_NPC_oasis004_fr01_OneHundred_Fr01vsEnemy_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    NPC_oasis004_fr01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR01_Talk_01', 'ASName': 'Crouch'})
}

void Finish_NPC_oasis004_fr02_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_oasis004_fr02.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR02_Talk_02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    NPC_oasis004_fr02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR02_Talk_04', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHundred_Fr02Free'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})

    call Step_CK()

}

void Finish_NPC_oasis004_fr02_OneHundred_Fr02vsEnemy_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    NPC_oasis004_fr02.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR02_Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Guard'})
}

void Finish_NPC_oasis004_fr01_free_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Finish'}) {
        NPC_oasis004_fr01[free].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR01_Talk_05'})
    } else {
        NPC_oasis004_fr01[free].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR01_Talk_03'})
    }
}

void Finish_NPC_oasis004_fr02_free_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Finish'}) {
        NPC_oasis004_fr02[free].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR02_Talk_05'})
    } else {
        NPC_oasis004_fr02[free].Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR02_Talk_03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Finish_NPC_oasis004_fr03_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_oasis004_fr03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    NPC_oasis004_fr03.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    NPC_oasis004_fr03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_04', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    NPC_oasis004_fr03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_05'})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHundred_Fr03Free'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})

    call Step_CK()

}

void Finish_NPC_oasis004_fr03_OneHundred_Fr03vsEnemy_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    NPC_oasis004_fr03.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_01', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Crouch'})
}

void Finish_NPC_oasis004_fr03_free_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Finish'}) {
        NPC_oasis004_fr03[free].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_06'})
    } else {
        NPC_oasis004_fr03[free].Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR03_Talk_03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Finish_NPC_oasis004_fr04_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    NPC_oasis004_fr04.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR04_Talk_02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    NPC_oasis004_fr04.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR04_Talk_04', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHundred_Fr04Free'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})

    call Step_CK()

}

void Finish_NPC_oasis004_fr04_OneHundred_Fr04Free_Talk() {

    call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

    NPC_oasis004_fr04.Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR04_Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Guard'})
}

void Finish_NPC_oasis004_fr04_free_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Finish'}) {
        NPC_oasis004_fr04[free].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/OneHundred:FR04_Talk_05'})
    } else {
        NPC_oasis004_fr04[free].Demo_Talk({'MessageId': 'EventFlowMsg/OneHundred:FR04_Talk_03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Finish_NPC_oasis004_fr04_Near() {
    NPC_oasis004_fr04.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near04', 'IsChecked': False, 'DispFrame': 300})
}

void Finish_NPC_oasis004_fr01_OneHundred_Fr01vsEnemy_Near() {
    NPC_oasis004_fr01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near05', 'IsChecked': False, 'DispFrame': 300})
}

void Finish_NPC_oasis004_fr02_Near() {
    NPC_oasis004_fr02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near06', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_NPC_oasis004_fr03_Near() {
    NPC_oasis004_fr03.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near07', 'IsChecked': False, 'DispFrame': 300})
}

void Step_CK() {
    if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr0Free'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr02Free'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr03Free'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'OneHundred_Fr04Free'}) {
                    EventSystemActor.Demo_FlagON({'FlagName': 'OneHundred_Step1', 'IsWaitFinish': True})
                }
            }
        }
    }
}

void Step1_NPC_oasis004_Near() {
    switch NPC_oasis004.CheckActorAction13() {
      case 0:
        Event213:
        NPC_oasis004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/OneHundred:near01', 'DispFrame': 300, 'IsChecked': False})
      case 1:
        goto Event213
      case 2:
        goto Event213
      case 3:
        goto Event213
      case 4:
        goto Event213
      case 5:
        goto Event213
      case 6:
        goto Event213
      case 7:
        NPC_oasis004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/OneHundred:near02', 'IsChecked': False})
      case 8:
        goto Event213
      case 9:
        goto Event213
      case 10:
        goto Event213
      case 11:
        goto Event213
      case 12:
        goto Event213
      case 13:
        goto Event213
    }
}
