-------- EventFlow: Rito_BrosRock --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_OpenPickup', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_CallDemo', 'Demo_FlagOFF', 'Demo_GiveCookResultForNpc']
queries: ['CheckFlag', 'HasPorchItem', 'GeneralChoice2', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Ready_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Bros_Rock_02
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HighMountain031_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].IsOnInstEventFlag() {
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_R_002', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_R_001', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Ready_Npc_HighMountain032_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HighMountain032[Brosrock_Ready_Npc_HighMountain032].IsOnInstEventFlag() {
        Npc_HighMountain032[Brosrock_Ready_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_R_002', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_HighMountain032[Brosrock_Ready_Npc_HighMountain032].Demo_Talk({'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_R_001', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Ready_Npc_HighMountain033_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].IsOnInstEventFlag() {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_R_002'})
    } else {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_R_001', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Ready_Npc_HighMountain034_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_R_001', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Ready_Npc_HighMountain035_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_R_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_R_002', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_KeelSearch_Activated'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_KeelSearch_Step1', 'IsWaitFinish': True})
    }
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Activated'})
}

void Rito_BrosRock_Step1_Npc_HighMountain031_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S1'}) {
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_003', 'IsOverWriteLabelActorName': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_201', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event102:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_S1'})
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S2'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S4'}) {
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Rito_BrosRock_Step1'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
        }
    } else {
        Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Material_07'}) {
            Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_002', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_OpenPickup({'IsWaitFinish': True, 'PorchItemName': 'Item_Material_07', 'IsAddPorch': True})
            goto Event102
        } else {
            Npc_HighMountain031[Brosrock_Ready_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S01_102', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void Rito_BrosRock_Step1_Npc_HighMountain032_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S2'}) {
        Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_003', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
        if !EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
            Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_004'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
        Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_201', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event23:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_S2'})
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S1'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S4'}) {
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Rito_BrosRock_Step1'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
        }
    } else {
        Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Animal_Fish_I'}) {
            Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S01_002', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_OpenPickup({'IsWaitFinish': True, 'PorchItemName': 'Animal_Fish_I', 'IsAddPorch': True})
            goto Event23
        } else {
            Npc_HighMountain032[Brosrock_Activated_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S02_101', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void Rito_BrosRock_Step1_Npc_HighMountain033_Talk() {
    Event28:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_105', 'IsOverWriteLabelActorName': False})
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_H_03'}) {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_101', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_GiveCookResultForNpc({'IsWaitFinish': True, 'PorchItemName': 'Item_Cook_H_03', 'CookEffectType': 'AllOK', 'Count': 1})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_S3'})
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_102', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_106', 'IsCloseMessageDialog': False, 'ASName': 'Talk_EatFish'})
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_107'})
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S1'})
            && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S2'})
            && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S4'}) {
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Rito_BrosRock_Step1'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
            }
        } else {
            Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_104', 'IsOverWriteLabelActorName': False})
        }
    } else
    if Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].IsOnInstEventFlag() {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_201', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_HighMountain033[Brosrock_Ready_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Rito_BrosRock_Step1_Npc_HighMountain034_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S4'}) {
        Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S01_003', 'IsOverWriteLabelActorName': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
        Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S01_201', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event40:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_S4'})
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S1'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S2'})
        && EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_S3'}) {
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Rito_BrosRock_Step1'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'DispMode': 'Auto', 'Color': 1})
        }
    } else {
        Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Material_06', 'Count': 1}) {
            EventSystemActor.Demo_OpenPickup({'IsWaitFinish': True, 'PorchItemName': 'Item_Material_06', 'IsAddPorch': True})
            Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S01_002', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            goto Event40
        } else {
            Npc_HighMountain034[Brosrock_Ready_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S02_103', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void Rito_BrosRock_Step1_Npc_HighMountain035_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S01_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Rito_BrosRock_Step1_Npc_HighMountain033_Rito_BrosRock_S3_Talk() {
    goto Event28
}

void Song() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3971.82666015625, 'Pattern1PosY': 272.43890380859375, 'Pattern1PosZ': -1754.2032470703125, 'Pattern1AtX': -3975.50390625, 'Pattern1AtY': 271.9924011230469, 'Pattern1AtZ': -1749.9556884765625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'AtAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 30.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LngShiftRange': 0.0, 'LatShiftRange': 0.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 1, 'IsConfront': True, 'TurnDirection': 165.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'ASName': 'Act_Song_One', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'IsConfront': True, 'FaceId': 1, 'TurnDirection': 153.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'ASName': 'Act_Song_Two', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_TurnAndLookToObject({'ObjectId': 3, 'IsWaitFinish': True, 'FaceId': 1, 'IsValid': False, 'IsConfront': True, 'TurnDirection': 139.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'ASName': 'Act_Song_Three', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 1, 'IsConfront': True, 'TurnDirection': 121.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Song_Four', 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 1, 'IsConfront': True, 'TurnDirection': 111.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'ASName': 'Act_Song_Five', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 400})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Rito_BrosRock_Standby', 'IsWaitFinish': True})
}

