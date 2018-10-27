-------- EventFlow: Npc_Road_004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_004"), 'Flag': 'Npc_Road_004_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event153:
            Npc_Road_004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_004:Near00'})
          case 1:
            goto Event153
          case 2:
            Event152:
            Npc_Road_004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_004:Near01'})
          case 3:
            goto Event152
          case 4:
            Event122:
            Npc_Road_004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_004:Near02'})
          case 5:
            goto Event122
          case 6:
            Event123:
            Npc_Road_004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_004:Near03'})
          case 7:
            goto Event123
        }
      case 1:
        Event120:
        Npc_Road_004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_004:Near04'})
      case 2:
        goto Event120
      case 3:
        goto Event120
    }
}

void MSG_Futa_00() {

    call Rain2()

    switch Npc_Road_004.CheckActorAction13() {
      case 0:
        Event161:
        if Npc_Road_004.IsOnInstEventFlag() {
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_00_1'})
            Event166:

            call Rest_End()

        } else {
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_00'})
            goto Event166
        }
      case 1:
        goto Event161
      case 2:
        Event175:
        if Npc_Road_004.IsOnInstEventFlag() {
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_02_1'})
            goto Event166
        } else {
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_02'})
            goto Event166
        }
      case 3:
        goto Event175
      case 4:
        goto Event175
      case 5:
        goto Event175
      case 6:
        goto Event175
      case 7:
        goto Event175
      case 8:
        goto Event175
      case 9:
        goto Event175
      case 10:
        goto Event175
      case 11:
        goto Event175
      case 12:
        goto Event175
      case 13:
        goto Event175
    }
}

void RetMSG_Futa_00() {

    call Rest2()

    goto Event161
}

void MSG_Futa_01() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_01_1'})
        goto Event166
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_01'})
        goto Event166
    }
}

void RetMSG_Futa_01() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_02_1'})
        Event193:

        call Rest_End()

    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_02'})
        goto Event193
    }
}

void MSG_Futa_02() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_00_1'})
        goto Event166
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_00'})
        goto Event166
    }
}

void RetMSG_Futa_02() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_01_1'})
        goto Event193
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_01'})
        goto Event193
    }
}

void MSG_Futa_03() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_03_1'})
        goto Event166
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_03'})
        goto Event166
    }
}

void RetMSG_Futa_03() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_04_1'})
        goto Event193
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:MSG_Futa_04'})
        goto Event193
    }
}

void MSG_Futa_04() {

    call Rest2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_03_1'})
        goto Event166
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_03'})
        goto Event166
    }
}

void RetMSG_Futa_04() {

    call Rain2()

    if Npc_Road_004.IsOnInstEventFlag() {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_04_1'})
        goto Event193
    } else {
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:RetMSG_Futa_04'})
        goto Event193
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_004.IsRest() {
        Event129:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:Rest_00'})
            Event133:

            call Rest_End()

          case 1:
            Event131:
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:Rest_01'})
            goto Event133
          case 2:
            goto Event131
          case 3:
            goto Event131
        }
    } else {
        if Npc_Road_004.IsArriveAnchorForRain() {
            Event132:
            Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:Rest_02'})
            goto Event133
        } else {
            Event156:
            if Npc_Road_004.IsOnInstEventFlag() {
                Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
                goto Event133
            } else {
                Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
                goto Event133
            }
        }
    }
}

void Rest_End() {
    Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:Talk01'})
    Event71:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_004")})

        Event88:
        Npc_Road_004.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_004:Talk02'})
        goto Event71
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_004")})

        goto Event88
      case 2:
        Npc_Road_004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_004:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        goto Event156
      case 1:
        goto Event131
      case 2:
        goto Event131
      case 3:
        goto Event131
    }
}

void Rain2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event131
      case 2:
        goto Event131
      case 3:
        goto Event131
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_004.IsRest() {
        goto Event129
    } else {
        if Npc_Road_004.IsArriveAnchorForRain() {
            goto Event132
        }
    }
}
