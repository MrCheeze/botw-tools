-------- EventFlow: Npc_HatenoVillage030 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckTimeType', 'GeneralChoice3', 'CheckPlayerState', 'GeneralChoice2', 'CheckFlag', 'RandomChoice2', 'CheckPlayerWeaponFired']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage030
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Katsurada_Hello()

    if Npc_HatenoVillage030.IsOnInstEventFlag() {
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk15'})
        Event7:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk10', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk11', 'IsOverWriteLabelActorName': False})
              case 1:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk12', 'IsOverWriteLabelActorName': False})
              case 2:
                Event11:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk07', 'IsOverWriteLabelActorName': False})
            }
          case 1:
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk09', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk23', 'IsOverWriteLabelActorName': False})
                Event75:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk25', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk24', 'IsOverWriteLabelActorName': False})
                goto Event75
            }
          case 2:
            goto Event11
        }
    } else {
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk14', 'IsOverWriteLabelActorName': False})
        goto Event7
    }
}

void Near() {
    Event92:
    switch Npc_HatenoVillage030.CheckActorAction13() {
      case 1:
        Npc_HatenoVillage030.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_HatenoVillage030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:near01', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void HatenoMini_MyHome_Activated_Talk() {

    call Katsurada_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_Rest'}) {
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk13'})
        Event62:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk18', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk20', 'IsOverWriteLabelActorName': False})
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk37'})
                Event70:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk22', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk21', 'IsOverWriteLabelActorName': False})
                goto Event70
            }
          case 1:
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk09', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk23', 'IsOverWriteLabelActorName': False})
                Event79:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk25', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk24', 'IsOverWriteLabelActorName': False})
                goto Event79
            }
          case 2:
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk07', 'IsOverWriteLabelActorName': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC030_Rest', 'IsWaitFinish': True})
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk17', 'IsOverWriteLabelActorName': False})
        goto Event62
    }
}

void HatenoMini_MyHome_Repurchase_Talk() {

    call Katsurada_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_Repurchase_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_Surprise'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_ReturnHatenoFirst'}) {
                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk32'})
                        if !EventSystemActor.RandomChoice2() {
                            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk34'})
                        } else {
                            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk33'})
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC030_ReturnHatenoFirst'})
                        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk40'})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC030_Surprise'}) {
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk39'})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC030_Surprise', 'IsWaitFinish': True})
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk36'})
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk20', 'IsOverWriteLabelActorName': False})
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk38'})
                }
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk26', 'IsOverWriteLabelActorName': False})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk27', 'IsOverWriteLabelActorName': False})
                  case 1:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk28', 'IsOverWriteLabelActorName': False})
                  case 2:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk29', 'IsOverWriteLabelActorName': False})
                }
            }
        } else {
            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk35'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC030_Repurchase_First', 'IsWaitFinish': True})
        Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk16', 'IsOverWriteLabelActorName': False})
    }
}

void Katsurada_Hello() {
    switch Npc_HatenoVillage030.CheckActorAction13() {
      case [0, 1, 2, 3, 6, 7, 8, 9, 12]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event180:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if Npc_HatenoVillage030.IsOnInstEventFlag() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk50'})
                Event195:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk49'})
                goto Event195
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage030.IsOnInstEventFlag() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk05', 'IsOverWriteLabelActorName': False})
            } else
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk08', 'IsOverWriteLabelActorName': False})
            } else
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch EventSystemActor.CheckTimeType() {
                  case [0, 1]:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk00', 'IsOverWriteLabelActorName': False})
                  case [2, 3, 4, 5]:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk01', 'IsOverWriteLabelActorName': False})
                  case [6, 7]:
                    Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk02', 'IsOverWriteLabelActorName': False})
                }
              case [1, 2, 3]:
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk03', 'IsOverWriteLabelActorName': False})
            }
        }
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event180
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk06', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Yawn'})
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk19', 'IsOverWriteLabelActorName': False})
                Event142:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk04', 'IsOverWriteLabelActorName': False})
                goto Event142
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event146:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk30', 'IsOverWriteLabelActorName': False})
                goto Event142
            } else {
                Npc_HatenoVillage030.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:talk31', 'IsOverWriteLabelActorName': False})
                goto Event142
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event146
        }
    }
}

void HatenoMini_MyHome_Repurchase_Near() {
    goto Event92
}