void Ready_Npc_HighMountain035_Near() {
    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_TalkASync({'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void Finish_Music() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    } {
        Bros_Rock_02.Demo_Join({'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': True, 'EndFade': 0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo305_0', 'IsWaitFinish': False, 'EntryPointName': 'Demo305_0', 'EndFade': 0})

    call BloodyMoonRelief.Musician_Check()

}

void Finish_Npc_HighMountain035_Rito_BrosRock_Standby_Talk() {
    Event230:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call AllWait()

    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_F_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Singsong'}) {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S02_100'})
        if !EventSystemActor.GeneralChoice2() {
            Event312:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_BrosRock_Singsong', 'IsWaitFinish': True})

            call Song()

        } else {
            Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S02_101'})
            Event422:
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_BrosRock_Standby', 'IsWaitFinish': True})
        }
    } else {
        goto Event312
    }
}

void AllWait() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Rito_BrosRock_Standby', 'IsWaitFinish': True})

    fork {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

}

void Rito_BrosRock_Step2_Npc_HighMountain035_Rito_BrosRock_Standby_NearActorsTalk() {
    Event57:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S02_004', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_056'}) {

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Lsword_056'})

        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S02_005', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_BrosRock_Rito_BrosRock_Step2'})
    } else {
        Npc_HighMountain035[Brosrock_Now_Npc_HighMountain035].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain035_S02_006', 'IsOverWriteLabelActorName': False})
    }
}

void Rito_BrosRock_Step2_Npc_HighMountain035_Rito_BrosRock_Standby_Talk() {
    goto Event57
}

void Rito_BrosRock_Step2_Npc_HighMountain034_Rito_BrosRock_Standby_NearActorsTalk() {
    Event55:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call AllWait()

    Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S02_003', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Singsong'}) {
        Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S02_004'})
        if !EventSystemActor.GeneralChoice2() {
            goto Event312
        } else {
            Npc_HighMountain034[Brosrock_Now_Npc_HighMountain034].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain034_S02_005'})
            goto Event422
        }
    } else {
        goto Event312
    }
}

void Rito_BrosRock_Step2_Npc_HighMountain034_Rito_BrosRock_Standby_Talk() {
    goto Event55
}

void Rito_BrosRock_Step2_Npc_HighMountain033_Rito_BrosRock_Standby_Talk() {
    Event53:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call AllWait()

    Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S02_002', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Singsong'}) {
        Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S02_003'})
        if !EventSystemActor.GeneralChoice2() {
            goto Event312
        } else {
            Npc_HighMountain033[Brosrock_Now_Npc_HighMountain033].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain033_S02_004'})
            goto Event422
        }
    } else {
        goto Event312
    }
}

void Rito_BrosRock_Step2_Npc_HighMountain033_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event53
}

void Rito_BrosRock_Step2_Npc_HighMountain032_Rito_BrosRock_Standby_Talk() {
    Event51:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call AllWait()

    Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S02_001', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Singsong'}) {
        Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S02_002', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            goto Event312
        } else {
            Npc_HighMountain032[Brosrock_Now_Npc_HighMountain032].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain032_S02_003'})
            goto Event422
        }
    } else {
        goto Event312
    }
}

void Rito_BrosRock_Step2_Npc_HighMountain032_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event51
}

void Rito_BrosRock_Step2_Npc_HighMountain031_Rito_BrosRock_Standby_Talk() {
    Event49:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call AllWait()

    Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S02_001', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Singsong'}) {
        Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S02_002', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            goto Event312
        } else {
            Npc_HighMountain031[Brosrock_Now_Npc_HighMountain031].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_BrosRock:Npc_HighMountain031_S02_003', 'IsCloseMessageDialog': False})
            goto Event422
        }
    } else {
        goto Event312
    }
}

void Rito_BrosRock_Step2_Npc_HighMountain031_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event49
}

void Finish_Npc_HighMountain031_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event49
}

void Finish_Npc_HighMountain031_Rito_BrosRock_Standby_Talk() {
    goto Event49
}

void Finish_Npc_HighMountain032_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event51
}

void Finish_Npc_HighMountain032_Rito_BrosRock_Standby_Talk() {
    goto Event51
}

void Finish_Npc_HighMountain033_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event53
}

void Finish_Npc_HighMountain033_Rito_BrosRock_Standby_Talk() {
    goto Event53
}

void Finish_Npc_HighMountain034_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event55
}

void Finish_Npc_HighMountain034_Rito_BrosRock_Standby_Talk() {
    goto Event55
}

void Finish_Npc_HighMountain035_Rito_BrosRock_Standby_NearActorsTalk() {
    goto Event230
}
