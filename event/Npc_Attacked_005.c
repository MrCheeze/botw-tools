-------- EventFlow: Npc_Attacked_005 --------

Actor: Npc_Attacked_005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_005.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event13:
        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set5_FirstTalk'}) {
            Event7:
            Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:After00', 'IsCloseMessageDialog': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_MamonoShop'}) {
                Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:After02'})
                Event19:
                EventSystemActor.Demo_FlagON({'FlagName': 'AttackedNPC_Set5_FirstTalk', 'IsWaitFinish': True})
            } else {
                Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:After01'})
                goto Event19
            }
        } else {
            Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk02', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_MamonoShop'}) {
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk07'})
                    Event26:
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk06', 'IsCloseMessageDialog': True})
                    goto Event19
                } else {
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk03', 'IsCloseMessageDialog': True})
                    Event45:
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_08'}) {

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Material_08'})

                        Event17:
                        Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk01', 'IsCloseMessageDialog': False})
                        Event43:
                        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set5_FirstTalk'}) {
                            goto Event7
                        } else {
                            Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk01_01', 'IsCloseMessageDialog': False})
                            Event25:
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_MamonoShop'}) {
                                goto Event26
                            } else {
                                Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk05', 'IsCloseMessageDialog': True})
                                goto Event19
                            }
                        }
                    } else {
                        goto Event7
                    }
                }
            } else {
                Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk04', 'IsCloseMessageDialog': True})
                goto Event45
            }
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_005.CheckResultOfNPCConflict() {
          case 0:
            Event12:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})


            call Npc_Road_Common.Atacked({'Flag': 'Npc_Attacked_005_CookReward', 'Self': ActorIdentifier(name="Npc_Attacked_005")})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Attacked_005_Reward'})
            if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set5_FirstTalk'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Attacked_005_Saved'}) {
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk08'})
                    goto Event25
                } else {
                    goto Event17
                }
            } else {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_08'}) {
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk00', 'IsCloseMessageDialog': False})
                    goto Event17
                } else {
                    Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Talk00_1'})
                    goto Event43
                }
            }
          case 1:
            goto Event12
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            Event36:

            call Npc_Road_Common.Atacked({'Self': ActorIdentifier(name="Npc_Attacked_005"), 'Flag': 'Npc_Attacked_005_CookReward'})

            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Attacked_005.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            Npc_Attacked_005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            goto Event13
          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event36
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Guardian00', 'ASName': 'Detect'})
    }
}

void Near() {
    Npc_Attacked_005.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_005:Near00'})
}
