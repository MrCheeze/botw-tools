-------- EventFlow: Npc_OasisHylia_001 --------

Actor: Npc_OasisHylia_001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisHylia_001_first'}) {
        Event18:
        if Npc_OasisHylia_001.IsOnInstEventFlag() {
            switch Npc_OasisHylia_001.CheckActorAction13() {
              case 0:
                Event27:
                if !EventSystemActor.RandomChoice2() {
                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_14'})
                } else {
                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_16'})
                }
              case 1:
                Event3:
                switch Npc_OasisHylia_001.CheckActorAction13() {
                  case 0:
                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_05'})
                  case 1:
                    if EventSystemActor.CheckFlag({'FlagName': 'GerudoMiniJewel_Display'}) {
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_03'})
                    } else {
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_17'})
                    }
                  case 2:
                    Npc_OasisHylia_001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                  case 3:
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_11'})
                    } else {
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_04'})
                    }
                  case 4:
                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_06'})
                  case 5:
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Activated'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Delivered'}) {
                            Event9:
                            Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_02'})
                            Event8:
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_07'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_09'})
                                } else {
                                    Event14:
                                    Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_10'})
                                }
                            } else {
                                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Activated'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Delivered'}) {
                                        Event12:
                                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_08'})
                                        goto Event14
                                    } else {
                                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_20'})
                                    }
                                } else {
                                    goto Event12
                                }
                            }
                        } else {
                            Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_18'})
                            goto Event8
                        }
                    } else {
                        goto Event9
                    }
                }
              case 2:
                goto Event27
              case 3:
                goto Event3
              case 4:
                goto Event27
              case 5:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Activated'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_CarryIce_Delivered'}) {
                        Event26:
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_15'})
                        goto Event8
                    } else {
                        Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_19'})
                        goto Event8
                    }
                } else {
                    goto Event26
                }
            }
        } else {
            goto Event3
        }
    } else {
        switch Npc_OasisHylia_001.CheckActorAction13() {
          case 0:
            Event19:
            Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_12', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkSurprise', 'NoErrorCheck': False})
            Npc_OasisHylia_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_001:Talk_13'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisHylia_001_first', 'IsWaitFinish': True})
          case 1:
            goto Event18
          case 2:
            goto Event19
          case 3:
            goto Event18
          case 4:
            goto Event19
          case 5:
            goto Event19
          case 6:
            goto Event19
          case 7:
            goto Event19
          case 8:
            goto Event19
          case 9:
            goto Event19
          case 10:
            goto Event19
          case 11:
            goto Event19
          case 12:
            goto Event19
          case 13:
            goto Event19
        }
    }
}
