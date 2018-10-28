-------- EventFlow: ArmorProcessingEventTag --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_SetGameDataInt']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GreatFairyBeforeRevival
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_2_3]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: TwnObj_FairySpringClose_A_01[Bud_3_4]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: TwnObj_FairySpringClose_A_01[Bud_4_5]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: TwnObj_FairySpringClose_A_01[Bud_Horse]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: TwnObj_FairySpringClose_A_01[Bud_1_2]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk_ArmorProcessing_1_2() {
    TwnObj_FairySpringClose_A_01[Bud_1_2].Demo_Join({'IsWaitFinish': True})

    call Talk_ArmorProcessingFairy({'RevivalFlag': 'RevivalGreatFairy1', 'TalkDemoAfterRevival_DemoName': 'Npc_DressFairy_00', 'TalkDemoAfterRevival_EntryName': 'DressFairyTalk', 'LookBudDemo_EntryName': 'For_1_2', 'FirstTalkFlag': 'GreatFairy1_Talk', 'SelfIntroductionMessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk11', 'AppearFlag': 'GreatFairy1_Appear', 'BeforeRevivalFairy_EntryName': 'BeforeRevivalFairy1', 'BudUniqueName': 'Bud_1_2'})

}

void Talk_ArmorProcessing_2_3() {
    TwnObj_FairySpringClose_A_01[Bud_2_3].Demo_Join({'IsWaitFinish': True})

    call Talk_ArmorProcessingFairy({'TalkDemoAfterRevival_EntryName': 'DressFairyTalk', 'RevivalFlag': 'RevivalGreatFairy2', 'LookBudDemo_EntryName': 'For_2_3', 'FirstTalkFlag': 'GreatFairy2_Talk', 'SelfIntroductionMessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk12', 'AppearFlag': 'GreatFairy2_Appear', 'BeforeRevivalFairy_EntryName': 'BeforeRevivalFairy2', 'TalkDemoAfterRevival_DemoName': 'Npc_DressFairy_01', 'BudUniqueName': 'Bud_2_3'})

}

void Talk_ArmorProcessing_3_4() {
    TwnObj_FairySpringClose_A_01[Bud_3_4].Demo_Join({'IsWaitFinish': True})

    call Talk_ArmorProcessingFairy({'TalkDemoAfterRevival_EntryName': 'DressFairyTalk', 'RevivalFlag': 'RevivalGreatFairy3', 'TalkDemoAfterRevival_DemoName': 'Npc_DressFairy_02', 'LookBudDemo_EntryName': 'For_3_4', 'FirstTalkFlag': 'GreatFairy3_Talk', 'SelfIntroductionMessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk13', 'AppearFlag': 'GreatFairy3_Appear', 'BeforeRevivalFairy_EntryName': 'BeforeRevivalFairy3', 'BudUniqueName': 'Bud_3_4'})

}

void Talk_ArmorProcessing_4_5() {
    TwnObj_FairySpringClose_A_01[Bud_4_5].Demo_Join({'IsWaitFinish': True})

    call Talk_ArmorProcessingFairy({'TalkDemoAfterRevival_EntryName': 'DressFairyTalk', 'RevivalFlag': 'RevivalGreatFairy4', 'TalkDemoAfterRevival_DemoName': 'Npc_DressFairy_03', 'LookBudDemo_EntryName': 'For_4_5', 'FirstTalkFlag': 'GreatFairy4_Talk', 'SelfIntroductionMessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk14', 'AppearFlag': 'GreatFairy4_Appear', 'BeforeRevivalFairy_EntryName': 'BeforeRevivalFairy4', 'BudUniqueName': 'Bud_4_5'})

}

void Talk_ArmorProcessing_HG() {
    TwnObj_FairySpringClose_A_01[Bud_Horse].Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': False, 'FlagName': 'GreatFairy5_Appear'})
    if EventSystemActor.CheckFlag({'FlagName': 'RevivalGreatFairy5'}) {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'HorseGodTalk', 'DemoName': 'HorseGod001'})
    } else {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo045_0', 'EndFade': 0, 'EntryPointName': 'For_HG'})
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpringClose_A_01', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'MotionMode': 1, 'Count': 30.0, 'IsWaitFinish': False, 'Pattern1PosX': 5.483887195587158, 'Pattern1PosY': 2.209656000137329, 'Pattern1PosZ': 13.955349922180176, 'Pattern1AtX': 2.331054925918579, 'Pattern1AtY': 3.979401111602783, 'Pattern1AtZ': 8.2943115234375, 'UniqueName1': 'Bud_Horse', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
        if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_Talk'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03_m'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
            Event1126:
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': False, 'IsVisible': 0})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'BeforeRevivalFairyHG', 'DemoName': 'Demo045_0'})
        } else {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy5_Talk'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk15'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk07'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk20'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk27'})
                goto Event1126
            } else {
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'GreatFairy5_Appear'})
            }
        }
    }
}

void Talk_ArmorProcessingFairy() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'UniqueName': '', 'ObjectId': 4, 'ActorName': ''})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': False, 'FlagName': 'AppearFlag'})
    if EventSystemActor.CheckFlag({'FlagName': 'RevivalFlag'}) {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'TalkDemoAfterRevival_DemoName', 'EntryPointName': 'TalkDemoAfterRevival_EntryName'})
    } else {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo045_0', 'EndFade': 0, 'EntryPointName': 'LookBudDemo_EntryName'})
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpringClose_A_01', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'MotionMode': 1, 'Count': 30.0, 'IsWaitFinish': False, 'UniqueName1': 'BudUniqueName', 'Pattern1PosX': 5.483887195587158, 'Pattern1PosY': 2.209656000137329, 'Pattern1PosZ': 13.955349922180176, 'Pattern1AtX': 2.331054925918579, 'Pattern1AtY': 3.979401111602783, 'Pattern1AtZ': 8.2943115234375, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
        if EventSystemActor.CheckFlag({'FlagName': 'FirstTalkFlag'}) {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk03', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
            Event808:
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': False, 'IsVisible': 0})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'BeforeRevivalFairy_EntryName', 'DemoName': 'Demo045_0'})
        } else {
            GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstTalkFlag'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'SelfIntroductionMessageId'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk06'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk16'})
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk26'})
                goto Event808
            } else {
                GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk02', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'AppearFlag'})
            }
        }
    }
}

void PaySuitableRupee() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Operator': 'Equal', 'Value': 100}) {
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -100})
        if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy3_Appear'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'IsFirstFairyEqualsGreatFairy02', 'IsWaitFinish': True})
        }
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Value': 500})
        Event1136:
        EventSystemActor.Demo_FlagON({'FlagName': 'IsOtherFairyRevivalForGreatFairy1', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'IsOtherFairyRevivalForGreatFairy2', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'IsOtherFairyRevivalForGreatFairy3', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'IsOtherFairyRevivalForGreatFairy4', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Operator': 'Equal', 'Value': 500}) {
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -500})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Value': 1000})
        goto Event1136
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Operator': 'Equal', 'Value': 1000}) {
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -1000})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Value': 10000})
        goto Event1136
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Operator': 'Equal', 'Value': 10000}) {
        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -10000})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'AmountRupeeForNextRevivalFountain', 'Value': 100})
        goto Event1136
    }
}
