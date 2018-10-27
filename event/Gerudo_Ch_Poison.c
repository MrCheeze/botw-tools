-------- EventFlow: Gerudo_Ch_Poison --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'CheckAddPorchItem', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisWaterChannel
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_OasisWaterChannel_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    fork {
        Npc_OasisWaterChannel.Demo_PlayASForDemo({'ASName': 'Talk_SitGround_EatFruit', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    if Npc_OasisWaterChannel.IsOnInstEventFlag() {
        Npc_OasisWaterChannel.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SitGround_EatFruit', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Cariban_Talk01', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
        Event224:

        fork {
            Npc_OasisWaterChannel.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_SitGround_EatFruit'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        }

    } else {
        Npc_OasisWaterChannel.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Cariban_Talk00', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
        goto Event224
    }
}

void Ready_Npc_OasisWaterChannel_Near() {
    Event56:
    Npc_OasisWaterChannel.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Near00', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_oasis016_Talk() {
    Event70:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis016.CheckActorAction13() {
      case 4:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk01', 'ASName': ''})
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_Poison_Activated'}) {
            if Npc_oasis016.IsOnInstEventFlag() {
                Event114:
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk09', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk10', 'ASName': 'Talk_Cry'})
                } else {
                    Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk11', 'ASName': 'Talk_Cry'})
                }
            } else {

                call hello()

                goto Event114
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis016_First'}) {

                call hello()

                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk00', 'ASName': 'Talk_Cry'})
                Event77:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Poison_Activated'})
            } else {

                call hello()

                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Cry', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk19'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis016_First', 'IsWaitFinish': True})
                goto Event77
            }
        }
      case 10:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk02'})
      case 11:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk03'})
    }
}

void Ready_Npc_oasis016_Near() {
    switch Npc_oasis016.CheckActorAction13() {
      case 5:
        Npc_oasis016.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Near00', 'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300})
      case 10:
        Npc_oasis016.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}

void Step1_Npc_oasis016_Talk() {
    goto Event70
}

void Step1_Npc_oasis016_Near() {
    Event167:
    switch Npc_oasis016.CheckActorAction13() {
      case 5:
        Event81:
        Npc_oasis016.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
      case 10:
        goto Event81
    }
}

void Finish_Npc_oasis016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis016.CheckActorAction13() {
      case 2:
        Event195:
        if Npc_oasis016.IsOnInstEventFlag() {
            Event93:
            Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk07'})
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Fruit_F', 'Count': 1}) {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Fruit_F'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Poison_Finish'})
                Event146:
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk26'})
            } else {
                Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk17'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_Poison_Finish', 'IsWaitFinish': True})
                goto Event146
            }
        } else {

            call hello_finish()

            goto Event93
        }
      case 3:
        goto Event195
      case 10:
        goto Event195
      case 11:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk16'})
    }
}

void Step1_Npc_OasisWaterChannel_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    fork {
        Npc_OasisWaterChannel.Demo_PlayASForDemo({'ASName': 'Talk_SitGround_EatFruit', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    if Npc_OasisWaterChannel.IsOnInstEventFlag() {
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_SitGround_EatFruit', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk18'})
        Event118:
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk07', 'ASName': 'Talk_SitGround_EatFruit'})
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk08', 'IsCloseMessageDialog': True, 'ASName': 'Talk_SitGround_EatFruit'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk09', 'ASName': 'Talk_SitGround_EatFruit'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk10', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            Event110:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Poison_Step1'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Poison_First'})

            fork {
                Npc_OasisWaterChannel.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_SitGround_EatFruit'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            }

        } else {
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk11', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            goto Event110
        }
    } else {
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk02', 'IsCloseMessageDialog': True, 'ASName': 'Talk_SitGround_EatFruit'})
        goto Event118
    }
}

void Step1_Npc_OasisWaterChannel_Near() {
    goto Event56
}

void Step2_Npc_oasis016_Talk() {
    goto Event70
}

void Step2_Npc_oasis016_Near() {
    goto Event167
}

void Step2_Npc_OasisWaterChannel_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    fork {
        Npc_OasisWaterChannel.Demo_PlayASForDemo({'ASName': 'Talk_SitGround_EatFruit', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Fruit_B', 'Count': 5}) {
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk01', 'ASName': 'Talk_SitGround_EatFruit'})
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk04', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Fruit_B', 'Count': 10}) {
            EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Fruit_B', 'Value': -10})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk03', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk28'})
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk06', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_OasisWaterChannel.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Poison_Step2'})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
        } else {
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk16', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})

            fork {
                Npc_OasisWaterChannel.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_SitGround_EatFruit'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            }

        }
    } else {
        Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk12', 'ASName': 'Talk_SitGround_EatFruit'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk13', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            Event237:

            fork {
                Npc_OasisWaterChannel.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_SitGround_EatFruit'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            }

        } else {
            Npc_OasisWaterChannel.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Talk14', 'ASName': 'Talk_SitGround_EatFruit', 'IsCloseMessageDialog': True})
            goto Event237
        }
    }
}

void Step2_Npc_OasisWaterChannel_Near() {
    goto Event56
}

void Finish_Npc_OasisWaterChannel_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_OasisWaterChannel.Gerudo_Ch_Poison_Finish_Talk()

}

void Finish_Npc_oasis016_Near() {
    switch Npc_oasis016.CheckActorAction13() {
      case 2:
        Event170:
        Npc_oasis016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:Near01', 'DispFrame': 300})
      case 3:
        goto Event170
      case 10:
        goto Event170
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event178:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk20', 'ASName': ''})
      case 1:
        goto Event178
      case 2:
        Event179:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk21', 'ASName': ''})
      case 3:
        goto Event179
      case 4:
        goto Event179
      case 5:
        Event180:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk22', 'ASName': ''})
      case 6:
        goto Event180
      case 7:
        goto Event180
    }
}

void hello_finish() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event189:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk23'})
      case 1:
        goto Event189
      case 2:
        Event190:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk24'})
      case 3:
        goto Event190
      case 4:
        goto Event190
      case 5:
        Event191:
        Npc_oasis016.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_Poison:oasis016_Talk25'})
      case 6:
        goto Event191
      case 7:
        goto Event191
    }
}
