-------- EventFlow: Gerudo_HorseBuyer --------

Actor: Npc_HorseBuyer
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BuyHorse', 'Demo_TalkASync', 'Demo_TrigNullASPlay']
queries: ['IsOwnedHorseAssociated', 'CheckTypeOfWildHorseAssociated', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_GetOffFromHorse']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Ready_Npc_HorseBuyer_Talk() {
    if !EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        LastRiddenHorse_ForEvent.Demo_Idling({'IsWaitFinish': False})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HorseBuyer.IsOnInstEventFlag() {
        Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk16'})
    } else {
        Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
    switch Npc_HorseBuyer.IsOwnedHorseAssociated({'IsRidden': True}) {
      case [0, 1, 4]:
        Event42:
        Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk06', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': '', 'StepName': ''})
        EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})
        Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk13', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk03'})
            if !EventSystemActor.GeneralChoice2() {
                Event31:
                Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk12', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk05', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                Npc_HorseBuyer.Demo_TrigNullASPlay({'ASName': 'RideWait', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0})
                GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': True, 'ClearDemoMemberIfNotOwned': False})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2023.8621826171875, 'Pattern1PosY': 159.25865173339844, 'Pattern1PosZ': 1880.1103515625, 'Pattern1AtX': -2027.7943115234375, 'Pattern1AtY': 158.89349365234375, 'Pattern1AtZ': 1875.5947265625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2028.0, 'DestinationY': 156.9600067138672, 'DestinationZ': 1875.5699462890625, 'DirectionY': 200.0})
                Npc_HorseBuyer.Demo_BuyHorse({'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 0, 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_HorseBuyer_Finish'})
            } else {
                Event46:
                Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk04'})
            }
        } else {
            goto Event46
        }
      case [2, 3]:
        switch Npc_HorseBuyer.CheckTypeOfWildHorseAssociated() {
          case [0, 1, 2]:
            goto Event42
          case [3, 4, 5, 6, 7]:
            Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk10', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_HorseBuyer_Activated'})
            } else {
                Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        }
    }
}

void Finish_Npc_HorseBuyer_Talk() {
    if !EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        LastRiddenHorse_ForEvent.Demo_Idling({'IsWaitFinish': False})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_HorseBuyer.IsOwnedHorseAssociated({'IsRidden': True}) {
      case [0, 1, 4]:
        Event5:
        Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk02'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk03'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event31
            } else {
                Event10:
                Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk04'})
            }
        } else {
            goto Event10
        }
      case 2:
        Event25:
        Npc_HorseBuyer.Demo_Talk({'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        switch Npc_HorseBuyer.CheckTypeOfWildHorseAssociated() {
          case [0, 1, 2]:
            goto Event5
          case 3:
            goto Event25
          case 4:
            Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk14'})
          case [5, 6]:
            Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk15'})
          case 7:
            Npc_HorseBuyer.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Talk01'})
        }
    }
}

void Ready_Npc_HorseBuyer_Near() {
    Event34:
    Npc_HorseBuyer.Demo_TalkASync({'DispFrame': 300, 'IsChecked': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Near_00'})
}

void Finish_Npc_HorseBuyer_Near() {
    switch Npc_HorseBuyer.IsOwnedHorseAssociated({'IsRidden': True}) {
      case [0, 1, 4]:
        goto Event34
      case 2:
        Event35:
        Npc_HorseBuyer.Demo_TalkASync({'IsChecked': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_HorseBuyer:Near_01', 'DispFrame': 90})
      case 3:
        switch Npc_HorseBuyer.CheckTypeOfWildHorseAssociated() {
          case [0, 1, 2]:
            goto Event34
          case [3, 4, 5, 6, 7]:
            goto Event35
        }
    }
}
