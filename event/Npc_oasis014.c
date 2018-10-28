-------- EventFlow: Npc_oasis014 --------

Actor: Npc_oasis014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePosture']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckTimeType', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if Npc_oasis014.CheckActorAction({'ActionName': 'Root/Terror'}) {

        call InitTalk.InitTalk({'Arg_Turn': 6, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_oasis014.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
        Event45:

        call RAIMEI_CK()

        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis014_First'}) {
            if !Npc_oasis014.IsOnInstEventFlag() {

                call hello()

            }
            switch EventSystemActor.CheckTimeType() {
              case [0, 6, 7]:
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis014_ShinjuGJ'}) {
                        Event13:
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_06'})
                    } else {
                        Event32:
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_13'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis014_ShinjuGJ', 'IsWaitFinish': True})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis014_GJ'}) {
                        goto Event13
                    } else {
                        Event3:
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_11'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_05'})
                        }
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_03'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis014_GJ', 'IsWaitFinish': True})
                    }
                } else {
                    goto Event13
                }
              case [1, 2, 3, 4, 5]:
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'})
                    && EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis014_GJ'}) {
                        goto Event32
                    } else {
                        goto Event3
                    }
                } else {
                    Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_02'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_05'})
                    } else {
                        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_04'})
                    }
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {

            call hello()

            Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_12'})
            Event23:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis014_First', 'IsWaitFinish': True})
        } else {

            call hello()

            Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_01'})
            Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_10'})
            goto Event23
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        goto Event45
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_07'})
      case [2, 3, 4]:
        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_08'})
      case [5, 6, 7]:
        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Talk_09'})
    }
}

void RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis014_Raimei_CK'}) {
        Npc_oasis014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis014:Raimei_CK_001'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis014_Raimei_CK'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}
