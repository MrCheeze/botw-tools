-------- EventFlow: Fire_Relic --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_RollbackQuest', 'Demo_ChangeMiniMapScale', 'Demo_AutoSave', 'Demo_ChangeScene', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_WarpPLAndResetGimmick', 'Demo_WarpPlayerToAnchor', 'Demo_ResetGimmick']
queries: ['GeneralChoice2', 'RandomChoice4', 'CheckFlag', 'RandomChoice2', 'GeneralChoice3', 'RandomChoice8']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FollowGoron
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_BecomeSpeaker']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron020[YunBo_Dungeon]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_Goron020[YunBo_Storage]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_FollowGoron[YunBo_Bridge]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_OpenMessageDialog', 'Demo_XLinkEventFade', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_BackToRailFromLava', 'Demo_TrigNullASPlay', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Drone002]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_A]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Reset']
queries: ['EnemyDieCheck']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_B]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Reset']
queries: ['EnemyDieCheck']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_Goron020_2[YunBo_Finished]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObjectNow', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_MoveToAnchor', 'Demo_StartTurnToPlayer', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron006
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Goron006_Talk() {

    call Npc_Goron006.Ready_FireRelic_Burudo()

}

void Storage_Npc_Goron006_Talk() {
    Event245:

    call Npc_Goron006.Storage_FireRelic_Burudo()

}

void Bridge_Npc_Goron006_Talk() {
    Event246:

    call Npc_Goron006.Bridge_Npc_Goron006_Talk()

}

void Battle_Npc_Goron006_Talk() {
    goto Event246
}

void Dungeon_Npc_Goron006_Talk() {
    goto Event246
}

void Dungeon_Npc_Goron020_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Goron020[YunBo_Dungeon].IsOnInstEventFlag() {
        Npc_Goron020[YunBo_Dungeon].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk49'})
    } else {
        Npc_Goron020[YunBo_Dungeon].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk51'})
    }
}

void Finished_Npc_Goron006_Talk() {

    call Npc_Goron006.Finish_FireRelic_Burudo()

}

void BattlePlaying_Npc_FollowGoron_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_BattlePlaying_HintArea1'}) {
        RemainsFire_Drone_A_01[Drone002].Demo_Join({'IsWaitFinish': True})
        Npc_FollowGoron.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk144', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_NPC020_Follow'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle3rdAttack'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle2ndAttack'}) {
                if !EventSystemActor.RandomChoice2() {
                    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk119'})
                } else {
                    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk120'})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle1stAttack'}) {
                if !EventSystemActor.RandomChoice2() {
                    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk117'})
                } else {
                    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk118'})
                }
            } else
            if !EventSystemActor.RandomChoice2() {
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk115'})
            } else {
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk116'})
            }
        }
    } else
    if !EventSystemActor.RandomChoice2() {
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk172'})
    } else {
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk173'})
    }
}

void BattlePlaying_Npc_Goron006_Talk() {
    goto Event246
}

void GoDeathMt_Npc_Goron006_Talk() {

    call Npc_Goron006.GoDeathMt_FireRelic_Burudo()

}

void GoDeathMt_Npc_FollowGoron_Talk() {
    Event43:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_FollowGoron[YunBo_Bridge].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch', 'MessageId': 'EventFlowMsg/Fire_Relic:talk143', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
      case 1:
        Npc_FollowGoron[YunBo_Bridge].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Fire_Relic:talk168'})
      case 2:
        Npc_FollowGoron[YunBo_Bridge].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Fire_Relic:talk169'})
      case 3:
        Npc_FollowGoron[YunBo_Bridge].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Crouch', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Fire_Relic:talk170'})
    }
}

void Bridge_Npc_FollowGoron_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_NPC020_Follow'}) {
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk114'})
    } else {
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk114'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaInAppear'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaIn'})
        EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    }
}

void Battle_Npc_FollowGoron_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_NPC020_Follow'}) {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk16'})
          case 1:
            Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk17'})
          case 2:
            Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk19'})
          case 3:
            Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk18'})
        }
    } else {
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk66'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
        EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    }
}

void Bridge_Npc_FollowGoron_Near() {
    Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Fire_Relic:near04', 'DispFrame': 90})
}

void BattlePlaying_Npc_FollowGoron_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_NPC020_Follow'}) {
        switch EventSystemActor.RandomChoice8() {
          case [0, 1]:
            Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Follow_00', 'DispFrame': 90})
          case [2, 3]:
            Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Follow_01', 'DispFrame': 90})
          case [4, 5]:
            Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Follow_02', 'DispFrame': 90})
          case 6:
            Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Follow_03'})
          case 7:
            Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:Follow_04'})
        }
    } else {
        Npc_FollowGoron.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Fire_Relic:near04'})
    }
}

