-------- EventFlow: Npc_Zora033 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_AdvanceTime', 'Demo_AutoSave', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_DeletePorchItemInEquip']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem', 'CheckExistActor', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora033
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
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

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_First'}) {
        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk29'})
        Event158:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk32'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora033_ChoiseC', 'IsWaitFinish': True})
            Event172:
            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_ChoiseA'})
            && EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_ChoiseB'})
            && EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_ChoiseC'}) {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk33'})
            } else {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk02'})
                goto Event158
            }
          case 1:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora033_spear', 'IsWaitFinish': True})
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk31'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora033_ChoiseB', 'IsWaitFinish': True})
            goto Event172
          case 2:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora033_doing', 'IsWaitFinish': True})
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk30', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora033_ChoiseA', 'IsWaitFinish': True})
            goto Event172
          case 3:
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk00', 'ASName': 'Act_Metal_Engraving_Talk'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_First'})
        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk00', 'ASName': 'Act_Metal_Engraving_Talk'})
        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk01', 'ASName': 'Act_Metal_Engraving_Talk'})
        goto Event158
    }
}

void SpearRepair() {
    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk24'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_050'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_NormalFirst'}) {
                Event92:
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk05', 'ASName': 'Act_Metal_Engraving_Talk'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_NormalFirst'})
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk04', 'ASName': 'Act_Metal_Engraving_Talk'})
                goto Event92
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_NormalFirst'})
            if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Spear_050', 'IsCheckEquipStand': True, 'IsCheckLife': False}) {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk08', 'ASName': 'Act_Metal_Engraving_Talk'})
            } else {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk06', 'ASName': 'Act_Metal_Engraving_Talk'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk07', 'ASName': 'Act_Metal_Engraving_Talk'})
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk18', 'ASName': 'Act_Metal_Engraving_Talk'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk19', 'ASName': 'Act_Metal_Engraving_Talk'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk21', 'IsCloseMessageDialog': True})
                                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                        EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Spear_027'})
                                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -5})
                                        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Ore_A'})
                                        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                        EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 0, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
                                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
                                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk22'})

                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Spear_050'})

                                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                                    } else {
                                        Event109:
                                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk20', 'ASName': 'Act_Metal_Engraving_Talk'})
                                    }
                                } else {
                                    goto Event109
                                }
                            } else {
                                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk11', 'ASName': 'Act_Metal_Engraving_Talk'})
                                Event106:
                                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk17', 'ASName': 'Act_Metal_Engraving_Talk'})
                            }
                        } else
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk12', 'ASName': 'Act_Metal_Engraving_Talk'})
                        } else {
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk15', 'ASName': 'Act_Metal_Engraving_Talk'})
                        }
                        goto Event106
                    } else
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk13'})
                        } else {
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk14', 'ASName': 'Act_Metal_Engraving_Talk'})
                        }
                        goto Event106
                    } else
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk16', 'ASName': 'Act_Metal_Engraving_Talk'})
                    } else {
                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk10', 'ASName': 'Act_Metal_Engraving_Talk'})
                    }
                    goto Event106
                } else {
                    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk09', 'ASName': 'Act_Metal_Engraving_Talk'})
                }
            }
        }
      case 1:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_049'}) {
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk25'})
        } else
        if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': True, 'ActorName': 'Weapon_Spear_049', 'IsCheckLife': False}) {
            Event123:
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk27'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Weapon_Spear_049'}) {
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk26'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk28'})
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_I', 'Count': 5}) {
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk18', 'ASName': 'Act_Metal_Engraving_Talk'})
                        if !EventSystemActor.GeneralChoice2() {
                            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk21', 'IsCloseMessageDialog': True})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Spear_027'})
                            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_I', 'Value': -5})
                            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                            EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 0, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
                            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk22'})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Spear_049'})

                            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                        } else {
                            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk20', 'ASName': 'Act_Metal_Engraving_Talk'})
                        }
                    } else {
                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk11', 'ASName': 'Act_Metal_Engraving_Talk'})
                        Event131:
                        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk17', 'ASName': 'Act_Metal_Engraving_Talk'})
                    }
                } else
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_027'}) {
                    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk13'})
                } else {
                    Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk10', 'ASName': 'Act_Metal_Engraving_Talk'})
                }
                goto Event131
            } else {
                Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk09', 'ASName': 'Act_Metal_Engraving_Talk'})
            }
        } else {
            goto Event123
        }
      case 3:
        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk09', 'ASName': 'Act_Metal_Engraving_Talk'})
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora033_AfterRelicFirst'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Get_ZoraWeapon'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_Spear049'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Weapon_Spear_050'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_Spear050'})

            call SpearRepair()

        } else {
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk00', 'ASName': 'Act_Metal_Engraving_Talk'})
            Event112:
            Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Metal_Engraving_Talk', 'MessageId': 'EventFlowMsg/Npc_Zora033:talk23'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora033_AfterRelicFirst'})
        Npc_Zora033.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk03', 'ASName': 'Act_Metal_Engraving_Talk'})
        goto Event112
    }
}

void Water_Relic_Finished_Near() {
    Npc_Zora033.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:near00'})
}
