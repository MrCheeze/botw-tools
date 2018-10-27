-------- EventFlow: Npc_NorthHateru005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice2', 'CheckEquipArmorSeriesType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_NorthHateru005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ForbidSettingInstEventFlag', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_NorthHateru005.CheckActorAction13() {
      case 0:
        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk100'})
        Npc_NorthHateru005.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        if Npc_NorthHateru005.IsOnInstEventFlag() {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Event35:
                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk005'})
                Event20:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk010'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Event24:
                        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk040'})
                        if !EventSystemActor.GeneralChoice2() {
                            Event51:
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_NorthHateru005_talk'}) {
                                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk065'})
                                if !EventSystemActor.GeneralChoice2() {
                                    Event28:
                                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk060'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        switch EventSystemActor.CheckWeather() {
                                          case 0:
                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                            Npc_NorthHateru005.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                                            Event42:
                                            Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk061'})
                                            if !EventSystemActor.GeneralChoice2() {
                                                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk062'})
                                                if !EventSystemActor.GeneralChoice2() {
                                                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk063'})
                                                    if !EventSystemActor.GeneralChoice2() {
                                                        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk064'})
                                                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_NorthHateru005_talk', 'IsWaitFinish': True})
                                                    } else {
                                                        Event43:
                                                        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk070'})
                                                    }
                                                } else {
                                                    goto Event43
                                                }
                                            } else {
                                                goto Event43
                                            }
                                          case 1:
                                            goto Event42
                                          case 2:
                                            goto Event42
                                          case 3:
                                            goto Event42
                                        }
                                    } else {
                                        goto Event43
                                    }
                                } else {
                                    goto Event43
                                }
                            } else {
                                goto Event28
                            }
                        } else {
                            Event25:
                            Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk050'})
                        }
                      case 1:
                        goto Event51
                      case 2:
                        goto Event25
                    }
                  case 1:
                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk020'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event51
                    } else {
                        goto Event25
                    }
                  case 2:
                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk030'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event24
                    } else {
                        goto Event25
                    }
                }
              case 1:
                Event55:
                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk101'})
                goto Event35
              case 2:
                goto Event55
              case 3:
                goto Event55
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk000'})
                Event40:
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk002'})
                    goto Event20
                } else {
                    Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk001'})
                    goto Event20
                }
              case 1:
                Event57:
                Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk101'})
                goto Event40
              case 2:
                goto Event57
              case 3:
                goto Event57
            }
        }
      case 2:
        Event36:
        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk110'})
        Npc_NorthHateru005.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 3:
        goto Event36
      case 4:
        goto Event36
      case 5:
        goto Event36
      case 6:
        goto Event36
      case 7:
        goto Event36
      case 8:
        goto Event36
      case 9:
        goto Event36
      case 10:
        goto Event36
      case 11:
        Npc_NorthHateru005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru005:talk120'})
        Npc_NorthHateru005.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 12:
        goto Event36
      case 13:
        goto Event36
    }
}
