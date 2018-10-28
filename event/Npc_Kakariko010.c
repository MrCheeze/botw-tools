-------- EventFlow: Npc_Kakariko010 --------

Actor: Npc_Kakariko010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer', 'Demo_ChangeEmotion']
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckWeather', 'CheckFlag', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice3', 'RandomChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerTorchStand_A_02[Challange_A]
entrypoint: None()
actions: []
queries: ['IsIgnitionByArrowFire']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerTorchStand_A_02[Challange_B]
entrypoint: None()
actions: []
queries: ['IsIgnitionByArrowFire']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerTorchStand_A_02[Challange_C]
entrypoint: None()
actions: []
queries: ['IsIgnitionByArrowFire']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerTorchStand_A_02[Challange_D]
entrypoint: None()
actions: []
queries: ['IsIgnitionByArrowFire']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Light'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Finish'}) {
            Event15:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_Talk'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_SoldOut'}) {
                    Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk13', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Event114:

                        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko010")})

                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk36'})
                    } else {
                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk19'})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Activated'}) {
                    Event165:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Finish'}) {
                        if TwnObj_Village_SheikerTorchStand_A_02[Challange_D].IsIgnitionByArrowFire() {
                            if TwnObj_Village_SheikerTorchStand_A_02[Challange_C].IsIgnitionByArrowFire()
                            && TwnObj_Village_SheikerTorchStand_A_02[Challange_B].IsIgnitionByArrowFire() {
                                if TwnObj_Village_SheikerTorchStand_A_02[Challange_A].IsIgnitionByArrowFire() {
                                    Event166:
                                    Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk31'})
                                    Event36:
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event114
                                    } else
                                    if !EventSystemActor.RandomChoice2() {
                                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk23'})
                                    } else {
                                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk24'})
                                    }
                                } else
                                goto Event165
                            } else {
                                goto Event166
                            }
                        } else
                        if TwnObj_Village_SheikerTorchStand_A_02[Challange_C].IsIgnitionByArrowFire() {
                            goto Event166
                        } else
                        if TwnObj_Village_SheikerTorchStand_A_02[Challange_B].IsIgnitionByArrowFire() {
                            goto Event166
                        } else
                        if TwnObj_Village_SheikerTorchStand_A_02[Challange_A].IsIgnitionByArrowFire() {
                            goto Event166
                        } else
                        Event30:
                        switch EventSystemActor.CheckTimeType() {
                          case [0, 1, 2, 3, 4]:
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk08'})
                            goto Event36
                          case [5, 6]:
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk39'})
                            Event118:
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event114
                            } else {
                                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk21'})
                            }
                          case 7:
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk05', 'IsOverWriteLabelActorName': False})
                            goto Event118
                        }
                    } else {
                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk28'})
                        Event161:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk29', 'IsCloseMessageDialog': True})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk32', 'IsCloseMessageDialog': False})
                            goto Event161
                          case 1:

                            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko010")})

                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk38'})
                            goto Event161
                          case 2:
                            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk30'})
                        }
                    }
                } else
                goto Event30
            } else {
                Event17:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko010_Talk', 'IsWaitFinish': True})
                Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event36
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Arrow'}) {
            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk25'})
        } else {
            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk37'})
        }
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_006_hobi'})
        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk26', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Kakariko010.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_006_Finish', 'IsWaitFinish': True})
    } else
    goto Event15
}

void Sell() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    switch Npc_Kakariko010.CheckPlacedItemSaled() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_Talk'}) {
            Event177:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk10', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case 1:
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk34'})
              case 2:
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk35'})
              case 3:
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk36'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko010_Talk', 'IsWaitFinish': True})
            Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 1:
        Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        goto Event177
    }
}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_SoldOut'}) {
            Npc_Kakariko010.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Near01'})
        } else
        if EventSystemActor.CheckTimeType() in [0, 1, 2, 3, 4, 5, 6, 7] {
            Npc_Kakariko010.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Near00', 'ASKeyName': ''})
        }
      case [1, 2, 3]:
        Npc_Kakariko010.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Near02', 'ASKeyName': ''})
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_Kakariko010")})


    call Sell()

}

void first() {
    goto Event17
}
