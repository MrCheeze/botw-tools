-------- EventFlow: Npc_RitoHatago004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_WaitFrame', 'Demo_AutoSave', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitWhileCreatingHorse', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_WarpPlayerToAnchor']
queries: ['CheckFlag', 'CheckHorseRegistered', 'GeneralChoice2', 'IsHorseNumMax', 'CheckRupee', 'CheckHorseTakenOut', 'GeneralChoice4', 'GeneralChoice3', 'CheckPlayerState', 'RandomChoice8']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: Npc_RitoHatago004
entrypoint: None()
actions: []
queries: []
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

Actor: Npc_RitoHatago004[UMaster_OutSideTalk(Self)]
entrypoint: UMaster_OutSideTalk(Self)
actions: ['Demo_Talk', 'Demo_TalkNoCloseDialog', 'Demo_HorseReceptionRelease', 'Demo_EndHorseReception', 'Demo_ReleaseHorse', 'Demo_InfoOnHorse', 'Demo_InfoOffHorse', 'Demo_TalkNoCloseDialogWB', 'Demo_NameHorse', 'Demo_InfoOnNamedHorse', 'Demo_RegisterHorse', 'Demo_RegisterAndReceiveHorse', 'Demo_HorseReception', 'Demo_DeliverHorse', 'Demo_ReceiveHorse']
queries: ['CheckTypeOfWildHorseAssociated']
params: None

