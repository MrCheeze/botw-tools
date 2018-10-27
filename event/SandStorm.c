-------- EventFlow: SandStorm --------

Actor: Npc_SmallOasis007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_AdvanceQuest', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SmallOasis007_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'SandStorm_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
                Event83:

                call InitTalk.InitTalk_ReturnArrivalAnchor({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_001', 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_008', 'IsCloseMessageDialog': False})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckType': 'GerudoCloth'}) {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_010'})
                }
            } else {
                Event78:

                call InitTalk.InitTalk_ReturnArrivalAnchor({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_004', 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_003', 'IsCloseMessageDialog': True})
                    Event59:
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_006'})
                } else {
                    Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_011', 'IsCloseMessageDialog': True})
                    goto Event59
                }
            }
        } else {
            goto Event83
        }
    } else {
        switch Npc_SmallOasis007.CheckActorAction13() {
          case 0:
            Event11:
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
                    Event0:

                    call InitTalk.InitTalk_ReturnArrivalAnchor({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                    Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_SmallOasis007.Demo_Talk({'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_R_001', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Lookfar', 'IsCloseMessageDialog': False})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_R_005', 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                        if !EventSystemActor.CheckFlag({'FlagName': 'SandStorm_Activated'}) {
                            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': ''})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_012', 'ASName': 'Act_Lookfar'})
                            Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_008'})
                        }
                    } else {
                        Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_008'})
                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckType': 'GerudoCloth'}) {
                            Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_010', 'IsCloseMessageDialog': True})
                            Event2:
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SandStorm_Activated'})
                        } else {
                            goto Event2
                        }
                    }
                } else {
                    goto Event78
                }
            } else {
                goto Event0
            }
          case 1:
            goto Event11
          case 10:
            goto Event11
          case 11:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
            Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_R_002', 'IsOverWriteLabelActorName': False})
        }
    }
}

void Finish_Npc_SmallOasis007_Talk() {
    switch Npc_SmallOasis007.CheckActorAction13() {
      case 0:
        Event17:
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
                Event80:

                call InitTalk.InitTalk_ReturnArrivalAnchor({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_001', 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_008', 'IsCloseMessageDialog': False})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckType': 'GerudoCloth'}) {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_010'})
                }
            } else {

                call InitTalk.InitTalk_ReturnArrivalAnchor({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_004', 'ASName': 'Act_Lookfar', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_003', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_007'})
                } else {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_005', 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                    Npc_SmallOasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_006'})
                }
            }
        } else {
            goto Event80
        }
      case 1:
        goto Event17
      case 10:
        goto Event17
      case 11:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

        Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
        Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SandStorm:Npc_SmallOasis007_F_002', 'IsOverWriteLabelActorName': False})
    }
}
