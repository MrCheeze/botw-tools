-------- EventFlow: GerudoMiniJewel --------

Actor: Npc_oasis001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'GeneralChoice3', 'CheckAddPorchItem', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'GerudoMiniJewel_First'}) {
        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_29'})
        Event92:
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_23'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_08'})
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_15', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'GerudoMiniJewel', 'StepName': '', 'ForceRunTelop': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_09', 'IsCloseMessageDialog': True})
            } else {
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_24', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'GerudoMiniJewel', 'StepName': '', 'ForceRunTelop': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_27'})
            }
        } else {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_28'})
            EventSystemActor.Demo_FlagON({'FlagName': 'GerudoMiniJewel_First', 'IsWaitFinish': True})
        }
    } else {

        call hello()

        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_26'})
        } else {
            Npc_oasis001.Demo_Talk({'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
        goto Event92
    }
}

void Finished_Npc_oasis001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'GerudoMiniJewel_Poach'}) {
        if Npc_oasis001.IsOnInstEventFlag() {
            Event50:
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_14'})
            Event76:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_19'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_025_Head'}) {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_12', 'IsCloseMessageDialog': True})

                        call sound()

                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_10'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_025_Head'})

                        Event90:
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_11'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GerudoMiniJewel_Finished'})
                    } else {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_13'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GerudoMiniJewel_Poach'})
                    }
                } else {
                    Event89:
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_03'})
                    goto Event76
                }
              case 1:
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_20'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_026_Head'}) {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_12', 'IsCloseMessageDialog': True})

                        call sound()

                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_10'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_026_Head'})

                        goto Event90
                    } else {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_13'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GerudoMiniJewel_Poach'})
                    }
                } else {
                    goto Event89
                }
              case 2:
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_21'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Armor_027_Head', 'Count': 1}) {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_12', 'IsCloseMessageDialog': True})

                        call sound()

                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_10'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_027_Head'})

                        goto Event90
                    } else {
                        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_13'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GerudoMiniJewel_Poach'})
                    }
                } else {
                    goto Event89
                }
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_36'})
            goto Event50
          case [2, 3, 4]:
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_37'})
            goto Event50
          case [5, 6, 7]:
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_38'})
            goto Event50
        }
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 1}) {
        if Npc_oasis001.IsOnInstEventFlag() {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_31'})
            Event67:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event96:
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 10}) {
                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -10})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_17', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_18'})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event76
                } else {
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_25'})
                    Event83:
                    Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_09', 'IsCloseMessageDialog': True})
                }
              case 1:
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_08', 'IsCloseMessageDialog': True})
                Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_32', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event96
                } else {
                    goto Event83
                }
              case 2:
                goto Event83
            }
        } else {

            call hello()

            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_16', 'IsCloseMessageDialog': True})
            goto Event67
        }
    } else
    if Npc_oasis001.IsOnInstEventFlag() {
        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_30'})
    } else {

        call hello()

        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_06', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_08'})
        } else {
            Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_09', 'IsCloseMessageDialog': True})
        }
    }
}

void Ready_Npc_oasis001_Near() {
    Npc_oasis001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Near', 'IsChecked': True, 'DispFrame': 300})
}

void sound() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GerudoMiniJewel_Display'})

        fork {
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        }

        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
}

void Finished_Npc_oasis001_Near() {
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 10}) {
        Npc_oasis001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Near', 'IsChecked': True, 'DispFrame': 300})
    } else {
        Npc_oasis001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Near', 'IsChecked': False, 'DispFrame': 90})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_33'})
      case [2, 3, 4]:
        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_34'})
      case [5, 6, 7]:
        Npc_oasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GerudoMiniJewel:Talk_35'})
    }
}