Actor: Npc_RitoHatago004[UMaster_InsideTalk(Self)]
entrypoint: UMaster_InsideTalk(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Talk() {

    call UMaster_OutSideTalk({'Self': ActorIdentifier(name="Npc_RitoHatago004")})

}

void UmayadoMasterInside_Talk() {

    call UMaster_InsideTalk({'Self': ActorIdentifier(name="Npc_RitoHatago004")})

}

void UMaster_OutSideTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        LastRiddenHorse_ForEvent.Demo_Idling({'IsWaitFinish': False})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'UmaKyoukai_001'}) {
        if EventSystemActor.CheckHorseRegistered() {
            switch Npc_RitoHatago004[UMaster_OutSideTalk(Self)].CheckTypeOfWildHorseAssociated() {
              case [0, 1, 2, 3, 4, 5, 6]:
                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk04', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Event141:
                    switch Npc_RitoHatago004[UMaster_OutSideTalk(Self)].CheckTypeOfWildHorseAssociated() {
                      case [0, 1, 2, 3]:
                        if EventSystemActor.IsHorseNumMax() {
                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register01', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register02', 'IsOverWriteLabelActorName': False})
                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_HorseReceptionRelease({'IsWaitFinish': True})
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                if EventSystemActor.CheckFlag({'FlagName': 'Horse_IsSelected'}) {
                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register03', 'IsOverWriteLabelActorName': False})
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_EndHorseReception({'IsWaitFinish': True})
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register11', 'IsOverWriteLabelActorName': False})
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_ReleaseHorse({'IsWaitFinish': True})
                                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register04', 'IsOverWriteLabelActorName': False})
                                        Event163:
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_InfoOnHorse({'IsWaitFinish': True})
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register23', 'IsCloseMessageDialog': False})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_InfoOffHorse({'IsWaitFinish': True})
                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register22', 'IsCloseMessageDialog': False})
                                            if !EventSystemActor.GeneralChoice2() {
                                                if EventSystemActor.CheckRupee({'Value': 20}) {
                                                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register14', 'IsOverWriteLabelActorName': False})
                                                    switch Npc_RitoHatago004[UMaster_OutSideTalk(Self)].CheckTypeOfWildHorseAssociated() {
                                                      case [0, 2, 3, 4, 5, 6, 7]:
                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_TalkNoCloseDialogWB({'ASName': '', 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register17', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': False})
                                                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                                        Event246:
                                                        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_NameHorse({'IsWaitFinish': True})
                                                        if EventSystemActor.CheckFlag({'FlagName': 'Horse_IsNewNameEntered'}) {
                                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_InfoOnNamedHorse({'IsWaitFinish': True})
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register06', 'IsOverWriteLabelActorName': False})
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_InfoOffHorse({'IsWaitFinish': True})
                                                            if !EventSystemActor.GeneralChoice2() {
                                                                Event37:
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                                if !EventSystemActor.GeneralChoice2() {
                                                                    switch EventSystemActor.CheckHorseTakenOut() {
                                                                      case [0, 1]:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register08', 'IsOverWriteLabelActorName': False})
                                                                        Event41:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_RegisterHorse({'IsWaitFinish': True})
                                                                        Event42:
                                                                        if EventSystemActor.CheckFlag({'FlagName': 'Horse_Is_Registration'}) {
                                                                            Event43:
                                                                            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                                                                        } else {
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register18'})

                                                                            call OperationGuide.Guide_Whiistle()

                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register19'})
                                                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Horse_Is_Registration'})
                                                                            goto Event43
                                                                        }
                                                                      case 2:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register09', 'IsOverWriteLabelActorName': False})
                                                                        goto Event41
                                                                    }
                                                                } else {
                                                                    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
                                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_RegisterAndReceiveHorse({'IsWaitFinish': True})
                                                                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                                                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
                                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register09'})
                                                                    goto Event42
                                                                }
                                                            } else {
                                                                Event49:
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_TalkNoCloseDialogWB({'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register13', 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsWaitFinish': True})
                                                                goto Event246
                                                            }
                                                        } else {
                                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                            goto Event49
                                                        }
                                                      case 1:
                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register20'})
                                                        Event151:
                                                        if !EventSystemActor.GeneralChoice2() {
                                                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                                            goto Event37
                                                        } else {
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register21'})
                                                            goto Event151
                                                        }
                                                    }
                                                } else {
                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register15', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                    Event52:
                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                                    Event53:
                                                    switch EventSystemActor.GeneralChoice4() {
                                                      case 0:
                                                        if EventSystemActor.CheckHorseRegistered() {
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver00', 'IsOverWriteLabelActorName': False})
                                                            Event63:
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_HorseReception({'IsWaitFinish': True})
                                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                            if EventSystemActor.CheckFlag({'FlagName': 'Horse_IsSelected'}) {
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver02', 'IsOverWriteLabelActorName': False})
                                                                if !EventSystemActor.GeneralChoice2() {
                                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_EndHorseReception({'IsWaitFinish': True})
                                                                    switch EventSystemActor.CheckHorseTakenOut() {
                                                                      case 0:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver03', 'IsOverWriteLabelActorName': False})
                                                                        Event71:
                                                                        Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'Frame': 0, 'IsWaitFinish': True})
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_DeliverHorse({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                                                                        GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': False, 'ClearDemoMemberIfNotOwned': False})
                                                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                                                                        EventSystemActor.Demo_WarpPlayerToAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'UniqueName': 'UmaKyoukai'})
                                                                        EventSystemActor.Demo_WaitWhileCreatingHorse({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                                                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver04', 'IsOverWriteLabelActorName': False})
                                                                        switch EventSystemActor.RandomChoice8() {
                                                                          case [0, 7]:
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Advice01'})
                                                                          case [1, 6]:
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Advice02'})
                                                                          case 2:
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Advice03'})
                                                                          case 3:
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Advice04'})
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register19'})
                                                                          case [4, 5]:
                                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Advice05'})
                                                                        }
                                                                      case 1:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver07', 'IsOverWriteLabelActorName': False})
                                                                        goto Event71
                                                                      case 2:
                                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver05', 'IsOverWriteLabelActorName': False})
                                                                        goto Event71
                                                                    }
                                                                } else {
                                                                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver06', 'IsOverWriteLabelActorName': False})
                                                                    goto Event63
                                                                }
                                                            } else {
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                                goto Event52
                                                            }
                                                        } else {
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                            goto Event52
                                                        }
                                                      case 1:
                                                        switch EventSystemActor.CheckHorseTakenOut() {
                                                          case [0, 1]:
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive05', 'IsOverWriteLabelActorName': False})
                                                            if !EventSystemActor.GeneralChoice2() {
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Deliver03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                                Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 2})
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_ReceiveHorse({'IsWaitFinish': True})
                                                                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                                                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive02', 'IsOverWriteLabelActorName': False})
                                                                goto Event52
                                                            } else {
                                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                                goto Event52
                                                            }
                                                          case 2:
                                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                            goto Event52
                                                        }
                                                      case 2:
                                                        goto Event141
                                                      case 3:
                                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive04', 'IsOverWriteLabelActorName': False})
                                                    }
                                                }
                                            } else {
                                                Event80:
                                                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register16', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                                goto Event52
                                            }
                                        } else {
                                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_InfoOffHorse({'IsWaitFinish': True})
                                            goto Event80
                                        }
                                    } else {
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_EndHorseReception({'IsWaitFinish': True})
                                        Event81:
                                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register12', 'IsOverWriteLabelActorName': False})
                                    }
                                } else {
                                    goto Event81
                                }
                            } else {
                                goto Event81
                            }
                        } else {
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register05', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            goto Event163
                        }
                      case 4:
                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register00_1'})
                      case 5:
                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register00_2', 'IsCloseMessageDialog': True})
                      case 6:
                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register00_3', 'IsCloseMessageDialog': True})
                      case 7:
                        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Register00', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        goto Event52
                    }
                } else {
                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk05', 'IsOverWriteLabelActorName': False})
                    goto Event52
                }
              case 7:
                if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_06'})
                }
                if EventSystemActor.CheckFlag({'FlagName': 'UmaKyoukai_002'}) {
                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk06'})
                } else {
                    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk01', 'IsOverWriteLabelActorName': False})
                }
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UmaKyoukai_002'})
                goto Event53
            }
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_06'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'UmaKyoukai_002'}) {
            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk07'})
            Event88:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event141
              case 1:
                Event89:
                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_03', 'IsOverWriteLabelActorName': False})
                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Event91:
                EventSystemActor.Demo_FlagON({'FlagName': 'UmaKyoukai_001', 'IsWaitFinish': True})
                Event87:
                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:KyoukaiTalk02', 'IsOverWriteLabelActorName': False})
                goto Event88
              case 2:
                Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Receive04', 'IsOverWriteLabelActorName': False})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UmaKyoukai_002'})
            goto Event87
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_06'})
    }
    Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_01', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_02', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            goto Event89
        } else {
            Event97:
            Npc_RitoHatago004[UMaster_OutSideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:TalkHatu_04', 'IsOverWriteLabelActorName': False})
            goto Event91
        }
    } else {
        goto Event97
    }
}

