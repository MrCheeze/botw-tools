-------- EventFlow: Npc_FirstColony004 --------

Actor: Npc_FirstColony004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: ['CheckActorAction', 'IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckWeather', 'CheckFlag', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Terror'}) {

        call InitTalk.InitTalkNPCEquip({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event8:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_talk'}) {
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Terror'}) {
                Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Guard'})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_DefeatFirst'}) {

                    call GuardUnequip()

                    Event87:

                    call After()

                } else
                Event16:
                if !EventSystemActor.GeneralChoice2() {

                    call GuardUnequip()

                    if !EventSystemActor.RandomChoice2() {
                        Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk06', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                        Event100:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_Defeat'}) {
                            Event75:
                            Npc_FirstColony004.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': True})
                            Event96:
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk13'})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony004_DefeatFirst'})

                            call After()

                        }
                    } else {
                        Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk07', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                        goto Event100
                    }
                } else {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                    call GuardUnequip()

                    Npc_FirstColony004.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': True})
                    Npc_FirstColony004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 3, 'TurnDirection': -20.0})
                    GameROMPlayer.Demo_LookAtObject({'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -20.0})
                    Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk12', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_Defeat'}) {
                        Npc_FirstColony004.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': True})
                        Npc_FirstColony004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': False, 'TurnDirection': 0.0})
                        GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -20.0, 'ObjectId': 0, 'ActorName': 'Npc_FirstColony004'})
                        goto Event96
                    }
                }
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/移動'}) {
                Event86:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_DefeatFirst'}) {
                    goto Event87
                } else {

                    call DemoTurn()

                    Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                    goto Event16
                }
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                goto Event86
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                goto Event86
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_DefeatFirst'}) {

                    call After()

                } else
                if !EventSystemActor.RandomChoice2() {
                    Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk09', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitGround_Sleep', 'IsCloseMessageDialog': True})
                } else {
                    Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk10', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitGround_Sleep', 'IsCloseMessageDialog': True})
                }
            } else
            goto Event86
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FirstColony004_talk', 'IsWaitFinish': True})
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/移動'}) {
                Event5:
                switch EventSystemActor.CheckWeather() {
                  case [0, 3]:
                    Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk00', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch'})
                    Event57:

                    call DemoTurn()

                    Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                        Event2:

                        call OperationGuide.Guide_Attention()

                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_Defeat'}) {
                            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony004_DefeatFirst'}) {

                                call Reward()

                            }
                        }
                    } else {
                        Npc_FirstColony004.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                        goto Event2
                    }
                  case [1, 2]:
                    Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk01', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch'})
                    goto Event57
                }
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                goto Event5
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
                goto Event5
            } else
            if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
                Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk08', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitGround_Sleep'})

                call OperationGuide.Guide_Attention()

            } else
            goto Event5
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        goto Event8
    }
}

void Near() {
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/移動'}) {
        Event31:
        Npc_FirstColony004.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_FirstColony004:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    } else
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        goto Event31
    } else
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/移動'}) {
        goto Event31
    } else
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FirstColony004.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_FirstColony004:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    } else {
        goto Event31
    }
}

void DemoTurn() {
    Npc_FirstColony004.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1, 'IsValid': False, 'ObjectId': 0})
    Npc_FirstColony004.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': False, 'ASName': 'Crouch_Ed'})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    GameRomCamera.Demo_Talk({'NoConnect': False, 'IsWaitFinish': False, 'CameraReset': False})
    Npc_FirstColony004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
}

void GuardUnequip() {
    if Npc_FirstColony004.IsWeaponDrawn() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_FirstColony004.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsIgnoreSame': True, 'TargetIndex': 0})
    }
}

void Reward() {
    goto Event75
}

void After() {
    if Npc_FirstColony004.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SitGround_Sleep', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk15'})
    } else {
        Npc_FirstColony004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FirstColony004:talk14'})
    }
}
