-------- EventFlow: Npc_HatenoVillage028 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF']
queries: ['CheckPlayerWeaponFired', 'RandomChoice2', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage028
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event15:
    switch Npc_HatenoVillage028.CheckActorAction13() {
      case 0:

        call TachibouBlueFire()

        Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk11'})
      case 1:

        call TachibouBlueFire()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_DevilSeal_Activated'}) {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk09'})
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk14'})
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk15'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC028_DemonStatue', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC028_Produce'}) {
            Event37:
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk13'})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC028_Produce', 'IsWaitFinish': True})
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk12'})
            goto Event37
        }
      case 10:

        call TachibouBlueFire()

        if Npc_HatenoVillage028.IsOnInstEventFlag()
        && !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk03'})
        } else {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk02'})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        }
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk05'})
        } else {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk04'})
        }
      case 12:

        call TachibouBlueFire()

        Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk06'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk08'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk10'})
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC028_DemonStatue', 'IsWaitFinish': True})
            } else {
                Event30:
                Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk07'})
            }
        } else {
            goto Event30
        }
    }
}

void Near() {
    Event5:
    switch Npc_HatenoVillage028.CheckActorAction13() {
      case 0:
        Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near05', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near06', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near03', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_HatenoVillage028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:near04', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void HatenoNPC028_DemonStatue_Talk() {
    goto Event15
}

void HatenoNPC028_DemonStatue_Near() {
    goto Event5
}

void TachibouBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if Npc_HatenoVillage028.IsOnInstEventFlag()
        && !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk01'})
        } else {
            Npc_HatenoVillage028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage028:talk00'})
        }
        Npc_HatenoVillage028.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}