void UMaster_InsideTalk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk01_01'})
    } else {
        Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk01', 'IsOverWriteLabelActorName': False})
    }
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
    Event165:
    Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk15'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckRupee({'Value': 20}) {
            Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk04', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk06', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk08', 'IsOverWriteLabelActorName': False})
                Event218:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk06', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk09', 'IsOverWriteLabelActorName': False})
                goto Event218
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk06', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk10', 'IsOverWriteLabelActorName': False})
                goto Event218
              case 3:
                Event120:
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk02', 'IsOverWriteLabelActorName': False})
                Event226:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            }
        } else {
            Event122:
            Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk03', 'IsOverWriteLabelActorName': False})
            goto Event226
        }
      case 1:
        if EventSystemActor.CheckRupee({'Value': 40}) {
            Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk05', 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk07', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk11', 'IsOverWriteLabelActorName': False})
                goto Event218
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk07', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk12', 'IsOverWriteLabelActorName': False})
                goto Event218
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk07', 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk13', 'IsOverWriteLabelActorName': False})
                goto Event218
              case 3:
                goto Event120
            }
        } else {
            goto Event122
        }
      case 2:
        Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk16'})
        Npc_RitoHatago004[UMaster_InsideTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago004:Talk14', 'IsCloseMessageDialog': True})
        goto Event165
      case 3:
        goto Event120
    }
}
