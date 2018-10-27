-------- EventFlow: Npc_Kakariko004 --------

Actor: Npc_Kakariko004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePosture']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'CheckAddPorchItem', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_full'}) {
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_H', 'Count': 1}) {
            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk28'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_H'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_1stReward'})
            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk29'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Finish'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_full'})
        } else
        switch Npc_Kakariko004.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk19'})
          case 11:
            Event6:
            switch Npc_Kakariko004.CheckActorAction13() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_1stReward'}) {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk15'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk16'})
                    } else {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk21'})
                    }
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk00'})
                }
              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_1stReward'}) {
                    if Npc_Kakariko004.IsArriveAnchorForRain() {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk22'})
                        Event111:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk16'})
                        } else {
                            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk21'})
                        }
                    } else {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk14'})
                        goto Event111
                    }
                } else
                if Npc_Kakariko004.IsArriveAnchorForRain() {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk03', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Talk'})
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk05'})
                }
              case 2:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_1stReward'}) {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk23'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk17'})
                    } else {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk21'})
                    }
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk06', 'ASName': 'Talk'})
                }
              case 3:
                Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk07'})
              case 4:
                Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk08', 'ASName': ''})
              case 5:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_1stReward'}) {
                    if Npc_Kakariko004.IsArriveAnchorForRain() {
                        Npc_Kakariko004.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk26'})
                    } else {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk24'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk25'})
                        } else {
                            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk21'})
                        }
                    }
                } else
                if Npc_Kakariko004.IsArriveAnchorForRain() {
                    Npc_Kakariko004.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk26'})
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk09', 'ASName': 'Act_SitChair_Wait'})
                }
              case [6, 7]:

                call Kakariko_Ch_005.Finish_Npc_Kakariko004_Talk()

              case 10:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_004in007house'}) {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk27', 'ASName': ''})
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk10'})
                }
              case 11:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk11', 'ASName': ''})
                  case [1, 2]:
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk31'})
                  case 3:
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk30'})
                }
              case 12:
                switch EventSystemActor.CheckWeather() {
                  case [0, 2, 3]:
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Run'})
                    Event101:

                    call Kakariko_Ch_005.Ready_Npc_Kakariko004_Talk()

                  case 1:
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko004:Talk04', 'ASName': 'Talk_Run'})
                    goto Event101
                }
            }
        }
    } else
    goto Event6
}

void NearActorsTalk() {
    Event144:

    call Npc_Kakariko007.NearActorsTalk()

}

void NearActorsNear() {
    Event145:
    ;
}

void Kakariko_Ch_005_Kakurenbo_NearActorsTalk() {
    goto Event144
}

void Kakariko_Ch_005_Kakurenbo_NearActorsNear() {
    goto Event145
}