void Ready_Npc_Goron006_Near() {

    call Npc_Goron006.Ready_FireRelic_Burudo_Near()

}

void Storage_Npc_Goron006_Near() {
    Event244:

    call Npc_Goron006.Near()

}

void GoDeathMt_Npc_Goron006_Near() {
    goto Event244
}

void Bridge_Npc_Goron006_Near() {
    goto Event244
}

void Battle_Npc_Goron006_Near() {
    goto Event244
}

void BattlePlaying_Npc_Goron006_Near() {
    goto Event244
}

void Dungeon_Npc_Goron006_Near() {
    goto Event244
}

void Finished_Npc_Goron006_Near() {

    call Npc_Goron006.Finish_FireRelic_Burudo_Near()

}

void GoDeathMt_Npc_FollowGoron_Near() {
    Event750:
    switch EventSystemActor.RandomChoice8() {
      case [0, 1]:
        Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 300, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpEnemy_00'})
      case [2, 3]:
        Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 300, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpEnemy_01'})
      case [4, 5]:
        Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 300, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpEnemy_02'})
      case 6:
        Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 300, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpEnemy_03'})
      case 7:
        Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 300, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpEnemy_04'})
    }
}

void BattleAreaOut() {
    Event1036:
    Npc_FollowGoron[YunBo_Bridge].Demo_BackToRailFromLava({'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    Npc_FollowGoron[YunBo_Bridge].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Fire_Relic:talk103'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Bridge'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2177.636962890625, 'Pattern1PosY': 635.145751953125, 'Pattern1PosZ': -2329.929443359375, 'Pattern1AtX': 2180.977294921875, 'Pattern1AtY': 634.7010498046875, 'Pattern1AtZ': -2334.6416015625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'Battle_Start', 'SystemResetOption': 0, 'AdditionalResetActor': ''})
        Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})
        Event928:
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_FollowGoron[YunBo_Bridge].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_FollowGoron[YunBo_Bridge].Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Wait', 'ASSlot': 1, 'SequenceBank': 0, 'IsIgnoreSame': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_CannonReset_For_Bridge', 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        Npc_FollowGoron[YunBo_Bridge].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Fire_Relic:talk104'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PlayerUpdateOnlyBottomComebackPos'})
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle'}) {
                EventBgmCtrlTag.Demo_Stop({'BgmName': 'RemainsFireBattleBgm', 'IsWaitFinish': True, 'FadeSec': 3.5})
            }
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaInAppear'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaIn'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_DemoArea_Demo346_4'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Demo346_4'})
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Battle'}) {
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Fire_Relic_DeathMt_Wind_OFF', 'IsWaitFinish': True})
                EventSystemActor.Demo_ChangeMiniMapScale({'IsWaitFinish': True, 'ScaleLevel': -1})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_YunboStopGo'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Bridge00'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon1st'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon2nd'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_ForceSavePos_YunBo_Cannon3nd'})
                EventSystemActor.Demo_RollbackQuest({'QuestName': 'Fire_Relic', 'StepName': 'Battle', 'IsWaitFinish': True})
                Event330:
                Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk106'})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
            } else {
                goto Event330
            }
        } else {
            Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk105'})
        }
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2151.47314453125, 'Pattern1PosY': 636.8880004882812, 'Pattern1PosZ': -2300.201416015625, 'Pattern1AtX': 2156.231201171875, 'Pattern1AtY': 636.049072265625, 'Pattern1AtZ': -2296.743896484375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'StartPosName': 'Bridge_Start', 'AdditionalResetActor': ''})
        Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction10'})
        goto Event928
    }
}

void BattlePlaying_Npc_FollowGoron_StepStart() {
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_WhistleMessage'}) {
        Event411:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_YunboStopGo'})
        EventSystemActor.Demo_ChangeMiniMapScale({'IsWaitFinish': True, 'ScaleLevel': 3})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PlayerUpdateOnlyBottomComebackPos'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {
        Npc_FollowGoron.Demo_BecomeSpeaker({'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_FollowGoron")})

        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk94'})
        Event388:
        Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk95'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Rready_NPC020_Wink'}) {
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk102'})
                goto Event388
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Rready_NPC020_Wink', 'IsWaitFinish': True})
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk96'})
                goto Event388
            }
          case 1:
            Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk99'})

            call OperationGuide.Guide_Whiistle()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Horse_Is_Registration'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_WhistleMessage'})
            goto Event411
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Rready_NPC020_Telepathy'}) {
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk100'})
                goto Event388
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Rready_NPC020_Telepathy', 'IsWaitFinish': True})
                Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk98'})
                goto Event388
            }
        }
    }
}

