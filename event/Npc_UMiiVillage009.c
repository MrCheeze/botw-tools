-------- EventFlow: Npc_UMiiVillage009 --------

Actor: Npc_UMiiVillage009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ReturnAnchor', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'RandomChoice2', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage010
entrypoint: None()
actions: ['Demo_ReturnAnchor', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage009.CheckActorAction13() {
      case 0:
        Event84:

        call HagiAction1()

      case 1:
        goto Event84
      case 2:
        Event80:

        call HagiAction2()

      case 3:
        goto Event80
    }
}

void Near() {
    Event107:
    if !EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC010_Meeting'}) {
        switch Npc_UMiiVillage009.CheckActorAction13() {
          case 0:
            Event72:
            Npc_UMiiVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            goto Event72
          case 2:
            goto Event72
          case 3:
            Event68:
            Npc_UMiiVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:near01', 'IsChecked': False, 'DispFrame': 90})
          case 4:
            goto Event68
          case 5:
            goto Event68
          case 6:
            goto Event68
          case 7:
            goto Event68
          case 8:
            goto Event68
          case 9:
            goto Event68
          case 10:
            goto Event68
          case 12:
            goto Event68
          case 13:
            goto Event68
        }
    }
}

void Hagi_Richmans_Ready() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage009.CheckActorAction13() {
      case 0:
        Event37:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC009_Ote'}) {
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk12', 'IsCloseMessageDialog': False})
            Event28:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk09', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk06'})
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk07'})
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiMini_RichmansHobby_Activated', 'IsWaitFinish': True})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC009_Ote', 'IsWaitFinish': True})
                Event21:
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk01'})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC009_First'}) {
                Event18:
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk03'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk04'})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk05'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk02', 'IsCloseMessageDialog': False})
                        goto Event28
                    } else {
                        goto Event21
                    }
                } else {
                    goto Event21
                }
            } else {
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk00'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC009_First'})
                    goto Event18
                } else {
                    goto Event21
                }
            }
        }
      case 1:
        goto Event37
      case 2:
        Event82:

        call HagiAction2()

      case 3:
        goto Event82
    }
}

void Hagi_Richmans_Finish() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage009.CheckActorAction13() {
      case 0:
        Event44:
        if Npc_UMiiVillage009.IsOnInstEventFlag() {
            Event9:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk15'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC009_BeatGuardians'}) {
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk20'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk21'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_RichmansHobby_Finish'})
                } else {
                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk17', 'IsOverWriteLabelActorName': False})
                    Event52:
                    Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk19'})
                }
              case 1:
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk11'})
                goto Event52
              case 2:
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk01'})
            }
        } else {
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk16'})
            goto Event9
        }
      case 1:
        goto Event44
      case 2:
        Event81:

        call HagiAction2()

      case 3:
        goto Event81
    }
}

void NearActorsTalk() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC010_Meeting'}) {

        call Npc_UMiiVillage010.NearActorsTalk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


        fork {
            Npc_UMiiVillage009.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_UMiiVillage009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_UMiiVillage010', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True})
            if !EventSystemActor.RandomChoice2() {
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk10', 'ASName': 'Talk'})
            } else {
                Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk13', 'ASName': 'Wait'})
            }
        } {
            Npc_UMiiVillage010.Demo_ReturnAnchor({'IsWaitFinish': True})
            Npc_UMiiVillage010.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_UMiiVillage009', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_UMiiVillage010.Demo_PlayASForDemo({'ASName': 'Meeting', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'IsWaitFinish': False})
        }

    }
}

void NearActorsNear() {
    goto Event107
}

void HagiAction2() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_GiveCake_Finish'}) {
        Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk24'})
    } else {
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk27'})
        } else {
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk23'})
        }
    }
}

void HagiAction1() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_GiveCake_Finish'}) {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event83:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk26'})
          case 1:
            goto Event83
          case 2:
            goto Event83
          case 3:
            goto Event83
          case 4:
            Event98:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk28'})
          case 5:
            goto Event98
          case 6:
            Event96:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk29'})
          case 7:
            goto Event96
        }
    } else {
        if Npc_UMiiVillage009.IsOnInstEventFlag() {
            Event60:
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk22'})
        } else {
            Npc_UMiiVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:talk16'})
            goto Event60
        }
    }
}

void NearChallenge() {
    if !EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC010_Meeting'}) {
        switch Npc_UMiiVillage009.CheckActorAction13() {
          case 0:
            Event92:
            Npc_UMiiVillage009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage009:near00', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            goto Event92
          case 2:
            goto Event72
          case 3:
            goto Event68
          case 4:
            goto Event68
          case 5:
            goto Event68
          case 6:
            goto Event68
          case 7:
            goto Event68
          case 8:
            goto Event68
          case 9:
            goto Event68
          case 10:
            goto Event68
          case 12:
            goto Event68
          case 13:
            goto Event68
        }
    }
}

void UMiiMini_GiveCake_Give_Talk() {
    goto Event1
}
