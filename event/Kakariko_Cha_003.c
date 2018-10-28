-------- EventFlow: Kakariko_Cha_003 --------

Actor: Npc_Kakariko005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction14_2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kakariko005_Talk() {
    Event111:
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko005_FrontTalk'})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_Activated'}) {
        switch Npc_Kakariko005.CheckActorAction13() {
          case 2:
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk10'})
          case 3:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_over1'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_003_over2'}) {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk08', 'ASName': ''})

                    fork {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad_L', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk20'})
                    } {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    }

                } else {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk15', 'ASName': ''})

                    fork {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad_L', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk21'})
                    } {
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    }

                }
            } else {
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk07', 'ASName': ''})

                fork {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad_L', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk14'})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

            }
          case 13:
            switch Npc_Kakariko005.CheckActorAction14_2() {
              case 8:
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk23'})
              case 9:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Kokko_Counter', 'Operator': 'GreaterThanOrEqualTo', 'Value': 1}) {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk11', 'ASName': ''})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk03', 'ASName': '', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk04', 'ASName': ''})
                    } else {
                        Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk18', 'ASName': ''})
                    }
                } else {

                    call Npc_Kakariko005.Kakariko_Cha_003_NoCapKokko()

                }
            }
        }
    } else
    switch Npc_Kakariko005.CheckActorAction13() {
      case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Npc_Kakariko005.FromChallenge_Talk()

      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_fisrtkokko'}) {
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk06', 'ASName': ''})

            fork {
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk12', 'ASName': 'Talk_Sad_L'})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            }

            if !EventSystemActor.GeneralChoice2() {
                Event108:
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk22'})
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk13', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Cha_003_Activated', 'IsWaitFinish': True})
            } else {
                Event45:
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk09', 'ASName': ''})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko005_fisrtkokko'})
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk01', 'ASName': ''})
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk05', 'ASName': ''})
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk19', 'ASName': 'Talk_Sad_L'})
            Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk16', 'ASName': 'Talk_Sad_L'})

            fork {
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Talk17', 'ASName': 'Talk_Sad_L'})
            } {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            }

            if !EventSystemActor.GeneralChoice2() {
                goto Event108
            } else {
                goto Event45
            }
        }
    }
}

void Ready_Npc_Kakariko005_Near() {
    if Npc_Kakariko005.CheckActorAction13() == 3 {
        Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Near00', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Finish_Npc_Kakariko005_Talk() {
    Event75:

    call Npc_Kakariko005.Talk()

}

void 10kokko_Npc_Kakariko005_Talk() {
    goto Event111
}

void 10kokko_Npc_Kakariko005_Near() {
    switch Npc_Kakariko005.CheckActorAction13() {
      case [2, 3]:
        Event72:
        Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Cha_003:Near01', 'DispFrame': 90, 'IsChecked': True})
      case 13:
        if Npc_Kakariko005.CheckActorAction14_2() in [8, 9] {
            goto Event72
        }
    }
}

void Talk() {
    goto Event75
}
