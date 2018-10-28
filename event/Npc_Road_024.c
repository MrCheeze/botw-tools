-------- EventFlow: Npc_Road_024 --------

Actor: Npc_Road_024
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_LookAtObject', 'Demo_ChangeEmotion']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_024"), 'Flag': 'Npc_Road_024_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Road_024.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_024:Near00'})
          case [2, 3]:
            Npc_Road_024.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_024:Near01'})
          case [4, 5]:
            Npc_Road_024.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_024:Near02'})
          case [6, 7]:
            Npc_Road_024.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_024:Near03'})
        }
      case [1, 2, 3]:
        Npc_Road_024.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_024:Near04'})
    }
}

void MSG_Rane_00() {

    call Rain()

    switch Npc_Road_024.CheckActorAction13() {
      case [0, 1]:
        Event113:
        if Npc_Road_024.IsOnInstEventFlag() {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_00_1'})
        } else {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_00'})
        }
        Event33:
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:Talk01'})
        Event27:
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_Road_024")})

            Event137:
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:Talk02'})
            Npc_Road_024.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': True})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            goto Event27
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Road_024")})

            goto Event137
          case 2:
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_024:GoodBye00'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_024.IsOnInstEventFlag() {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_00_1', 'IsCloseMessageDialog': False})
            goto Event33
        } else {
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_00', 'IsCloseMessageDialog': True, 'ASName': ''})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_00_2'})
            goto Event33
        }
    }
}

void RetMSG_Rane_00() {

    call Rest()

    goto Event113
}

void MSG_Rane_01() {

    call Rest()

    Event106:
    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_02_1', 'IsCloseMessageDialog': False})
        goto Event33
    } else {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_02', 'IsCloseMessageDialog': True})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_02_2', 'ASName': ''})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_02_3'})
        goto Event33
    }
}

void RetMSG_Rane_01() {

    call Rest()

    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_02_1'})
    } else {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_02'})
    }
    goto Event33
}

void MSG_Rane_02() {

    call Rest()

    switch Npc_Road_024.CheckActorAction13() {
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_024.IsOnInstEventFlag() {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_03_1'})
            goto Event33
        } else {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_03', 'IsCloseMessageDialog': True})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_03_2', 'ASName': ''})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_03_3'})
            goto Event33
        }
      case [2, 3]:
        goto Event106
    }
}

void RetMSG_Rane_02() {

    call Rest()

    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_04_1'})
        goto Event33
    } else {
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_04', 'IsCloseMessageDialog': True})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_04_2'})
        goto Event33
    }
}

void MSG_Rane_03() {

    call Rest()

    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_01_1', 'IsCloseMessageDialog': False})
        goto Event33
    } else {
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_01', 'IsCloseMessageDialog': True, 'ASName': ''})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_01_2'})
        goto Event33
    }
}

void RetMSG_Rane_03() {

    call Rest()

    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_01_1'})
        goto Event33
    } else {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_01', 'IsCloseMessageDialog': True})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_01_2', 'ASName': ''})
        Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_01_3'})
        goto Event33
    }
}

void MSG_Rane_04() {

    call Rest()

    Event108:
    if Npc_Road_024.IsOnInstEventFlag() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_04_1'})
    } else {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:MSG_Rane_04'})
    }
    goto Event33
}

void RetMSG_Rane_04() {

    call Rain()

    switch Npc_Road_024.CheckActorAction13() {
      case [0, 1]:
        goto Event108
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_Road_024.IsOnInstEventFlag() {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_03_1'})
            goto Event33
        } else {
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_03', 'IsCloseMessageDialog': True})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'GameRomHorse00S', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_03_2', 'IsCloseMessageDialog': True, 'ASName': ''})
            Npc_Road_024.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:RetMSG_Rane_03_3'})
            goto Event33
        }
    }
}

void Rest_End() {
    goto Event33
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_024.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:Rest_00'})
            Event56:

            call Rest_End()

          case [1, 2, 3]:
            Event54:
            Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:Rest_01'})
            goto Event56
        }
    } else
    if Npc_Road_024.IsArriveAnchorForRain() {
        Npc_Road_024.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_024:Rest_02'})
        goto Event56
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        goto Event54
    }
}
