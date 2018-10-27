-------- EventFlow: Npc_Zora014 --------

Actor: Npc_Zora014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_EnableCameraInput', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Near() {
    Event28:
    switch Npc_Zora014.CheckActorAction13() {
      case 1:
        Npc_Zora014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora014:near00', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Zora014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora014:near01', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Talk() {

    call SegonA1First()

}

void SegonA1First() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_First'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk06'})
    } else {

        call SegonCamera()

        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora014_First', 'IsWaitFinish': True})
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk00', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Arrow_Touch'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk01', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Arrow_Touch'})
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk02', 'IsCloseMessageDialog': True})
        Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 1, 'IsConfront': True})
        Event120:

        call SegonExplain()

        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk05', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
    }
}

void SegonEtcFirst() {
    Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 1, 'IsConfront': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_First'}) {
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk22'})
        goto Event120
    }
}

void SegonHello() {
    if Npc_Zora014.IsOnInstEventFlag() {
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk08', 'ASName': ''})
    } else {
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk07', 'ASName': ''})
    }
}

void SegonCamera() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Zora014', 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } {
        Npc_Zora014.Demo_BecomeSpeaker({'IsWaitFinish': True})
    }

}

void Talk_Segon_Steal() {
    if Npc_Zora014.CheckActorAction13() {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Npc_Zora014', 'EntryPointName': 'Talk_Segon_Steal_Demo', 'EndFade': 1, 'IsWaitFinish': True})
    }
}

void Npc_Zora014_GetArrow_Near() {
    goto Event28
}

void Water_Relic_Step5_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora014.CheckActorAction13() {
      case [2, 3, 10]:
        Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 1, 'IsConfront': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_NormalFirst'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon01'}) {
                    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_100'})
                } else {
                    Event88:
                    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk21'})
                }
            } else {
                goto Event88
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora014_NormalFirst'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_First'}) {
                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk20'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora014_First', 'IsWaitFinish': True})
                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk19'})
            }
        }
      case 11:
        Event71:
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk17'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk18'})
        } else {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk15'})
        }
    }
}

void Npc_Zora014_GetArrow_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_RainStop'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_RainFirst'}) {
                Event43:
                switch Npc_Zora014.CheckActorAction13() {
                  case [2, 3]:

                    call SegonEtcFirst()


                    call SegonHello()

                    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk10', 'ASName': ''})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk11', 'ASName': ''})
                        Event64:
                        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk13', 'ASName': ''})
                    } else {
                        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk12', 'ASName': ''})
                        goto Event64
                    }
                  case 10:

                    call SegonEtcFirst()


                    call SegonHello()

                    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk14', 'ASName': ''})
                  case 11:
                    goto Event71
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora014_RainFirst', 'IsWaitFinish': True})
                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk16'})
            }
          case [1, 2, 3]:
            goto Event43
        }
    } else
    goto Event43
}

void SegonExplain() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora014_First', 'IsWaitFinish': True})
    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk23', 'ASName': 'Surprised'})
    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk24'})
    Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk04', 'IsCloseMessageDialog': False})
}

void Talk_Segon_Steal_Demo() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_Zora014")})

    Npc_Zora014.Demo_BecomeSpeaker({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Step5'}) {
        Event110:
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk25', 'IsCloseMessageDialog': True})
        Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk28'})
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Step5'}) {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk27'})
        } else {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk29'})
            Event112:
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk26', 'IsCloseMessageDialog': True})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_First'}) {
        goto Event110
    } else {
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk25', 'IsCloseMessageDialog': True})
        Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora014:talk31'})

        call SegonExplain()

        Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk30'})
        goto Event112
    }
}
