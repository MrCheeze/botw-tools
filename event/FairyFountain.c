-------- EventFlow: FairyFountain --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ShowMemoryPhoto', 'Demo_WaitFrame', 'Demo_FlagON']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckSelectPicture']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_artist_009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_NPC_artist_009_Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call NPC_artist_009.Talk()

}

void Ready_NPC_artist_009_Near() {
    Event15:
    NPC_artist_009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_R_Near', 'IsChecked': True, 'DispFrame': 300})
}

void Finish_NPC_artist_009_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_FairySpring_A_01'}) {
        goto Event15
    } else {
        NPC_artist_009.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_R_Near', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Ready_NPC_artist_009_Npc_Kakariko_Artist_Guide_Talk() {
    Event49:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call NPC_artist_009.Npc_Kakariko_Artist_Guide_Talk()

}

void Ready_NPC_artist_009_Npc_Kakariko_Artist_GuideFinish_Talk() {
    Event51:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call NPC_artist_009.Npc_Kakariko_Artist_Gate_Talk()

}

void Finish_NPC_artist_009_Talk() {
    goto Event0
}

void Finish_NPC_artist_009_Npc_Kakariko_Artist_Guide_Talk() {
    goto Event49
}

void Finish_NPC_artist_009_Npc_Kakariko_Artist_GuideFinish_Talk() {
    goto Event51
}

void found_fairy() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        NPC_artist_009.Demo_Talk({'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Event8:
        if !EventSystemActor.GeneralChoice2() {
            NPC_artist_009.Demo_Talk({'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_002', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

            call Common.LookPicture({'ActorName': 'TwnObj_FairySpring_A_01', 'Self': ActorIdentifier(name="NPC_artist_009")})

            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_005', 'IsCloseMessageDialog': True})

            call Common.ShowSheikPad({'Self': ActorIdentifier(name="NPC_artist_009")})

            EventSystemActor.Demo_ShowMemoryPhoto({'IsWaitFinish': True, 'PhotoNo': 10})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_006', 'IsCloseMessageDialog': True})

            call Common.TidyUpSheikPadAfterPicture({'Self': ActorIdentifier(name="NPC_artist_009")})

            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_007', 'IsCloseMessageDialog': True})
            NPC_artist_009.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FairyFountain_Finish'})
        } else {
            NPC_artist_009.Demo_Talk({'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_003', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 1:
        Event61:
        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_011'})
        goto Event8
      case 2:
        goto Event61
      case 3:
        goto Event61
    }
}