void Finished_Npc_Goron020_2_Near() {
    Npc_Goron020_2[YunBo_Finished].Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 240.0})
    Npc_Goron020_2[YunBo_Finished].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Fire_Relic:near05', 'DispFrame': 90, 'IsChecked': False})
}

void Finished_Npc_Goron020_2_Fire_Relic_Finish_NPC020_First_Near() {
    Npc_Goron020_2[YunBo_Finished].Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 240.0})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Goron020_2[YunBo_Finished].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Fire_Relic:near06', 'DispFrame': 90, 'IsChecked': False})
}

void Finished_Npc_Goron020_2_Fire_Relic_Finish_NPC020_First_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.RandomChoice2() {
        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk110'})
    } else {
        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk111'})
    }
}

void BridgeAreaOut() {
    goto Event1036
}

void Dungeon_SceneChange() {
    EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainFieldDungeon/RemainsFire', 'WarpDestPosName': 'Entrance_1', 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'IsWaitFinish': True, 'FadeType': 0})
}

void GoDeathMt_EnemyDie() {

    call Common.AirStartUP_Player()

    Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.1970209926366806, 'Pattern1PosY': 2.574889898300171, 'Pattern1PosZ': 8.2459716796875, 'Pattern1AtX': -0.1188960000872612, 'Pattern1AtY': 1.998718023300171, 'Pattern1AtZ': 2.2099609375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_FollowGoron', 'UniqueName1': 'YunBo_Bridge', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_FollowGoron[YunBo_Bridge].Demo_TurnAndLookToObjectNow({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 0, 'IsConfront': True})
    }

    Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Scared', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 1, 'IsValid': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False, 'ObjectId': 0, 'ActorName': 'Npc_FollowGoron', 'UniqueName': 'YunBo_Bridge', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'ASName': 'LookAround', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk122', 'ASName': 'Talk'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_GoDeathMt_EnemyDie', 'IsWaitFinish': True})
}

void GoDeathMt_Enemy() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
    if Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_A].EnemyDieCheck() {
        Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_A].Demo_Reset({'IsWaitFinish': True})
    }
    if Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_B].EnemyDieCheck() {
        Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_B].Demo_Reset({'IsWaitFinish': True})
    }
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})

    fork {
        if Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_A].EnemyDieCheck() {
            Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_A].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'ASName': 'Noise_Demo', 'MorphingFrame': -1.0})
        }
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_B].EnemyDieCheck() {
            Enemy_Moriblin_Senior_Volcano[Fire_Relic_Bridge_Enemy_B].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Noise_Demo', 'MorphingFrame': -1.0})
        }
    }

    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2146.30615234375, 'Pattern1PosY': 652.3091430664062, 'Pattern1PosZ': -2305.28369140625, 'Pattern1AtX': 2154.99462890625, 'Pattern1AtY': 640.789794921875, 'Pattern1AtZ': -2291.316650390625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0})
    Npc_FollowGoron[YunBo_Bridge].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk121', 'ASName': 'Crouch', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_GoDeathMt_Enemy'})
}

void Storage_Npc_Goron020_IsPlayed_Demo175_0_Talk() {
    Event2:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk13'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk00'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk01'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk148'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk149'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk151'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk152'})
    Npc_Goron020[YunBo_Storage].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk153', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo346_1', 'EntryPointName': 'Demo346_1', 'IsWaitFinish': True, 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Storage', 'IsWaitFinish': True})
}

void Storage_Npc_Goron020_IsPlayed_Demo175_0_Near() {
    Event178:
    Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Fire_Relic:near01', 'IsChecked': False, 'DispFrame': 90})
}

void GoGoronCity_Npc_Goron006_Talk() {

    call Npc_Goron006.GoGoronCity_FireRelic_Burudo()

}

void GoGoronCity_Npc_Goron006_Near() {
    goto Event244
}

void Storage_Npc_Goron020_IsPlayed_Demo346_0_Near() {
    goto Event178
}

