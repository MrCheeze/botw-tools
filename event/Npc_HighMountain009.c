-------- EventFlow: Npc_HighMountain009 --------

Actor: Npc_HighMountain009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_AdvanceTime', 'Demo_AutoSave', 'Demo_CloseMessageDialog', 'Demo_DeletePorchItemInEquip']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'HasPorchItem', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HighMountain009.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitHurt', 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk14'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Step1'}) {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk06', 'ASName': 'Talk_SitHurt'})
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SitHurt', 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk26'})
                Event23:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk12', 'ASName': 'Talk_SitHurt'})
                    Event116:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC009_First_Start'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC009_First', 'IsWaitFinish': True})
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk16', 'IsCloseMessageDialog': False, 'ASName': 'Talk_SitHurt'})
                    goto Event23
                  case 1:
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk10', 'ASName': 'Talk_SitHurt'})
                    goto Event116
                  case 2:
                    if !Npc_HighMountain009.IsOnInstEventFlag() {
                        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk15', 'ASName': 'Talk_SitHurt'})
                    }
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk11', 'ASName': 'Talk_SitHurt'})
                    goto Event116
                  case 3:
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk13', 'ASName': 'Talk_SitHurt'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC009_First_Start'})
                    Event36:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC009_First', 'IsWaitFinish': True})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC009_First_Start'}) {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk07', 'ASName': 'Talk_SitHurt'})
                goto Event23
            } else {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk03', 'ASName': 'Talk_SitHurt'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk04', 'ASName': 'Talk_SitHurt'})
                    goto Event23
                } else {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk09', 'ASName': 'Talk_SitHurt'})
                    goto Event36
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC009_First'}) {
            if Npc_HighMountain009.IsOnInstEventFlag() {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk20', 'ASName': 'Talk_SitHurt'})
            } else {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk21', 'ASName': 'Talk_SitHurt'})
            }
            switch EventSystemActor.GeneralChoice4() {
              case 1:
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk22', 'ASName': 'Talk_SitHurt'})
              case 2:
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk02', 'ASName': 'Talk_SitHurt'})
              case 3:
                Event21:
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk08', 'ASName': 'Talk_SitHurt'})
            }
        } else {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk00', 'ASName': 'Talk_SitHurt'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC009_First', 'IsWaitFinish': True})
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk01', 'ASName': 'Talk_SitHurt'})
            } else {
                goto Event21
            }
        }
    }
}

void Clear_RemainsWind_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_RitoWeapon'}) {

        call ArrowRepair()

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC009_First_Clear'}) {
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk18', 'ASName': ''})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC009_First'}) {
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk05', 'ASName': ''})
        Event19:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC009_First_Clear'})
    } else {
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk17', 'IsCloseMessageDialog': False, 'ASName': ''})
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk18', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC009_First', 'IsWaitFinish': True})
        goto Event19
    }
}

void ArrowRepair() {
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC009_Bow028_First'}) {
        Event46:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Bow_028', 'Count': 1}) {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk51', 'ASName': ''})
        } else
        if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Bow_028', 'IsCheckLife': False, 'IsCheckEquipStand': True}) {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk57', 'ASName': ''})
        } else {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk52', 'ASName': ''})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'Count': 5}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Bow_016', 'Count': 1}) {
                        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk58', 'ASName': ''})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk53', 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
                                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk54', 'ASName': ''})
                                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Bow_016'})
                                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Obj_FireWoodBundle', 'IsWaitFinish': True, 'Value': -5})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Ore_A'})
                                EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 0, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
                                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})
                                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk56', 'ASName': ''})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Bow_028'})

                                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                            } else {
                                Event97:
                                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk55', 'ASName': ''})
                            }
                        } else {
                            goto Event97
                        }
                    } else {
                        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk61', 'ASName': ''})
                        Event92:
                        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk59', 'ASName': ''})
                    }
                } else
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Bow_016', 'Count': 1}) {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk62', 'ASName': ''})
                } else {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk65', 'ASName': ''})
                }
                goto Event92
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Bow_016', 'Count': 1}) {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk63', 'ASName': ''})
                } else {
                    Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk64', 'ASName': ''})
                }
                goto Event92
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Bow_016', 'Count': 1}) {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk66', 'ASName': ''})
            } else {
                Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk60', 'ASName': ''})
            }
            goto Event92
        }
    } else {
        Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk67', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC009_Bow028_First'})
        goto Event46
    }
}

void Near() {
    if Npc_HighMountain009.CheckActorAction13() {
        Npc_HighMountain009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Clear_RemainsWind_Near() {
    if Npc_HighMountain009.CheckActorAction13() {
        Npc_HighMountain009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Talk_Hearts_Steal() {
    if Npc_HighMountain009.CheckActorAction13() {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_HighMountain009")})

        Npc_HighMountain009.Demo_BecomeSpeaker({'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk23', 'ASName': ''})
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk25', 'ASName': ''})
        } else {
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SitHurt', 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk23'})
            Npc_HighMountain009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain009:talk24', 'ASName': 'Talk_SitHurt'})
        }
    }
}
