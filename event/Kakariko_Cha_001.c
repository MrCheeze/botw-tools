-------- EventFlow: Kakariko_Cha_001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckAddPorchItem', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko003
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kakariko003_Talk() {
    switch Npc_Kakariko003.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Npc_Kakariko003.Talk()

      case 5:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk07', 'ASName': '', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk01', 'ASName': 'Talk_Surprised'})
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk15', 'ASName': ''})
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk08', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk09', 'ASName': '', 'IsCloseMessageDialog': True})
            } else {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk10', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Kakariko_Cha_001', 'StepName': 'Finish', 'ForceRunTelop': True})
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_M'}) {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                Event100:
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk04_2'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'Value': -1, 'PorchItemName': 'Item_PlantGet_M'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk05', 'IsCloseMessageDialog': True})

                    call CookingBGM()

                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk12'})
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_F_03'}) {

                        call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_PlantGet_M', 'CookMaterial_02': 'Item_Ore_H', 'CookMaterial_03': 'Item_Material_05'})

                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk13'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Cha_001_Finish'})
                    } else {
                        Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'IsCloseMessageDialog': False})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Cha_001_Reward'})
                    }
                } else {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk10'})
                }
            }
          case [1, 2, 3]:
            Event68:
            Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk41'})
        }
    }
}

void Ready_Npc_Kakariko003_Near() {
    Event57:

    call Npc_Kakariko003.Near()

}

void Finish_Npc_Kakariko003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Kakariko003.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Npc_Kakariko003.Talk()

      case 5:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Cha_001_Reward'}) {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_F_03'}) {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk40', 'ASName': ''})

                    call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_PlantGet_M', 'CookMaterial_02': 'Item_Ore_H', 'CookMaterial_03': 'Item_Material_05'})

                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk13', 'IsCloseMessageDialog': False})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Cha_001_Finish'})
                } else {
                    Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko003:Talk39', 'ASName': ''})
                }
            } else
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_M'}) {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk04'})
                goto Event100
            } else {
                Npc_Kakariko003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Cha_001:Talk03', 'ASName': ''})
            }
          case [1, 2, 3]:
            goto Event68
        }
    }
}

void Finish_Npc_Kakariko003_Near() {
    goto Event57
}

void Ready_Npc_Kakariko003_NearActorsTalk() {
    Event58:

    call Npc_Kakariko003.NearActorsTalk()

}

void Ready_Npc_Kakariko003_NearActorsNear() {
    Event59:

    call Npc_Kakariko003.NearActorsNear()

}

void Finish_Npc_Kakariko003_NearActorsNear() {
    goto Event59
}

void Finish_Npc_Kakariko003_NearActorsTalk() {
    goto Event58
}

void CookingBGM() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Bgm_CookingSuccess', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': True, 'Sound': 'SuccessSE'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
}