void Storage_Npc_Goron020_Fire_Relic_Storage_YunboHelp_EachFrame() {
    Event803:
    switch EventSystemActor.RandomChoice8() {
      case [0, 1]:
        Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpStrage_00', 'DispFrame': 90})
        Event802:
        EventSystemActor.Demo_WaitFrame({'Frame': 150, 'IsWaitFinish': True})
      case [2, 3]:
        Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpStrage_01', 'DispFrame': 90})
        goto Event802
      case [4, 5]:
        Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpStrage_02', 'DispFrame': 90})
        goto Event802
      case 6:
        Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpStrage_03'})
        goto Event802
      case 7:
        Npc_Goron020[YunBo_Storage].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'ShoutMsg/Shout_Npc_Goron020:HelpStrage_04'})
        goto Event802
    }
}

void NorthMine_Npc_Goron006_Talk() {
    goto Event245
}

void NorthMine_Npc_Goron006_Near() {
    goto Event244
}

void NorthMine_Npc_Goron020_Fire_Relic_Storage_YunboHelp_EachFrame() {
    goto Event803
}

void NorthMine_Npc_Goron020_IsPlayed_Demo346_0_Near() {
    goto Event178
}

void NorthMine_Npc_Goron020_IsPlayed_Demo175_0_Talk() {
    goto Event2
}

void NorthMine_Npc_Goron020_IsPlayed_Demo175_0_Near() {
    goto Event178
}

void GoDeathMt_Npc_FollowGoron_Fire_Relic_GoDeathMt_Enemy_Talk() {
    goto Event43
}

void GoDeathMt_Npc_FollowGoron_Fire_Relic_GoDeathMt_Enemy_Near() {
    goto Event750
}

void GoDeathMt_Npc_FollowGoron_Fire_Relic_GoDeathMt_EnemyDie_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk163', 'ASName': ''})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk164', 'ASName': ''})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk154', 'ASName': ''})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk155', 'ASName': ''})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk156', 'ASName': '', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk158', 'ASName': '', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 15.0797119140625, 'Pattern1PosY': 10.28668212890625, 'Pattern1PosZ': 89.296630859375, 'Pattern1AtX': 13.66668701171875, 'Pattern1AtY': 10.6239013671875, 'Pattern1AtZ': 84.916015625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'FldObj_DeathBridge_A_01', 'MotionMode': 0, 'Count': 30.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk123'})
    Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk159'})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Fire_Relic:talk160'})
    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk162'})
    Npc_FollowGoron.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False})
    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk165'})
    Npc_FollowGoron.Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk166'})
    Npc_FollowGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk167'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_Cannon'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaInAppear'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaIn'})
    EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_GoDeathMt'})
}

void GoDeathMt_Npc_FollowGoron_Fire_Relic_GoDeathMt_EnemyDie_Near() {
    Npc_FollowGoron[YunBo_Bridge].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Fire_Relic:near08'})
}

void Fire_Relic_Contact_Retry() {

    call Common.AirStartUP_Player()


    fork {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Common:Relic_Contact_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'Clear_RemainsFire', 'SystemResetOption': 2, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3767090141773224, 'Pattern1PosY': 2.064971923828125, 'Pattern1PosZ': -5.476562976837158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
}

void Meet_StrageYunBo() {
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_Meet_StrageYunBo', 'IsWaitFinish': True})
    Npc_Goron020[YunBo_Storage].Demo_TurnAndLookToObjectNow({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'GameROMPlayer', 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo175_0', 'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': ''})
}

void Finished_Npc_Goron020_2_First() {
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_Goron006.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'UniqueName': 'YunBo_Finished_First_Player1'})
    Npc_Goron020_2[YunBo_Finished].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'YunBo_Finished_First', 'AnchorName': 'AnchorAction1'})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'FaceId': 2, 'ActorName': 'Npc_Goron020_2', 'UniqueName': 'YunBo_Finished', 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObjectNow({'IsWaitFinish': True, 'IsValid': True, 'IsConfront': True, 'ActorName': 'GameROMPlayer', 'ObjectId': 0, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_Goron020_2[YunBo_Finished].Demo_BecomeSpeaker({'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Goron020_2", sub_name="YunBo_Finished"), 'Arg_Turn': 1})

    Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk52'})
    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk58'})
    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk171'})
    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Fire_Relic:talk53', 'IsCloseMessageDialog': True})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 102.0})
    Npc_Goron020_2[YunBo_Finished].Demo_MoveToAnchor({'ASKeyName': 'Run2', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction2', 'AnchorUniqueName': '', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    Npc_Goron020_2[YunBo_Finished].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Goron020_2[YunBo_Finished].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Finish_NPC020_First'})
}
