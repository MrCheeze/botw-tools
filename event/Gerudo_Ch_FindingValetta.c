-------- EventFlow: Gerudo_Ch_FindingValetta --------

Actor: Npc_oasis042
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_IncreasePorchItem']
queries: ['HasPorchItem', 'GeneralChoice2', 'CheckEquipArmorSeriesType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert004[desert01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert004[town02]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis041
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis040
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis042_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis041', 'Actor2': 'Npc_oasis042', 'Actor3': 'Npc_oasis040', 'Arg_Turn': 5})


    fork {
        Npc_oasis042.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    } {
        Npc_oasis040.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis042', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_oasis041.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis042', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk01'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis041', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk04'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis040', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk05'})
    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk12'})

    fork {
        Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk06'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis041', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk07'})
    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk09'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_FindingValetta_Activated', 'IsWaitFinish': True})
}

void Finish_Npc_oasis042_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk02'})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Silver'})

    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_FindingValetta_Finish', 'IsWaitFinish': True})
}

void Ready_Npc_oasis042_Near() {
    Npc_oasis042.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_near00', 'IsChecked': True, 'DispFrame': 300})
}

void Finish_Npc_oasis042_Near() {
    Npc_oasis042.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_near01', 'IsChecked': True, 'DispFrame': 300})
}

void Finish_Npc_GerudoDesert004_Near() {
    Npc_GerudoDesert004[town02].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_near00', 'DispFrame': 90, 'IsChecked': False})
}

void Finish_Npc_GerudoDesert004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first_lady'}) {
            Event109:
            Npc_GerudoDesert004[town02].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk06'})
        } else {
            Npc_GerudoDesert004[town02].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk05'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first_lady'}) {
        goto Event109
    } else {
        Npc_GerudoDesert004[town02].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_GerudoDesert004:Talk01'})
    }
}

void Ready_Npc_oasis041_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk10'})
}

void Ready_Npc_oasis040_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk11'})
}

void Finish_Npc_oasis041_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk03'})
}

void Finish_Npc_oasis040_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk04'})
}

void Step1_Npc_oasis042_Talk() {
    Event78:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis042.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Oasis042_talk08'})
}

void Step1_Npc_oasis041_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event48:
    Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk00'})
}

void Step1_Npc_oasis040_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event86:
    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk01'})
    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:talk08'})
}

void Step1_Npc_GerudoDesert004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk00', 'IsCloseMessageDialog': True, 'ASName': 'Act_Exhaustion'})
    Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk01', 'ASName': 'Act_Exhaustion'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_FindingValetta_Step1', 'IsWaitFinish': True})
}

void Step2_Npc_oasis042_Talk() {
    goto Event78
}

void Step2_Npc_GerudoDesert004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Fruit_D'}) {
        Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk03', 'ASName': 'Act_Exhaustion'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'IsWaitFinish': True, 'PorchItemName': 'Item_Fruit_D'})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            Npc_GerudoDesert004[desert01].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Npc_GerudoDesert004[desert01].Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk09'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Varetta_first_lady', 'IsWaitFinish': True})
                Event93:
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk06', 'ASName': 'Talk'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk07', 'ASName': 'Talk'})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_FindingValetta_Step2'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first_lady'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Varetta_first'}) {
                    Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk08'})
                    goto Event93
                } else {
                    Event103:
                    Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk05', 'ASName': 'Talk'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Varetta_first', 'IsWaitFinish': True})
                    goto Event93
                }
            } else {
                goto Event103
            }
        } else {
            Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk04', 'ASName': 'Act_Exhaustion'})
        }
    } else {
        Npc_GerudoDesert004[desert01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_talk02', 'ASName': 'Act_Exhaustion'})
    }
}

void Step2_Npc_GerudoDesert004_Ne() {
    Event12:
    Npc_GerudoDesert004[desert01].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_FindingValetta:Valetta_near00', 'DispFrame': 90, 'IsChecked': False})
}

void Step1_Npc_GerudoDesert004_Near() {
    goto Event12
}

void Step2_Npc_oasis041_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event48
}

void Step2_Npc_oasis040_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event86
}

void Step2_Npc_GerudoDesert004_Near() {
    goto Event12
}
