-------- EventFlow: TabantaBridgeMini_Sundial --------

Actor: Npc_TabantaBridgeHatago005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_TabantaBridgeHatago005_Talk() {
    if Npc_TabantaBridgeHatago005.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk07'})
        Event9:
        if !EventSystemActor.GeneralChoice2() {
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk03', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_IncreaseRupee({'Value': 500, 'IsWaitFinish': False})
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk04'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TabantaBridgeMini_Sundial_Activated'})
        } else {
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk05'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

        Npc_TabantaBridgeHatago005.Demo_Talk({'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk14', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if Npc_TabantaBridgeHatago005.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'NotAndNot'})

            Event2:
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk00'})
            Npc_TabantaBridgeHatago005.Demo_Talk({'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk02'})
            goto Event9
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 1})

            goto Event2
        }
    }
}

void Finish_Npc_TabantaBridgeHatago005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_TabantaBridgeHatago005.Demo_Talk({'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk10', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingS', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    if EventSystemActor.CheckFlag({'FlagName': 'IsFirstFairyEqualsGreatFairy02'}) {
        Npc_TabantaBridgeHatago005.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk17'})
        Event5:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TabantaBridgeMini_Sundial_Finish'})
    } else {
        Npc_TabantaBridgeHatago005.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk15', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingS', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk16'})
        goto Event5
    }
}

void Play_Npc_TabantaBridgeHatago005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TabantaBridgeHatago005.CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_TabantaBridgeHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk09'})
          case [1, 2, 3]:
            Npc_TabantaBridgeHatago005.Demo_Talk({'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void Ready_Npc_TabantaBridgeHatago005_Near() {
    Event47:
    Npc_TabantaBridgeHatago005.Demo_TalkASync({'IsChecked': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:Near00', 'DispFrame': 300})
}

void Finish_Npc_TabantaBridgeHatago005_Near() {
    goto Event47
}

void Play_Npc_TabantaBridgeHatago005_Near() {
    Npc_TabantaBridgeHatago005.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/TabantaBridgeMini_Sundial:Near01'})
}
