-------- EventFlow: Npc_HatenoVillage --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckPlayerWeaponFired', 'GeneralChoice2', 'CheckTimeType', 'GeneralChoice4', 'CheckWeather', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage.CheckActorAction13() {
      case [0, 10]:

        call KusayoshiBlueFire()

        switch EventSystemActor.CheckWeather() {
          case 0:
            Event85:
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC000_First'}) {
                if Npc_HatenoVillage.IsOnInstEventFlag() {
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk06'})
                    Event101:
                    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Activated'}) {
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC000_Labo', 'IsWaitFinish': True})
                        Event102:
                        Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk12'})
                        Event104:
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC000_LaboFirst'}) {
                                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk24', 'IsCloseMessageDialog': False})
                                Event168:
                                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk23'})
                                Event164:
                                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk22'})
                                goto Event104
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC000_LaboFirst', 'IsWaitFinish': True})
                                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk16', 'IsCloseMessageDialog': False})
                                goto Event168
                            }
                          case 1:
                            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk14', 'IsCloseMessageDialog': True})
                            goto Event164
                          case 2:
                            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk15', 'IsCloseMessageDialog': True})
                            goto Event164
                          case 3:
                            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk13'})
                        }
                    } else {
                        goto Event102
                    }
                } else
                switch EventSystemActor.CheckTimeType() {
                  case [0, 1]:
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk07'})
                    goto Event101
                  case [2, 3]:
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk08'})
                    goto Event101
                  case [4, 5, 6, 7]:
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk09'})
                    goto Event101
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC000_First', 'IsWaitFinish': True})
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk02'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk03'})
                    Event90:
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk05'})
                } else {
                    Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk04'})
                    goto Event90
                }
            }
          case [1, 2, 3]:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk19'})
                Event133:
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk21'})
            } else {
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk20'})
                goto Event133
            }
        }
      case 1:

        call KusayoshiBlueFire()

        goto Event85
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event136:
            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk10'})
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event136
        }
    }
}

void Near() {
    switch Npc_HatenoVillage.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near02', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Event126:
            Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near04'})
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near01', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near02', 'IsChecked': False, 'DispFrame': 90})
        }
      case 10:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near03', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            goto Event126
        }
      case 11:
        Npc_HatenoVillage.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void KusayoshiBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if Npc_HatenoVillage.IsOnInstEventFlag() {
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk01'})
                Event161:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk00'})
                goto Event161
            }
        } else
        if Npc_HatenoVillage.IsOnInstEventFlag() {
            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk18'})
            goto Event161
        } else {
            Npc_HatenoVillage.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage:talk17'})
            goto Event161
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}
