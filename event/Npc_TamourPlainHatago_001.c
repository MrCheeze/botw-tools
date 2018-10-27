-------- EventFlow: Npc_TamourPlainHatago_001 --------

Actor: Npc_TamourPlainHatago_001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckTimeType', 'CheckPlayerState', 'RandomChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call KaifaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC001_First'}) {
        if Npc_TamourPlainHatago_001.IsOnInstEventFlag() {
            Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk13'})
            Event32:
            Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk12'})
            Event33:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk16'})
                if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC001_YagiYado'}) {
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk18'})
                    Event56:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk26'})
                    goto Event33
                } else {
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk17'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareHatago_NPC001_YagiYado'})
                    goto Event56
                }
              case 1:

                call KirutonAppear()

                if !EventSystemActor.RandomChoice2() {
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk25'})
                    goto Event56
                } else {
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk24'})
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk23'})
                    goto Event56
                }
              case 2:
                if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC001_YouFirst'}) {
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk20'})
                    Event47:
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk21'})
                    goto Event56
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC001_YouFirst', 'IsWaitFinish': True})
                    Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk15'})
                    goto Event47
                }
              case 3:
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk14'})
            }
        } else {
            goto Event32
        }
    } else {
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk03'})
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk05'})
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk06'})

        call KirutonAppear()

        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk24'})
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk22'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC001_First', 'IsWaitFinish': True})
    }
}

void KaifaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        if Npc_TamourPlainHatago_001.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk08'})
                Event41:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Event13:
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk07'})
                goto Event41
            }
        } else {
            goto Event13
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            if Npc_TamourPlainHatago_001.IsOnInstEventFlag() {
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk10'})
                goto Event41
            } else {
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk09'})
                goto Event41
            }
        } else {
            if Npc_TamourPlainHatago_001.IsOnInstEventFlag() {
                Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk04'})
            } else {
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event19:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk00'})
                      case 1:
                        goto Event19
                      case 2:
                        Event20:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk01'})
                      case 3:
                        goto Event20
                      case 4:
                        goto Event20
                      case 5:
                        goto Event20
                      case 6:
                        Event21:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk02'})
                      case 7:
                        goto Event21
                    }
                  case 1:
                    Event63:
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event64:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk29'})
                      case 1:
                        goto Event64
                      case 2:
                        Event65:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk30'})
                      case 3:
                        goto Event65
                      case 4:
                        goto Event65
                      case 5:
                        goto Event65
                      case 6:
                        Event66:
                        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk31'})
                      case 7:
                        goto Event66
                    }
                  case 2:
                    goto Event63
                  case 3:
                    goto Event63
                }
            }
        }
    }
}

void KirutonAppear() {
    if EventSystemActor.CheckFlag({'FlagName': 'KirutonDokuro_Delete'}) {
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk28'})
        Event48:
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk19'})
    } else {
        Npc_TamourPlainHatago_001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_001:talk27'})
        goto Event48
    }
}
