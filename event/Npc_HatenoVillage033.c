-------- EventFlow: Npc_HatenoVillage033 --------

Actor: Npc_HatenoVillage033
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckPlayerWeaponFired', 'CheckFlag', 'GeneralChoice2', 'CheckTimeType', 'RandomChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage033.CheckActorAction13() {
      case 0:
        Event72:

        call TamanaBlueFire()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_First'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_GetEgg'}) {
                if Npc_HatenoVillage033.IsOnInstEventFlag() {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk14'})
                    Event73:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk25'})
                          case 1:
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk26'})
                          case 2:
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk28'})
                          case 3:
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk27'})
                        }
                      case 1:
                        Event74:
                        Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk19'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk20'})
                            if !EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_GetEgg4'}) {
                                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC033_GetEgg4', 'IsWaitFinish': True})
                                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk32'})
                                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk30'})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_04'})

                            }
                        } else {
                            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk07'})
                        }
                      case 2:
                        goto Event74
                      case 3:
                        goto Event74
                    }
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event31:
                        Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk15'})
                        goto Event73
                      case 1:
                        goto Event31
                      case 2:
                        Event32:
                        Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk16'})
                        goto Event73
                      case 3:
                        goto Event32
                      case 4:
                        goto Event32
                      case 5:
                        goto Event32
                      case 6:
                        Event30:
                        Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk17'})
                        goto Event73
                      case 7:
                        goto Event30
                    }
                }
            } else {
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk09'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk10'})
                } else {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk11'})
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk29'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_04'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC033_GetEgg'})
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk12'})
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC033_First', 'IsWaitFinish': True})
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk08'})
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk32'})
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk30'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_04'})

        }
      case 1:
        goto Event72
      case 10:

        call TamanaBlueFire()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_DontCome'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_GetEgg3'}) {
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk21'})
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk31'})
            } else {
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk23'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk31'})
                } else {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk11'})
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk30'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_04'})

                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC033_GetEgg3', 'IsWaitFinish': True})
                }
            }
        } else {
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk21'})
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk22'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC033_DontCome', 'IsWaitFinish': True})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event36:
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk24'})
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event36
        }
    }
}

void TamanaBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC033_GetEgg2'}) {
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk05'})
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk06'})
            Event71:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk01'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_04'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC033_GetEgg2'})
                if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk02'})
                    Event12:
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk06'})
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk04'})
                    goto Event71
                } else {
                    Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk03'})
                    goto Event12
                }
            } else {
                Npc_HatenoVillage033.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage033:talk07'})
                goto Event71
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}
