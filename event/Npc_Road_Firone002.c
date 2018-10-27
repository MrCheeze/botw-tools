-------- EventFlow: Npc_Road_Firone002 --------

Actor: Npc_Road_Firone002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckPlayerRideHorse', 'GeneralChoice3', 'GeneralChoice2', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_Firone002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk24'})
        Event5:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone002_MaronRevivalTalk'}) {
            Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk06'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'RevivalGreatFairy5'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone002_Talk'}) {
                Event10:
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk05'})
                if !EventSystemActor.GeneralChoice2() {
                    Event53:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk07', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Road_Firone2_Talk2'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_Firone002_MaronRevivalTalk', 'IsWaitFinish': True})
                } else {
                    Event54:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk23'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone2_Talk2'}) {
                goto Event10
            } else {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk04'})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event53
                } else {
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk25'})
                    goto Event54
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HorseEnemy_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone002_Talk'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Road_Firone2_Talk2'})
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk03'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk17'})
                } else {
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk18'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone2_Talk2'}) {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk22'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Road_Firone2_Talk2'})
                if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_HorseEnemy_TalkMaron'}) {
                    if EventSystemActor.CheckPlayerRideHorse() {
                        Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk02'})
                        Event44:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk20'})
                        } else {
                            Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk21'})
                        }
                    } else {
                        Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk19'})
                        goto Event44
                    }
                } else
                if EventSystemActor.CheckPlayerRideHorse() {
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk26'})
                    Event70:
                    if EventSystemActor.GeneralChoice2() in [0, 1] {
                        Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk20'})
                    }
                } else {
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk27'})
                    goto Event70
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Road_Firone002_Talk'}) {
            Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk15'})
            } else {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk16'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Road_Firone002_Talk', 'IsWaitFinish': True})
            if EventSystemActor.CheckPlayerRideHorse() {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk00'})
                Event23:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk09'})
                    Event27:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk12'})
                    if EventSystemActor.CheckPlayerRideHorse() {
                        Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk13'})
                    }
                  case 1:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk10'})
                    Event32:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk14'})
                    goto Event27
                  case 2:
                    Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk11'})
                    goto Event32
                }
            } else {
                Npc_Road_Firone002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Talk08'})
                goto Event23
            }
        }
    } else
    goto Event5
}

void Near() {
    switch Npc_Road_Firone002.CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_Road_Firone002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Near01'})
        }
      case 10:
        Npc_Road_Firone002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Near02'})
      case 11:
        Npc_Road_Firone002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_Firone002:Near00'})
    }
}
