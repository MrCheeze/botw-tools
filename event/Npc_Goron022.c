-------- EventFlow: Npc_Goron022 --------

Actor: Npc_Goron022
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckTimeType', 'GeneralChoice4', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_First'}) {

        call KukurenHello()

        Event21:
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk03'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Gem'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk24'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_Gem'})
                Event29:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_FireRelic'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk26'})
                        Event59:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_CheckRelic'})
                    } else {
                        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk25'})
                        goto Event59
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk26'})
                    Event30:
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron022_FireRelic', 'IsWaitFinish': True})
                    goto Event59
                } else {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk17', 'IsOverWriteLabelActorName': False})
                    goto Event30
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Sightseeing'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk23'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron022_Sightseeing', 'IsWaitFinish': True})
                goto Event29
            } else
            goto Event29
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_CheckRelic'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk22'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_CheckRelic'})
                Event41:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Sightseeing'}) {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk20'})
                    Event42:
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron022_Sightseeing', 'IsWaitFinish': True})
                } else {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk14', 'IsOverWriteLabelActorName': False})
                    goto Event42
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Gem'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk24'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_Gem'})
                goto Event41
            } else
            goto Event41
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_CheckRelic'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk22'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_CheckRelic'})
                Event39:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Gem'}) {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk18'})
                    Event38:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron022_Gem'})
                } else {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk15', 'IsOverWriteLabelActorName': False})
                    goto Event38
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_Sightseeing'}) {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk23'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron022_Sightseeing', 'IsWaitFinish': True})
                goto Event39
            } else
            goto Event39
          case 3:
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk13', 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk00', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk27'})
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk02', 'IsOverWriteLabelActorName': False})
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk04'})
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron022_First', 'IsWaitFinish': True})
        } else {
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk01', 'IsOverWriteLabelActorName': False})
        }
    }
}

void Near() {
    Event9:
    Npc_Goron022.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:near00', 'IsChecked': False, 'DispFrame': 90})
}

void KukurenHello() {
    if Npc_Goron022.IsOnInstEventFlag() {
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk12', 'IsOverWriteLabelActorName': False})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk06', 'IsOverWriteLabelActorName': False})
      case [2, 3, 4, 5]:
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk07', 'IsOverWriteLabelActorName': False})
      case [6, 7]:
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk08', 'IsOverWriteLabelActorName': False})
    }
}

void Clear_RemainsFire_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Npc_Goron022_AfterTalk'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Npc_Goron022_Omiyage'}) {
                    Event33:

                    call KukurenHello()

                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_AfterFirst'}) {
                        goto Event21
                    } else {
                        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron022:talk21'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron022_AfterFirst', 'IsWaitFinish': True})
                    }
                } else {

                    call KukurenHello()

                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk13'})
                    Event92:
                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_F', 'Count': 1}) {

                        call GetDemo.GetItemByName({'CheckTargetActorName': 'Item_Ore_F', 'IsInvalidOpenPouch': False})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Npc_Goron022_Omiyage'})
                        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk11'})
                        Event90:
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron022_AfterFirst'}) {
                            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk15'})
                            goto Event21
                        } else {
                            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk14'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron022_AfterFirst', 'IsWaitFinish': True})
                        }
                    } else {
                        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk12'})
                        goto Event90
                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Npc_Goron022_AfterTalk'})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Npc_Goron022_Talk'}) {
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk08'})
                    Event82:
                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk10'})
                    goto Event92
                } else {

                    call KukurenHello()

                    Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk09'})
                    goto Event82
                }
            }
        } else {
            goto Event33
        }
    } else {
        goto Event33
    }
}

void Clear_RemainsFire_Near() {
    goto Event9
}
