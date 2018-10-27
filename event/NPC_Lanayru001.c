-------- EventFlow: NPC_Lanayru001 --------

Actor: NPC_Lanayru001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_ResetGimmick']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem', 'CheckRupee']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_SoldOut'}) {
            if NPC_Lanayru001.IsOnInstEventFlag() {
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk015'})
            } else {
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk005'})
            }
        } else
        if NPC_Lanayru001.IsOnInstEventFlag() {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk017'})
        } else {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk016'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru001_First', 'IsWaitFinish': True})
        NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk001'})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk018', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            call OperationGuide.Guide_Surfing()

        }
    }
}

void Check_Shield_001() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="NPC_Lanayru001"), 'Arg_Turn': 1})

    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk006', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk002', 'IsCloseMessageDialog': False})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckRupee({'Value': 30}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_001'}) {
                EventSystemActor.Demo_IncreaseRupee({'Value': -30, 'IsWaitFinish': False})
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk008'})
                EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru001_Bought_Shield_001', 'IsWaitFinish': True})
            } else {
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk010'})
                Event38:
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk007'})
            }
        } else {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk009'})
            goto Event38
        }
    } else {
        goto Event38
    }
}

void Check_Shield_002() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="NPC_Lanayru001"), 'Arg_Turn': 1})

    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk006', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk003', 'IsCloseMessageDialog': False})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckRupee({'Value': 100}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_002'}) {
                EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': False})
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk013'})
                EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_002'})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru001_Bought_Shield_002', 'IsWaitFinish': True})
            } else {
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk010'})
                Event57:
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk007'})
            }
        } else {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk009'})
            goto Event57
        }
    } else {
        goto Event57
    }
}

void Check_Shield_003() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="NPC_Lanayru001"), 'Arg_Turn': 1})

    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk006', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk004', 'IsCloseMessageDialog': False})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckRupee({'Value': 300}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_003'}) {
                EventSystemActor.Demo_IncreaseRupee({'Value': -300, 'IsWaitFinish': False})
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk014'})
                EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_003'})
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru001_Bought_Shield_003', 'IsWaitFinish': True})
            } else {
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk010'})
                Event76:
                NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk007'})
            }
        } else {
            NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk009'})
            goto Event76
        }
    } else {
        goto Event76
    }
}

void Lose_Shield() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="NPC_Lanayru001"), 'Arg_Turn': 2})

    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk011', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    NPC_Lanayru001.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    NPC_Lanayru001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    NPC_Lanayru001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Talk_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk012'})
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_SoldOut'}) {
        NPC_Lanayru001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:near_00', 'DispFrame': 90, 'IsChecked': False})
    }
}
