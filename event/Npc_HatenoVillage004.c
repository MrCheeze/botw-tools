-------- EventFlow: Npc_HatenoVillage004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckPlayerWeaponFired', 'GeneralChoice2', 'GeneralChoice4', 'CheckWeather', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage004.CheckActorAction13() {
      case 10:

        call SotetsuGoHome()

      case 11:

        call SotetsuSleep()

      case 12:

        call Sotetsu_BlueFire()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC004_Fukuya'}) {
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk07'})
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk00'})
            if !EventSystemActor.GeneralChoice2() {
                Event145:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HatenoVillage004.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2})
                Event66:
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk02'})
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk19'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC004_OK'})
            } else {
                Event67:
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk01'})
            }
          case [1, 2, 3]:
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk22'})
            switch EventSystemActor.GeneralChoice4() {
              case 1:
                goto Event145
              case 2:
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk20'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HatenoVillage004.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    goto Event66
                } else {
                    goto Event67
                }
              case 3:
                goto Event67
            }
        }
    }
}

void HatenoNPC004_OK_Talk() {
    Event170:
    switch Npc_HatenoVillage004.CheckActorAction13() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC004_Area1'}) {
            Event182:

            call Sotetsu_BlueFire()

            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk03'})
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk13'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC004_Yorozu', 'IsWaitFinish': True})
        } else {
            Event178:

            call SotetsuNext()

        }
      case 1:
        goto Event182
      case 2:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC004_Area2'}) {
            Event186:

            call Sotetsu_BlueFire()

            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk04'})
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk13'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC004_Somemonoya', 'IsWaitFinish': True})
        } else {
            goto Event178
        }
      case 3:
        goto Event186
      case 4:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC004_Area3'}) {
            Event190:

            call Sotetsu_BlueFire()

            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk05'})
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk13'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC004_Yadoya', 'IsWaitFinish': True})
        } else {
            goto Event178
        }
      case 5:
        goto Event190
      case 6:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC004_Area4'}) {
            Event194:

            call Sotetsu_BlueFire()

            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk06'})
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk07'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC004_Fukuya', 'IsWaitFinish': True})
        } else {
            goto Event178
        }
      case 7:
        goto Event194
      case 10:

        call SotetsuGoHome()

      case 11:

        call SotetsuSleep()

      case 12:

        call Sotetsu_BlueFire()

        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk26'})
        } else {
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk27'})
        }
    }
}

void HatenoNPC004_Yorozu_Talk() {
    goto Event170
}

void HatenoNPC004_Somemonoya_Talk() {
    goto Event170
}

void HatenoNPC004_Yadoya_Talk() {
    goto Event170
}

void HatenoNPC004_Fukuya_Talk() {
    goto Event170
}

void HatenoNPC004_OK_Near() {
    Event110:
    switch Npc_HatenoVillage004.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
        Npc_HatenoVillage004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:near02', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Event115:
        Npc_HatenoVillage004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:near03', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Event116:
        Npc_HatenoVillage004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:near04', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Near() {
    Event114:
    switch Npc_HatenoVillage004.CheckActorAction13() {
      case 10:
        goto Event115
      case 11:
        goto Event116
      case 12:
        Npc_HatenoVillage004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void HatenoNPC004_Yorozu_Near() {
    goto Event110
}

void HatenoNPC004_Somemonoya_Near() {
    goto Event110
}

void HatenoNPC004_Yadoya_Near() {
    goto Event110
}

void HatenoNPC004_Fukuya_Near() {
    goto Event114
}

void Sotetsu_BlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if Npc_HatenoVillage004.IsOnInstEventFlag() {
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk12'})
            } else {
                Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk10'})
            }
            Event120:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else
        if Npc_HatenoVillage004.IsOnInstEventFlag() {
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk18'})
        } else {
            Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk17'})
        }
        goto Event120
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}

void SotetsuSleep() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
    Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk09'})
}

void SotetsuGoHome() {

    call Sotetsu_BlueFire()

    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk08'})
    } else {
        Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk16'})
    }
}

void SotetsuNext() {

    call Sotetsu_BlueFire()

    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk24'})
    } else {
        Npc_HatenoVillage004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage004:talk25'})
    }
}
