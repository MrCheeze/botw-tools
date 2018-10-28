-------- EventFlow: NPC_artist_009 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckSelectPicture', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_artist_009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TrigNullASPlay', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag', 'CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Repaired'}) {
        switch NPC_artist_009.CheckActorAction13() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
            if EventSystemActor.CheckFlag({'FlagName': 'FairyFountain_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo136_0'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstTalk'}) {

                        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                        if EventSystemActor.CheckFlag({'FlagName': 'Artist_Found10'}) {
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk07'})
                        } else {
                            NPC_artist_009.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk34'})
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk06', 'IsOverWriteLabelActorName': False})
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk07', 'IsOverWriteLabelActorName': False})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Artist_Found10', 'IsWaitFinish': True})
                        }
                    } else {

                        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                        if EventSystemActor.CheckFlag({'FlagName': 'Artist_Found10'}) {
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk07', 'IsOverWriteLabelActorName': False})
                        } else {
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk06', 'IsOverWriteLabelActorName': False})
                            NPC_artist_009.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk07', 'IsOverWriteLabelActorName': False})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Artist_Found10', 'IsWaitFinish': True})
                        }
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstTalk'}) {
                    if NPC_artist_009.IsOnInstEventFlag() {
                        Event113:
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_009', 'IsCloseMessageDialog': False})
                        if !EventSystemActor.GeneralChoice2() {

                            call NPC_artist_000.Album({'PhotoNo': 10, 'Self': ActorIdentifier(name="NPC_artist_009")})

                        } else
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_019'})
                          case [1, 2, 3]:
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_013'})
                        }
                    } else {
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_015', 'IsCloseMessageDialog': False})
                        if !EventSystemActor.GeneralChoice2() {
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_014'})
                        } else {

                            call NPC_artist_000.Album({'PhotoNo': 10, 'Self': ActorIdentifier(name="NPC_artist_009")})

                        }
                    }
                } else {
                    goto Event113
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'FairyFountain_Activated'}) {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_FairySpring_A_01'}) {

                    call FairyFountain.found_fairy()

                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko_Artist_followed'}) {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk16'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event140:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk17'})
                            Event60:
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko_Artist_Guide', 'IsWaitFinish': True})
                          case [1, 2, 3]:
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk31'})
                            goto Event60
                        }
                    } else
                    Event142:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk19'})
                      case [1, 2, 3]:
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk32'})
                    }
                } else {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk24'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event140
                    } else
                    goto Event142
                }
            } else
            switch EventSystemActor.CheckWeather() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstTalk'}) {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk04'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event92:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FairyFountain_Activated'})
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk13'})
                        if !EventSystemActor.GeneralChoice2() {
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk14'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko_Artist_followed'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Artist_FirstFirstTalk', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko_Artist_Guide', 'IsWaitFinish': True})
                        } else {
                            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk19'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Artist_FirstFirstTalk', 'IsWaitFinish': True})
                        }
                    } else {
                        Event85:
                        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk19'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FairyFountain_Activated'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Artist_FirstFirstTalk', 'IsWaitFinish': True})
                    }
                } else {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk08'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event92
                    } else {
                        goto Event85
                    }
                }
              case [1, 2, 3]:
                if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstTalk'}) {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk26'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event92
                    } else {
                        goto Event85
                    }
                } else {
                    NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk25'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event92
                    } else {
                        goto Event85
                    }
                }
            }
          case 11:
            if EventSystemActor.CheckFlag({'FlagName': 'FairyFountain_Finish'}) {
                NPC_artist_009.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASSlot': 1, 'SequenceBank': 0, 'IsIgnoreSame': True, 'ASName': 'Face_C_Sleep'})
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk23'})
            } else {
                NPC_artist_009.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASSlot': 1, 'SequenceBank': 0, 'IsIgnoreSame': True, 'ASName': 'Face_C_Sleep'})
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk18'})
            }
        }
    } else
    switch NPC_artist_009.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstTalk'}) {
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk22'})
            } else {
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk21'})
                Event80:
                EventSystemActor.Demo_FlagON({'FlagName': 'Artist_FirstFirstTalk', 'IsWaitFinish': True})
            }
          case [1, 2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'Artist_FirstFirstTalk'}) {
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk28'})
            } else {
                NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk27'})
                goto Event80
            }
        }
      case 11:
        NPC_artist_009.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASSlot': 1, 'SequenceBank': 0, 'IsIgnoreSame': True, 'ASName': 'Face_C_Sleep'})
        NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk18'})
    }
}

void FairyFountain_Finish_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo136_0'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if !NPC_artist_009.IsOnInstEventFlag() {
            Starter.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_001:Talk06', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        }
        Starter.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_001:Talk07', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } else
    if NPC_artist_009.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event116:
        if NPC_artist_009.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
            NPC_artist_009.Demo_Talk({'MessageId': 'EventFlowMsg/NPC_artist_009:Talk23', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FairyFountain:Npc_artist009_F_009'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

        Starter.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk01', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        Starter.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        goto Event116
    }
}

void Npc_Kakariko_Artist_Guide_Talk() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_FairySpring_A_01'}) {

        call FairyFountain.found_fairy()

    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch NPC_artist_009.CheckActorAction13() {
          case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk10'})
          case 3:

            call Act_Tiredness()

            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk11', 'ASName': 'Talk_Tiredness', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko_Artist_GuideFinish'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko_Artist_Guide', 'IsWaitFinish': True})
        }
      case [1, 2, 3]:
        switch NPC_artist_009.CheckActorAction13() {
          case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk29'})
          case 3:

            call Act_Tiredness()

            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk30', 'ASName': 'Talk_Tiredness', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko_Artist_GuideFinish'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Kakariko_Artist_Guide', 'IsWaitFinish': True})
        }
    }
}

void Npc_Kakariko_Artist_Gate_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if NPC_artist_009.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'TwnObj_FairySpring_A_01'}) {

            call FairyFountain.found_fairy()

        } else {
            NPC_artist_009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_artist_009:Talk20'})
        }
    }
}

void Act_Tiredness() {
    if NPC_artist_009.CheckActorAction({'ActionName': 'Root/Terror'}) {
        NPC_artist_009.Demo_PlayASForDemo({'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        NPC_artist_009.Demo_PlayASForDemo({'ASName': 'Act_Tiredness', 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    }
}
