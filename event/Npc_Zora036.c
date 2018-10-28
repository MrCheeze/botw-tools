-------- EventFlow: Npc_Zora036 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckWeather', 'CheckTimeType', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call TorufoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk22'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_NormalFirst'}) {
            Event163:
            Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk14'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora036_NormalFirst'})
            Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk13'})
            goto Event163
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_WaterRainFirst'}) {
                Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk07'})
                Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk22'})
                Event126:
                Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk19'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora036_WaterRainFirst'})
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet07'}) {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk05'})
                } else {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk16'})
                }
                goto Event126
            }
          case [1, 2, 3]:
            Event46:
            if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_WaterActivatedFirst'}) {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk07'})
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk18', 'ASName': ''})
                    Event114:
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk17'})
                    } else {
                        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk10', 'ASName': ''})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora036_WaterActivatedFirst', 'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet07'}) {
                        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk05'})
                    } else {
                        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk06'})
                    }
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk08'})
                    goto Event114
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_WaterReadyFirst'}) {
                Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk07'})
                Event101:
                Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk04'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora036_WaterReadyFirst', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet07'}) {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk05'})
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk09'})
                    goto Event101
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk11'})
                } else {
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk06'})
                    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk15'})
                }
            }
        }
    } else
    goto Event46
}

void TorufoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Zora036.IsOnInstEventFlag() {
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk00', 'ASName': 'Hello'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1, 2, 3, 4, 5]:
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk01', 'ASName': 'Hello'})
      case [6, 7]:
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk02'})
    }
}

void Ready_AmoneneGiant() {

    call TorufoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora036_ReadyFirst'}) {
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk29'})
        Event139:
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk30'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk12'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Giant_ZoraMini_Activated', 'IsWaitFinish': True})
        } else {
            Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk27'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora036_ReadyFirst'})
        Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk26'})
        goto Event139
    }
}

void Near() {
    Npc_Zora036.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora036:near00'})
}

void Finish_AmoneneGiant() {

    call TorufoHello()

    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk37'})
    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk38'})
    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk35'})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk20'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Giant_ZoraMini_Finish'})
}

void Step1_AmoneneGiant() {

    call TorufoHello()

    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk07'})
    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk33'})
    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk34'})
    Npc_Zora036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora036:talk36'})
}

void NearChallenge() {
    Npc_Zora036.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora036:near00', 'DispFrame': 300, 'IsChecked': True})
}
