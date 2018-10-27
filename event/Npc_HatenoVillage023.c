-------- EventFlow: Npc_HatenoVillage023 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckPlayerWeaponFired', 'CheckTimeType', 'RandomChoice2', 'GeneralChoice3', 'GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage023
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage023.CheckActorAction13() {
      case 0:
        Event3:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event2:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage023.IsOnInstEventFlag() {
                    Event7:
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk01'})
                } else {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk00'})
                    goto Event7
                }
            } else {
                if Npc_HatenoVillage023.IsOnInstEventFlag() {
                    Event56:
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk25'})
                } else {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk24'})
                    goto Event56
                }
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC023_Traveler'}) {
                EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC013_GanonTalk', 'IsWaitFinish': True})
                if Npc_HatenoVillage023.IsOnInstEventFlag() {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk19'})
                    Event43:
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk20'})
                    Event32:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk21', 'IsCloseMessageDialog': True})
                        Event69:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk29'})
                        goto Event32
                      case 1:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk22', 'IsCloseMessageDialog': True})
                        goto Event69
                      case 2:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk23', 'IsCloseMessageDialog': True})
                        goto Event69
                      case 3:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk12'})
                    }
                } else {

                    call UmeHello()

                    goto Event43
                }
            } else {
                if Npc_HatenoVillage023.IsOnInstEventFlag() {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk18'})
                    Event23:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk14'})
                        Event28:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk15'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk17'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC023_Traveler', 'IsWaitFinish': True})
                        } else {
                            Event24:
                            Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk16'})
                        }
                      case 1:
                        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk13'})
                        goto Event28
                      case 2:
                        goto Event24
                    }
                } else {

                    call UmeHello()

                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk11'})
                    goto Event23
                }
            }
        }
      case 1:
        goto Event3
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event2
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage023.IsOnInstEventFlag() {
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk07'})
                } else {
                    Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk06'})
                }
            } else {
                Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk05'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event68:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk09'})
            } else {
                Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk08'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event68
        }
    }
}

void UmeHello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event18:
        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk02'})
        Event60:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event59:
            Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk26'})
          case 2:
            goto Event59
          case 3:
            goto Event59
        }
      case 1:
        goto Event18
      case 2:
        Event19:
        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk03'})
        goto Event60
      case 3:
        goto Event19
      case 4:
        Event20:
        Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk04'})
        goto Event60
      case 5:
        goto Event20
      case 6:
        goto Event20
      case 7:
        goto Event20
    }
}

void Talk_Ume_Steal() {
    if !EventSystemActor.CheckWeather() {
        if Npc_HatenoVillage023.CheckActorAction13() {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_HatenoVillage023")})

            Npc_HatenoVillage023.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk27'})
            Npc_HatenoVillage023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:talk28'})
        }
    }
}
