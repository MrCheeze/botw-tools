-------- EventFlow: Npc_Kakariko014 --------

Actor: Npc_Kakariko014
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice4', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Npc_Kakariko013
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko014_SoldOut'}) {
        Npc_Kakariko014.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Event22:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko014_PlantM_SoldOut'}) {
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk19'})
                Event77:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk17'})
                goto Event22
            } else {
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk14'})
                goto Event77
            }
          case 1:
            Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk15'})
            goto Event77
          case 2:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko014")})

            Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk18'})
            goto Event77
          case 3:
            Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk16'})
        }
    } else
    if Npc_Kakariko014.IsOnInstEventFlag() {
        Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk17'})
        goto Event22
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko014_Talk'}) {
        Npc_Kakariko014.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event22
    } else {
        Npc_Kakariko014.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko014_Talk', 'IsWaitFinish': True})
        goto Event22
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko014_SoldOut'}) {
        Npc_Kakariko014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Near01', 'IsChecked': False, 'DispFrame': 90})
    } else {
        Npc_Kakariko014.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}

void Sell() {
    switch Npc_Kakariko014.CheckPlacedItemSaled() {
      case [0, 2]:
        if Npc_Kakariko014.IsOnInstEventFlag() in [1, 0] {
            Npc_Kakariko014.Demo_SetInstEventFlag({'IsWaitFinish': True})
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_Kakariko014.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case 1:
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk20'})
              case 2:
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk21'})
              case 3:
                Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk22'})
            }
        }
      case 1:
        if Npc_Kakariko014.IsOnInstEventFlag() {
            Event11:
            Npc_Kakariko014.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        } else {
            Npc_Kakariko014.Demo_SetInstEventFlag({'IsWaitFinish': True})
            goto Event11
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_Kakariko014")})


    call Sell()

}

void NearActorsTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Kakariko014', 'Actor2': 'Npc_Kakariko013'})


    fork {
        Npc_Kakariko013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Kakariko014', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_Kakariko013.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_Kakariko014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko014_SoldOut'}) {
        Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk12'})
        goto Event22
    } else {
        Npc_Kakariko014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Talk13'})
        goto Event22
    }
}

void NearActorsNear() {
    Npc_Kakariko014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko014:Near03', 'IsChecked': False, 'DispFrame': 90})
}
