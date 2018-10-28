-------- EventFlow: Npc_Goron016 --------

Actor: Npc_Goron016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_AdvanceTime', 'Demo_AutoSave', 'Demo_DeletePorchItemInEquip', 'Demo_CallDemo']
queries: ['CheckFlag', 'HasPorchItem', 'GeneralChoice2', 'CheckExistActor', 'RandomChoice4', 'RandomChoice2']
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

    switch Npc_Goron016.CheckActorAction13() {
      case 0:
        Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk03', 'IsOverWriteLabelActorName': False})
        if Npc_Goron016.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Event79:
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk10', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            } else {
                Event75:
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            }
        } else
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk28', 'IsCloseMessageDialog': True})
        }
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Get_GoronWeapon'}) {

                call GoronSword3Repair()

            } else
            Event73:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                goto Event79
              case 1:
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk08', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
              case 2:
                goto Event75
              case 3:
                Event74:
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk06', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron016_First'}) {
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk03', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                goto Event73
            } else {
                Event66:
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron016_First', 'IsWaitFinish': True})
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk00', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    goto Event74
                  case 1:
                    goto Event75
                  case 2:
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                  case 3:
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk09', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                }
            } else {
                goto Event66
            }
        }
      case 10:
        Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk04', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
      case 11:
        Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }
}

void GoronSword3Repair() {
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron009_Sword054_First'}) {
        Event7:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_054'}) {
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk12', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } else
        if !EventSystemActor.CheckExistActor({'ActorName': 'Weapon_Lsword_054', 'IsCheckEquipStand': True, 'IsCheckLife': False}) {
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk13', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        } else {
            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk14', 'IsOverWriteLabelActorName': False})
            if EventSystemActor.HasPorchItem({'Count': 5, 'PorchItemName': 'Item_Ore_I'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_036'}) {
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk23', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk25', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
                                SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'Demo_Cmn_Blackout'})
                                EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Lsword_036'})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -5, 'PorchItemName': 'Item_Ore_I'})
                                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_Ore_A'})
                                EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 0, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
                                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
                                SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})
                                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk26', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Lsword_054'})

                                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                            } else {
                                Event94:
                                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk24', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                            }
                        } else {
                            goto Event94
                        }
                    } else {
                        Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk15', 'IsOverWriteLabelActorName': False})
                        Event91:
                        Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk21', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    }
                } else
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_036'}) {
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk16', 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk17', 'IsOverWriteLabelActorName': False})
                }
                goto Event91
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_036'}) {
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk18', 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk19', 'IsOverWriteLabelActorName': False})
                }
                goto Event91
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_036'}) {
                Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk20', 'IsOverWriteLabelActorName': False})
            }
            goto Event91
        }
    } else {
        Npc_Goron016.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk32', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron009_Sword054_First'})
        goto Event7
    }
}

void Near() {
    switch Npc_Goron016.CheckActorAction13() {
      case 0:
        Npc_Goron016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:near01', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_Goron016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:near00', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_Goron016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Goron016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron016:near03', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Talk_Burohan_Steal() {
    if Npc_Goron016.CheckActorAction13() {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Npc_Goron016', 'EntryPointName': 'Talk_Burohan_Steal_Demo', 'EndFade': 1, 'IsWaitFinish': True})
    }
}

void Talk_Burohan_Steal_Demo() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Goron016"), 'Arg_Turn': 2})

    Npc_Goron016.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk27'})
    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk29'})
    Npc_Goron016.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron016:talk30', 'IsCloseMessageDialog': True})
}
