-------- EventFlow: Npc_SmallOasis003 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['GeneralChoice3', 'CheckEquipArmorSeriesType', 'RandomChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_SmallOasis003.IsOnInstEventFlag() {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_16'})
            Event17:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event47:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SmallOasis003")})

                Event68:
                EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_12', 'ASName': ''})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    goto Event47
                  case 1:
                    Event69:
                    if EventSystemActor.CheckFlag({'FlagName': 'Oasis_Arrow_SoldOut'}) {
                        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_19'})
                        Event72:
                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                            goto Event68
                        } else {
                            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_20'})
                            goto Event68
                        }
                    } else {
                        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_06', 'IsCloseMessageDialog': True, 'ASName': ''})
                        goto Event72
                    }
                  case 2:
                    Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_ReadBook', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_13'})
                }
              case 1:
                goto Event69
              case 2:
                Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitChair_ReadBook'})
            }
        } else {
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_15'})
            goto Event17
        }
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_14'})
        goto Event17
    } else {
        Npc_SmallOasis003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        goto Event17
    }
}

void Near() {
    Npc_SmallOasis003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Near001', 'IsChecked': False, 'DispFrame': 90})
}

void Sell() {
    if Npc_SmallOasis003.CheckPlacedItemSaled() in [0, 1, 2] {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_09'})
          case 1:
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_10'})
          case 2:
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_17'})
          case 3:
            Npc_SmallOasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis003:Talk_18'})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_SmallOasis003")})


    call Sell()

}
