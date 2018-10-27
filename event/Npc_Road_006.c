-------- EventFlow: Npc_Road_006 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_006"), 'Flag': 'Npc_Road_006_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event19:
            Npc_Road_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_006:Near00'})
          case 1:
            goto Event19
          case 2:
            Event23:
            Npc_Road_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_006:Near01'})
          case 3:
            goto Event23
          case 4:
            Event24:
            Npc_Road_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_006:Near02'})
          case 5:
            goto Event24
          case 6:
            Event25:
            Npc_Road_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_006:Near03'})
          case 7:
            goto Event25
        }
      case 1:
        Event22:
        Npc_Road_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_006:Near04'})
      case 2:
        goto Event22
      case 3:
        goto Event22
    }
}

void MSG_Orud_00() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_00_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_00'})
    }
}

void RetMSG_Orud_00() {

    call Rain()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_00_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_00'})
    }
}

void MSG_Orud_01() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_MamonoShop'}) {
        if Npc_Road_006.IsOnInstEventFlag() {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_0100_1'})
        } else {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_0100'})
        }
    } else {
        if Npc_Road_006.IsOnInstEventFlag() {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_01_1'})
        } else {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_01'})
        }
    }
}

void RetMSG_Orud_01() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_01_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_01'})
    }
}

void MSG_Orud_02() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_02_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_02'})
    }
}

void RetMSG_Orud_02() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_02_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_02'})
    }
}

void MSG_Orud_03() {

    call Rest()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_MamonoShop'}) {
        if Npc_Road_006.IsOnInstEventFlag() {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_0300_1'})
        } else {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_0300'})
        }
    } else {
        if Npc_Road_006.IsOnInstEventFlag() {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_03_1'})
        } else {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_03'})
        }
    }
}

void RetMSG_Orud_03() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_03_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_03'})
    }
}

void MSG_Orud_04() {

    call Rain()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_04_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:MSG_Orud_04'})
    }
}

void RetMSG_Orud_04() {

    call Rest()

    if Npc_Road_006.IsOnInstEventFlag() {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_04_1'})
    } else {
        Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:RetMSG_Orud_04'})
    }
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_006.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Rest_00'})
            Event85:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 1:
            Event70:
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Rest_01'})
            goto Event85
          case 2:
            goto Event70
          case 3:
            goto Event70
        }
    } else {
        if Npc_Road_006.IsArriveAnchorForRain() {
            Npc_Road_006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_006:Rest_02'})
            goto Event85
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event70
      case 2:
        goto Event70
      case 3:
        goto Event70
    }
}
