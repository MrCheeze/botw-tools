-------- EventFlow: Npc_HatenoVillage003 --------

Actor: Npc_HatenoVillage003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_StartTurnToPlayer']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'CheckWeather', 'CheckPlayerWeaponFired', 'GeneralChoice3', 'RandomChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage003.CheckActorAction13() {
      case 0:
        Event33:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event32:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage003.IsOnInstEventFlag() {
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk17'})
                } else {
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk04'})
                }
            } else {
                if Npc_HatenoVillage003.IsOnInstEventFlag() {
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk18'})
                } else {
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk16'})
                }
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage003.IsOnInstEventFlag() {
                Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk10'})
                Event35:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk11', 'IsCloseMessageDialog': True})
                    Event62:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk20'})
                    goto Event35
                  case 1:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage003_Who'}) {
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk23'})
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk13', 'IsCloseMessageDialog': False})
                        if !EventSystemActor.RandomChoice2() {
                            Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk25'})
                            goto Event62
                        } else {
                            Event69:
                            Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk24'})
                            goto Event62
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage003_Who', 'IsWaitFinish': True})
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk22'})
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk13', 'IsCloseMessageDialog': False})
                        goto Event69
                    }
                  case 2:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk12'})
                }
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event18:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    Event17:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk09'})
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk06'})
                        Event28:
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk08'})
                      case 1:
                        Event25:
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk05'})
                        Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk07'})
                        goto Event28
                      case 2:
                        goto Event25
                      case 3:
                        goto Event25
                    }
                  case 1:
                    goto Event18
                  case 2:
                    Event20:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk01'})
                    goto Event17
                  case 3:
                    goto Event20
                  case 4:
                    goto Event20
                  case 5:
                    goto Event20
                  case 6:
                    Event22:
                    Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk02'})
                    goto Event17
                  case 7:
                    goto Event22
                }
            }
        }
      case 1:
        goto Event33
      case 2:
        goto Event33
      case 3:
        goto Event33
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event32
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk19'})
            } else {
                Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk03'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event39:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk14'})
            } else {
                Npc_HatenoVillage003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:talk15'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event39
        }
      case 12:
        goto Event33
    }
}

void Near() {
    switch Npc_HatenoVillage003.CheckActorAction13() {
      case 1:
        Event71:
        EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
        Npc_HatenoVillage003.Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 240.0})
        Npc_HatenoVillage003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage003:near00', 'DispFrame': 90, 'IsChecked': False})
      case 3:
        goto Event71
    }
}
