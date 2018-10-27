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
          case [0, 1]:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near00'})
          case [2, 3]:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near01'})
          case [4, 5]:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near02'})
          case [6, 7]:
            Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Road_007:Near04', 'DispFrame': 90, 'IsChecked': False})
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
      case [0, 1]:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_00_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_00'})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_01_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:RetMSG_Orud_01'})
        }
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
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_03_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_03'})
        }
      case [2, 3]:
        if Npc_Road_007.IsOnInstEventFlag() {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_04_1'})
        } else {
            Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_007:MSG_Orud_04'})
        }
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
    } else
    if Npc_Road_007.IsOnInstEventFlag() {
        Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId_1'})
        goto Event59
    } else {
        Npc_Road_007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
        goto Event59
    }
}

void Rest2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_007.IsRest() {
        goto Event55
    }
}
