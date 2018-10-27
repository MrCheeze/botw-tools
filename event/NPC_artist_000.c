-------- EventFlow: NPC_artist_000 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ShowMemoryPhoto', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_artist_000
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_artist_000[Talk_Artist_FairyFountain_Finish(Self)]
entrypoint: Talk_Artist_FairyFountain_Finish(Self)
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: None

Actor: NPC_artist_005[FirstTalk(Self)]
entrypoint: FirstTalk(Self)
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction']
params: None

Actor: NPC_artist_000[Album(Self)]
entrypoint: Album(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: NPC_artist_000[Talk_Artist(Self)]
entrypoint: Talk_Artist(Self)
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: None

void Talk_Artist_FairyFountain_Finish() {
    if NPC_artist_000[Talk_Artist_FairyFountain_Finish(Self)].IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        NPC_artist_000[Talk_Artist_FairyFountain_Finish(Self)].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk08', 'IsCloseMessageDialog': False})
        Event31:

        call Album({'PhotoNo': 'PhotoNo', 'Self': 'Self'})

    } else {

        call FirstTalk({'Self': 'Self'})

        goto Event31
    }
}

void FirstTalk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstTalk'}) {
        if NPC_artist_005[FirstTalk(Self)].CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
            Event38:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            NPC_artist_005[FirstTalk(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_000:Talk01', 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True})
            NPC_artist_005[FirstTalk(Self)].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Event33:
            NPC_artist_005[FirstTalk(Self)].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk09'})
            Event3:
            NPC_artist_005[FirstTalk(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_000:Talk02', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
        } else {
            if NPC_artist_005[FirstTalk(Self)].CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
                goto Event38
            } else {

                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                goto Event33
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        NPC_artist_005[FirstTalk(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_000:Talk00', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Artist_FirstTalk'})
        goto Event3
    }
}

void Album() {
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call Common.ShowSheikPad({'Self': 'Self'})

        EventSystemActor.Demo_ShowMemoryPhoto({'IsWaitFinish': True, 'PhotoNo': 'PhotoNo'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        NPC_artist_000[Album(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_000:Talk03', 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True})

        call Common.TidyUpSheikPadAfterPicture({'Self': 'Self'})

        NPC_artist_000[Album(Self)].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk05', 'IsOverWriteLabelActorName': True})
    } else {
        NPC_artist_000[Album(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_000:Talk04', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0})
    }
}

void Talk() {

    call Talk_Artist({'Self': ActorIdentifier(name="NPC_artist_000")})

}

void FairyFountain_Finish_Talk() {

    call Talk_Artist_FairyFountain_Finish({'Self': ActorIdentifier(name="NPC_artist_000"), 'PhotoNo': 0})

}

void Talk_Artist() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if NPC_artist_000[Talk_Artist(Self)].IsOnInstEventFlag() {
        NPC_artist_000[Talk_Artist(Self)].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk11'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstTalk'}) {
            Event50:
            NPC_artist_000[Talk_Artist(Self)].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk12'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstFirstTalk'}) {
                goto Event50
            } else {
                NPC_artist_000[Talk_Artist(Self)].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsWaitFinish': True, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NPC_artist_000:Talk10'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Artist_FirstFirstFirstTalk', 'IsWaitFinish': True})
            }
        }
    }
}
