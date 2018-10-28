-------- EventFlow: Npc_Kakariko013 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenMessageTips', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_EnableCameraInput', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather', 'GeneralChoice4', 'RandomChoice4', 'RandomChoice2', 'HasPorchItem', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker', 'Demo_ChangePostureWithAS']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko013_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko013_FrontTalk'})
    }
    if Npc_Kakariko013.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Npc_Kakariko013.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'GuardUnequip', 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Kakariko013.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko013_Talk'}) {
            Event23:
            switch Npc_Kakariko013.CheckActorAction13() {
              case 0:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk41'})
                  case [1, 2, 3]:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk43'})
                }
              case 1:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk00', 'ASName': 'Talk_Farmer', 'IsCloseMessageDialog': True})
                Npc_Kakariko013.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_Kakariko013.Demo_BecomeSpeaker({'IsWaitFinish': True})

                call InitTalk.InitTalkNoTurn()

                Npc_Kakariko013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': False, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Kakariko013', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk13', 'ASName': ''})
                Event182:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk10', 'IsCloseMessageDialog': True})
                    Event292:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk12'})
                    goto Event182
                  case 1:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk01', 'IsCloseMessageDialog': True})
                    goto Event292
                  case 2:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk05', 'IsCloseMessageDialog': True})
                }
              case 2:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk30'})
              case 3:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk42'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk33', 'IsCloseMessageDialog': True})
                    Event192:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk04'})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 6, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Attention'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Guide_Attention', 'IsWaitFinish': True})
                        Event355:
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk18'})
                        goto Event192
                      case 1:
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk05'})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 18, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_JumpAtack'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_JumpAtack'})
                        goto Event355
                      case 2:
                        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk06', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk08', 'IsCloseMessageDialog': True})
                            EventSystemActor.Demo_OpenMessageTips({'IsWaitFinish': True, 'TipsType': 0, 'MessageId': 'EventFlowMsg/OperationGuide:Guide_Squat'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Squat'})
                            goto Event355
                        } else {
                            goto Event355
                        }
                      case 3:
                        Event198:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk07', 'IsCloseMessageDialog': True})
                          case [1, 3]:
                            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk31', 'IsCloseMessageDialog': True})
                        }
                    }
                } else
                goto Event198
              case 4:
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_013in014house'}) {
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk02'})
                } else {
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk24'})
                }
              case 5:

                call NearActorsTalk()

              case 10:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk09'})
              case 11:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk26', 'ASName': ''})
            }
        } else
        Event346:
        if Npc_Kakariko013.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk18', 'ASName': 'Talk_Farmer', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Kakariko013.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            Event304:
            Npc_Kakariko013.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_Kakariko013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk00', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk19'})
            Event260:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'IsIgnoreSame': False, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk11'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk13', 'ASName': ''})
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk16', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk12', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Event92:
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk02', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Plant_M'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko013_Talk'})
                switch Npc_Kakariko013.CheckActorAction13() {
                  case [0, 1]:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk05'})
                  case 2:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_013in014house'}) {
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk04'})
                    } else {
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk06'})
                    }
                  case 3:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk07', 'IsCloseMessageDialog': True})
                  case 4:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_013in014house'}) {
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk04'})
                    } else {
                        Event224:
                        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk03'})
                    }
                  case 5:
                    goto Event224
                  case 10:
                    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk08'})
                }
            } else {
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk14', 'ASName': '', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk15', 'ASName': '', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                goto Event92
            }
        } else {
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:FirstTalk18', 'IsCloseMessageDialog': False, 'ASName': ''})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            goto Event304
        }
      case [5, 11]:
        goto Event23
    }
}

void Near() {
    switch Npc_Kakariko013.CheckActorAction13() {
      case [0, 2]:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near13', 'IsChecked': False, 'DispFrame': 90})
          case 2:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near14', 'IsChecked': False, 'DispFrame': 90})
          case 3:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near15', 'IsChecked': False, 'DispFrame': 90})
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if !EventSystemActor.RandomChoice2() {
                Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near03', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near05', 'IsChecked': False, 'DispFrame': 90})
            }
          case [1, 2]:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near11', 'IsChecked': False, 'DispFrame': 90})
          case 3:
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near12', 'IsChecked': False, 'DispFrame': 90})
        }
      case 3:
        if !EventSystemActor.RandomChoice2() {
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near06', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near07', 'IsChecked': False, 'DispFrame': 90})
        }
      case 4:
        Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near01', 'IsChecked': False, 'DispFrame': 90})
      case 5:
        Event159:
        Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near08', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Kakariko013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Near10', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 5, 'Actor1': 'Npc_Kakariko013', 'Actor2': 'Npc_Kakariko014'})


    fork {
        Npc_Kakariko013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Kakariko014', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Kakariko013.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Talk', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Meeting00'})
    } {
        Npc_Kakariko014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Kakariko013', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Kakariko014.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    }

    Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Meeting01'})
}

void NearActorsNear() {
    goto Event159
}

void Kakariko013_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko013")})

    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Kakariko013:SupriseHouse'})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko013_Talk'}) {
        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:SupriseHouse_00', 'ASName': 'Talk'})
    } else {

        call FirstMT()

    }
}

void FirstMT() {
    Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:SupriseHouse_01', 'ASName': 'Talk'})
    goto Event260
}

void OnlyCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_006_DosDos'}) {

        call Npc_Kakariko006.Check_Ninjin_Dosdos()

    } else {
        EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
        GameRomCamera.Demo_Join({'IsWaitFinish': True})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 4, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:Talk27', 'IsBecomingSpeaker': False})
    }
}

void CheckAndNPC() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko013")})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko013_Talk'}) {
        Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:ClerkAsk00', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:ClerkAsk02'})
        } else {
            Npc_Kakariko013.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            Npc_Kakariko013.Demo_BecomeSpeaker({'IsWaitFinish': True})

            call InitTalk.InitTalkNoTurn()

            Npc_Kakariko013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': False, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Kakariko013', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            Npc_Kakariko013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko013:ClerkAsk01'})
        }
    } else {

        call FirstFarm()

    }
}

void FirstFarm() {
    goto Event346
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko013_FrontTalk'})
}
