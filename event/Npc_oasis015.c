-------- EventFlow: Npc_oasis015 --------

Actor: Npc_oasis015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice3', 'CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Clothes_SoldOut'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis015_talk'}) {
                Event59:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Clothes_SoldOut'}) {
                    Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_016'})
                    Event40:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_006', 'IsCloseMessageDialog': True})
                        Npc_oasis015.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_010'})
                        goto Event40
                      case 1:
                        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_008'})

                        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis015")})

                        Npc_oasis015.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_009', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                        goto Event40
                      case 2:
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event65:
                            Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_014'})
                          case 1:
                            goto Event65
                          case 2:
                            Event42:
                            Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_007'})
                          case 3:
                            goto Event42
                          case 4:
                            goto Event65
                          case 5:
                            goto Event65
                          case 6:
                            Event41:
                            Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_003'})
                          case 7:
                            goto Event41
                        }
                    }
                } else {
                    if Npc_oasis015.IsOnInstEventFlag() {
                        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_015'})
                        goto Event40
                    } else {

                        call hello()

                        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_004'})
                        goto Event40
                    }
                }
            } else {
                Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_019'})
                Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_018'})
                Event86:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis015_talk', 'IsWaitFinish': True})
                goto Event40
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis015_talk'}) {
                goto Event59
            } else {
                Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_019'})
                Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_017'})
                goto Event86
            }
        }
    } else {
        goto Event59
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Clothes_SoldOut'}) {
        Npc_oasis015.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_Near01', 'ASKeyName': 'Act_Touting'})
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Armor({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName', 'Self': ActorIdentifier(name="Npc_oasis015")})


    call Sell()

}

void Sell() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_01'})
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_02'})
      case 1:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_07'})
      case 2:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_08'})
      case 3:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_10'})
    }
}

void AttentionDemo() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis015")})

    Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Talk_09'})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_011'})
      case 1:
        Event97:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_019'})
      case 2:
        Event89:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_012'})
      case 3:
        goto Event97
      case 4:
        goto Event89
      case 5:
        goto Event97
      case 6:
        Npc_oasis015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis015:Npc_oasis015_013'})
      case 7:
        goto Event97
    }
}
