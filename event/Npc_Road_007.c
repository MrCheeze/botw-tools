-------- EventFlow: Npc_Road_007 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event13:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near00'})
          case 1:
            goto Event13
          case 2:
            Event14:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near01'})
          case 3:
            goto Event14
          case 4:
            Event15:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near02'})
          case 5:
            goto Event15
          case 6:
            Event16:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near03'})
          case 7:
            goto Event16
        }
      case 1:
        Event12:
        Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near04', 'DispFrame': 90, 'IsChecked': False})
      case 2:
        goto Event12
      case 3:
        goto Event12
    }
}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_007"), 'Flag': 'Npc_Road_007_CookReward'})

}

void MSG_Orud_00() {

    call Rest2()

    if Npc_Road_007.IsOnInstEventFlag() {
        Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_00_1'})
    } else {
        Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_00'})
    }
}

void RetMSG_Orud_00() {

    call Rest2()

    switch Npc_Road_007.CheckActorAction13() {
      case 0:
        Event93:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_00_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_00'})
        }
      case 1:
        goto Event93
      case 2:
        Event98:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_01_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_01'})
        }
      case 3:
        goto Event98
      case 4:
        goto Event98
      case 5:
        goto Event98
      case 6:
        goto Event98
      case 7:
        goto Event98
      case 8:
        goto Event98
      case 9:
        goto Event98
      case 10:
        goto Event98
      case 11:
        goto Event98
      case 12:
        goto Event98
      case 13:
        goto Event98
    }
}

void MSG_Orud_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_01', 'MessageId_1': 'EventFlowMsg/Npc_Road_007:MSG_Orud_01_1'})

}

void RetMSG_Orud_01() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_02_1'})

}

void MSG_Orud_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_02', 'MessageId_1': 'EventFlowMsg/Npc_Road_007:MSG_Orud_02_1'})

}

void RetMSG_Orud_02() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_03', 'MessageId_1': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_03_1'})

}

void MSG_Orud_03() {

    call Rest2()

    switch Npc_Road_007.CheckActorAction13() {
      case 0:
        Event88:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_03_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_03'})
        }
      case 1:
        goto Event88
      case 2:
        Event84:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_04_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_04'})
        }
      case 3:
        goto Event84
      case 4:
        goto Event88
      case 5:
        goto Event88
      case 6:
        goto Event88
      case 7:
        goto Event88
      case 8:
        goto Event88
      case 9:
        goto Event88
      case 10:
        goto Event88
      case 11:
        goto Event88
      case 12:
        goto Event88
      case 13:
        goto Event88
    }
}

void RetMSG_Orud_03() {

    call Rest({'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_04', 'MessageId_1': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_04_1'})

}

void Rest_End() {
    Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Talk01'})
    Event30:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_007")})

        Event44:
        Npc_Road_007.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Talk02'})
        goto Event30
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_007")})

        goto Event44
      case 2:
        Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_007:GoodBye00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_007.IsRest() {
        Event55:
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Rest_00'})
            Event59:

            call Rest_End()

        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Rest_01'})
            goto Event59
        }
    } else {
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
            goto Event59
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
            goto Event59
        }
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_007.IsRest() {
        goto Event55
    }
}
