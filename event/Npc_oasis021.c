-------- EventFlow: Npc_oasis021 --------

Actor: Npc_oasis021
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis021.CheckActorAction13() {
      case 0:
        Event17:
        Npc_oasis021.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
            if Npc_oasis021.IsOnInstEventFlag() {
                Event33:
                Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_07'})
            } else {

                call hello()

                Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_11'})
                goto Event33
            }
        } else {
            if Npc_oasis021.IsOnInstEventFlag() {
                Event16:
                Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_08'})
            } else {

                call hello()

                Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_10'})
                goto Event16
            }
        }
      case 1:
        goto Event17
      case 2:
        Event25:
        if Npc_oasis021.IsOnInstEventFlag() {
            Event5:
            Npc_oasis021.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis021.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else {
                Npc_oasis021.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {

            call hello()

            Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_03'})
            goto Event5
        }
      case 3:
        goto Event25
      case 10:
        if Npc_oasis021.IsOnInstEventFlag() {
            Event9:
            Npc_oasis021.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {

            call hello()

            goto Event9
        }
      case 11:
        Npc_oasis021.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void NearActorsTalk() {
    if Npc_oasis021.CheckActorAction({'ActionName': 'Root/Terror'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_oasis021.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_12'})
    } else {

        call Npc_oasis008.uwasa1()

    }
}

void NearActorsNear() {
    Npc_oasis021.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis021:Near00', 'IsChecked': False, 'DispFrame': 90})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event39:
        Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_13'})
      case 1:
        goto Event39
      case 2:
        Event40:
        Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_14'})
      case 3:
        goto Event40
      case 4:
        goto Event40
      case 5:
        Event41:
        Npc_oasis021.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis021:Talk_15'})
      case 6:
        goto Event41
      case 7:
        goto Event41
    }
}

void Near() {
    if Npc_oasis021.CheckActorAction13() == 11 {
        Npc_oasis021.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_oasis021:Near01'})
    }
}
