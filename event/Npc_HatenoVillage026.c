-------- EventFlow: Npc_HatenoVillage026 --------

Actor: Npc_HatenoVillage026
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_OpenMessageDialog']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckPlayerWeaponFired', 'GeneralChoice2', 'GeneralChoice3', 'RandomChoice2', 'CheckFlag', 'GeneralChoice4', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage026.CheckActorAction13() {
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event2:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if Npc_HatenoVillage026.IsOnInstEventFlag() {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk02'})
            } else {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk01'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage026.IsOnInstEventFlag() {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk04'})
                Event42:
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk05'})
            } else {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk03'})
                goto Event42
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event34:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk16'})
            } else {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk15'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event34
        }
      case 12:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event2
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC026_First'}) {
                if Npc_HatenoVillage026.IsOnInstEventFlag() {
                    Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk19'})
                    Event46:
                    switch EventSystemActor.GeneralChoice4() {
                      case 1:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk20'})
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk22'})
                            Event52:
                            Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk26'})
                          case 1:
                            Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk23'})
                            goto Event52
                          case 2:
                            Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk24'})
                            goto Event52
                          case 3:
                            Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk25'})
                            goto Event52
                        }
                      case 2:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk13'})
                        Event14:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk21'})

                        call SionDance()

                        Npc_HatenoVillage026.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk10', 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk12'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC026_First', 'IsWaitFinish': True})
                      case 3:
                        Event15:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk00'})
                    }
                } else {
                    Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk06'})
                    goto Event46
                }
            } else {
                Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk07'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk14'})

                    call SionDance()

                    Npc_HatenoVillage026.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk11', 'ASName': '', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk09'})
                      case 1:
                        Npc_HatenoVillage026.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk08'})
                        goto Event14
                      case 2:
                        goto Event15
                    }
                } else {
                    goto Event15
                }
            }
        }
    }
}

void Near() {
    switch Npc_HatenoVillage026.CheckActorAction13() {
      case 10:
        Npc_HatenoVillage026.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage026.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:near03', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Npc_HatenoVillage026.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_HatenoVillage026.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:near00', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void SionDance() {
    Npc_HatenoVillage026.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk17', 'ASName': 'Talk_SakuradaDanceAll', 'IsWaitFinish': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    Npc_HatenoVillage026.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage026:talk18', 'ASName': '', 'IsWaitFinish': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}
