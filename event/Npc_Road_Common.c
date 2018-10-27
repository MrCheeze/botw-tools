-------- EventFlow: Npc_Road_Common --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['RandomChoice2', 'RandomChoice8', 'CheckAddPorchItem', 'CheckFlag', 'RandomChoice4', 'CheckTimeType', 'RandomChoice3', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Road_001[Atacked(Self)]
entrypoint: Atacked(Self)
actions: ['Demo_Talk']
queries: ['CheckResultOfNPCConflict', 'CheckRankOfEnemyAttackedNPC', 'IsWeaponDrawn']
params: None

Actor: Npc_Attacked_008[Atacked_Pair(Self)]
entrypoint: Atacked_Pair(Self)
actions: ['Demo_Talk']
queries: ['CheckResultOfNPCConflict', 'CheckRankOfEnemyAttackedNPC', 'IsWeaponDrawn', 'CheckReceiveTerrorLevel']
params: None

Actor: Npc_Attacked_009[Atacked_Pair(Pair)]
entrypoint: Atacked_Pair(Pair)
actions: []
queries: []
params: None

Actor: Npc_Road_001[InitTalk_Npc_Road_Common(Self)]
entrypoint: InitTalk_Npc_Road_Common(Self)
actions: ['Demo_ForbidSettingInstEventFlag', 'Demo_Talk']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict', 'IsWeaponDrawn']
params: None

Actor: Npc_Road_001[Atacked_Road(Self)]
entrypoint: Atacked_Road(Self)
actions: ['Demo_Talk']
queries: ['CheckResultOfNPCConflict', 'CheckRankOfEnemyAttackedNPC', 'IsWeaponDrawn']
params: None

Actor: Npc_Road_001[CookReword(Self)]
entrypoint: CookReword(Self)
actions: ['Demo_GiveReward']
queries: []
params: None

Actor: Npc_Road_001[Reward(Self)]
entrypoint: Reward(Self)
actions: ['Demo_GiveReward']
queries: []
params: None

Actor: Npc_Road_027[InitTalk_Npc_Road_027(Self)]
entrypoint: InitTalk_Npc_Road_027(Self)
actions: ['Demo_ForbidSettingInstEventFlag', 'Demo_Talk']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict', 'IsWeaponDrawn']
params: None

Actor: Npc_Road_001[Atacked_Road_NoReward(Self)]
entrypoint: Atacked_Road_NoReward(Self)
actions: ['Demo_Talk']
queries: ['CheckResultOfNPCConflict', 'CheckRankOfEnemyAttackedNPC', 'IsWeaponDrawn']
params: None

Actor: Npc_Road_001[Cook(Self)]
entrypoint: Cook(Self)
actions: []
queries: ['CheckMapArea']
params: None

Actor: Npc_Road_001[S_Cook_Stamina(Self)]
entrypoint: S_Cook_Stamina(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[N_Cook_Gambari(Self)]
entrypoint: N_Cook_Gambari(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[S_Cook_Max(Self)]
entrypoint: S_Cook_Max(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[A_Cook_Hot(Self)]
entrypoint: A_Cook_Hot(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[A_Cook_Cold(Self)]
entrypoint: A_Cook_Cold(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[A_Cook_Elec(Self)]
entrypoint: A_Cook_Elec(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[A_Cook_Fire(Self)]
entrypoint: A_Cook_Fire(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[N_Cook_GoGo(Self)]
entrypoint: N_Cook_GoGo(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[N_Cook_Quiet(Self)]
entrypoint: N_Cook_Quiet(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[N_Cook_Power(Self)]
entrypoint: N_Cook_Power(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[N_Cook_Guard(Self)]
entrypoint: N_Cook_Guard(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[S_Cook_Fairy(Self)]
entrypoint: S_Cook_Fairy(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[Cook_NoFire(Self)]
entrypoint: Cook_NoFire(Self)
actions: []
queries: ['CheckMapArea']
params: None

Actor: Npc_Road_001[CookReward_NoFire(Self)]
entrypoint: CookReward_NoFire(Self)
actions: ['Demo_GiveReward']
queries: []
params: None

void Atacked() {
    switch Npc_Road_001[Atacked(Self)].CheckResultOfNPCConflict() {
      case [0, 1]:
        switch Npc_Road_001[Atacked(Self)].CheckRankOfEnemyAttackedNPC() {
          case 0:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True})
                Event163:

                call CookReword({'Self': 'Self', 'Flag': 'Flag'})

            } else {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_01', 'IsCloseMessageDialog': True})
                goto Event163
            }
          case 1:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_00', 'IsCloseMessageDialog': True})
                goto Event163
            } else {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_01', 'IsCloseMessageDialog': True})
                goto Event163
            }
          case 2:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_00', 'IsCloseMessageDialog': True})
                goto Event163
            } else {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_01', 'IsCloseMessageDialog': True})
                goto Event163
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed00', 'IsCloseMessageDialog': False})
        } else {
            Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed01', 'IsCloseMessageDialog': False})
        }
      case 3:
        if Npc_Road_001[Atacked(Self)].IsWeaponDrawn() {
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                Event60:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                goto Event60
            }
        } else
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event60
        } else {
            Npc_Road_001[Atacked(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event60
        }
    }
}

void Atacked_Pair() {
    switch Npc_Attacked_008[Atacked_Pair(Self)].CheckResultOfNPCConflict() {
      case [0, 1]:
        switch Npc_Attacked_008[Atacked_Pair(Self)].CheckRankOfEnemyAttackedNPC() {
          case 0:
            if !EventSystemActor.RandomChoice2() {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv1_00'})
                Event165:

                call CookReword({'Self': 'Self', 'Flag': 'Flag'})

            } else {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv1_01'})
                goto Event165
            }
          case 1:
            if !EventSystemActor.RandomChoice2() {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv2_00'})
                goto Event165
            } else {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv2_01'})
                goto Event165
            }
          case 2:
            if !EventSystemActor.RandomChoice2() {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv3_00'})
                goto Event165
            } else {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:SavedLv3_01'})
                goto Event165
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Failed00'})
        } else {
            Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Failed01'})
        }
      case 3:
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'AttackedState', 'Operator': 'Equal', 'Value': 2}) {
            if Npc_Attacked_008[Atacked_Pair(Self)].IsWeaponDrawn() {
                if !EventSystemActor.RandomChoice2() {
                    Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairFailed00', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                    Event83:
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                } else {
                    Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairFailed01', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                    goto Event83
                }
            } else
            if !EventSystemActor.RandomChoice2() {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairFailed00', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
                goto Event83
            } else {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairFailed01', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
                goto Event83
            }
        } else
        switch Npc_Attacked_008[Atacked_Pair(Self)].CheckReceiveTerrorLevel() {
          case [0, 1, 2]:
            if EventSystemActor.CheckGameDataInt({'Value': 3, 'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'TerrorState'}) {
                if Npc_Attacked_008[Atacked_Pair(Self)].IsWeaponDrawn() {
                    if !EventSystemActor.RandomChoice2() {
                        Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairAtacked00', 'ASName': 'Guard'})
                        goto Event83
                    } else {
                        Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairAtacked01', 'ASName': 'Guard'})
                        goto Event83
                    }
                } else
                if !EventSystemActor.RandomChoice2() {
                    Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairAtacked00', 'ASName': 'Detect'})
                    goto Event83
                } else {
                    Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:PairAtacked01', 'ASName': 'Detect'})
                    goto Event83
                }
            } else
            Event445:
            if Npc_Attacked_008[Atacked_Pair(Self)].IsWeaponDrawn() {
                Event81:
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Atacked01', 'ASName': 'Guard'})
                goto Event83
            } else {
                Event138:
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Atacked01', 'ASName': 'Detect'})
                goto Event83
            }
          case 3:
            if Npc_Attacked_008[Atacked_Pair(Self)].IsWeaponDrawn() {
                if !EventSystemActor.RandomChoice2() {
                    Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Atacked00', 'ASName': 'Guard'})
                    goto Event83
                } else {
                    goto Event81
                }
            } else
            if !EventSystemActor.RandomChoice2() {
                Npc_Attacked_008[Atacked_Pair(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_008:Atacked00', 'ASName': 'Detect'})
                goto Event83
            } else {
                goto Event138
            }
          case [4, 5]:
            goto Event445
        }
    }
}

void InitTalk_Npc_Road_Common() {
    switch Npc_Road_001[InitTalk_Npc_Road_Common(Self)].CheckTerrorLevel() {
      case 3:
        switch Npc_Road_001[InitTalk_Npc_Road_Common(Self)].CheckResultOfNPCConflict() {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

            Event98:

            call Atacked_Road({'Self': 'Self', 'Flag': 'Flag'})

            Event141:
            Npc_Road_001[InitTalk_Npc_Road_Common(Self)].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 2:
            Event124:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

            goto Event98
          case 3:
            if Npc_Road_001[InitTalk_Npc_Road_Common(Self)].IsWeaponDrawn() {

                call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

                goto Event98
            } else {
                goto Event124
            }
        }
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Road_001[InitTalk_Npc_Road_Common(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'ASName': 'Detect'})
        goto Event141
    }
}

void Atacked_Road() {
    switch Npc_Road_001[Atacked_Road(Self)].CheckResultOfNPCConflict() {
      case [0, 1]:
        switch Npc_Road_001[Atacked_Road(Self)].CheckRankOfEnemyAttackedNPC() {
          case 0:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': False})
                Event122:
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks00'})

                call CookReword({'Self': 'Self', 'Flag': 'Flag'})

            } else {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_01', 'IsCloseMessageDialog': False})
                goto Event122
            }
          case 1:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_00', 'IsCloseMessageDialog': False})
                goto Event122
            } else {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_01', 'IsCloseMessageDialog': False})
                goto Event122
            }
          case 2:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_00', 'IsCloseMessageDialog': False})
                goto Event122
            } else {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_01', 'IsCloseMessageDialog': False})
                goto Event122
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed00', 'IsCloseMessageDialog': True})
            Event121:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed01', 'IsCloseMessageDialog': True})
            goto Event121
        }
      case 3:
        if Npc_Road_001[Atacked_Road(Self)].IsWeaponDrawn() {
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                goto Event121
            } else {
                Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                goto Event121
            }
        } else
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event121
        } else {
            Npc_Road_001[Atacked_Road(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event121
        }
    }
}

void CookReword() {
    if EventSystemActor.CheckFlag({'FlagName': 'Flag'}) {
        Event151:
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'GetDemo_Standard', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
        Npc_Road_001[CookReward_NoFire(Self)].Demo_GiveReward({'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Flag', 'IsWaitFinish': True})

        call Cook({'Self': 'Self'})

    }
}

void Reward() {
    goto Event151
}

void InitTalk_Npc_Road_027() {
    switch Npc_Road_027[InitTalk_Npc_Road_027(Self)].CheckTerrorLevel() {
      case 3:
        switch Npc_Road_027[InitTalk_Npc_Road_027(Self)].CheckResultOfNPCConflict() {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

            Event216:

            call Atacked_Road_NoReward({'Self': 'Self'})


            call CookReward_NoFire({'Self': 'Self', 'Flag': 'Flag'})

            Event254:
            Npc_Road_027[InitTalk_Npc_Road_027(Self)].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
          case 2:
            Event237:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

            goto Event216
          case 3:
            if Npc_Road_027[InitTalk_Npc_Road_027(Self)].IsWeaponDrawn() {

                call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

                goto Event216
            } else {
                goto Event237
            }
        }
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Road_027[InitTalk_Npc_Road_027(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'ASName': 'Detect'})
        goto Event254
    }
}

void Atacked_Road_NoReward() {
    switch Npc_Road_001[Atacked_Road_NoReward(Self)].CheckResultOfNPCConflict() {
      case [0, 1]:
        switch Npc_Road_001[Atacked_Road_NoReward(Self)].CheckRankOfEnemyAttackedNPC() {
          case 0:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': False})
                Event235:
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks00'})
            } else {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_01', 'IsCloseMessageDialog': False})
                goto Event235
            }
          case 1:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_00', 'IsCloseMessageDialog': False})
                goto Event235
            } else {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_01', 'IsCloseMessageDialog': False})
                goto Event235
            }
          case 2:
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_00', 'IsCloseMessageDialog': False})
                goto Event235
            } else {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_01', 'IsCloseMessageDialog': False})
                goto Event235
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed00', 'IsCloseMessageDialog': True})
            Event234:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed01', 'IsCloseMessageDialog': True})
            goto Event234
        }
      case 3:
        if Npc_Road_001[Atacked_Road_NoReward(Self)].IsWeaponDrawn() {
            if !EventSystemActor.RandomChoice2() {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                goto Event234
            } else {
                Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                goto Event234
            }
        } else
        if !EventSystemActor.RandomChoice2() {
            Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event234
        } else {
            Npc_Road_001[Atacked_Road_NoReward(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsCloseMessageDialog': True, 'ASName': 'Detect'})
            goto Event234
        }
    }
}

void Cook() {
    if Npc_Road_001[Cook(Self)].CheckMapArea({'MapAreaName': 'EldinCanyon'}) {
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Event396:

            call A_Cook_Fire({'Self': 'Self'})

          case [1, 2]:
            Event418:
            switch EventSystemActor.RandomChoice8() {
              case 0:
                if !EventSystemActor.RandomChoice2() {

                    call S_Cook_Stamina({'Self': 'Self'})

                } else
                if !EventSystemActor.RandomChoice2() {
                    Event421:

                    call N_Cook_Gambari({'Self': 'Self'})

                } else {
                    Event422:

                    call N_Cook_GoGo({'Self': 'Self'})

                }
              case 1:
                if !EventSystemActor.RandomChoice2() {

                    call S_Cook_Max({'Self': 'Self'})

                } else
                if !EventSystemActor.RandomChoice2() {
                    Event423:

                    call N_Cook_Quiet({'Self': 'Self'})

                } else {
                    Event424:

                    call N_Cook_Power({'Self': 'Self'})

                }
              case 2:
                goto Event421
              case 3:
                goto Event422
              case 4:
                goto Event423
              case 5:
                goto Event424
              case 6:
                Event425:

                call N_Cook_Guard({'Self': 'Self'})

              case 7:
                if !EventSystemActor.RandomChoice2() {

                    call S_Cook_Fairy({'Self': 'Self'})

                } else {
                    goto Event425
                }
            }
        }
    } else
    if Npc_Road_001[Cook(Self)].CheckMapArea({'MapAreaName': 'TamulPlateau'}) {
        switch EventSystemActor.RandomChoice3() {
          case 0:
            goto Event396
          case [1, 2]:
            goto Event418
        }
    } else
    Event398:
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'HeburaMountains'}) {
        Event401:
        switch EventSystemActor.RandomChoice3() {
          case [0, 1]:
            Event402:

            call A_Cook_Hot({'Self': 'Self'})

          case 2:
            goto Event418
        }
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'EldinMountains'}) {
        goto Event401
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'HyruleForest'}) {
        goto Event401
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'TabantaFrontier'}) {
        switch EventSystemActor.RandomChoice3() {
          case 0:
            goto Event402
          case [1, 2]:
            goto Event418
        }
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'HyruleHill'}) {
        switch EventSystemActor.RandomChoice3() {
          case 0:

            call A_Cook_Elec({'Self': 'Self'})

          case [1, 2]:
            goto Event418
        }
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'GerudoDesert'}) {
        Event408:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            switch EventSystemActor.RandomChoice3() {
              case [0, 1]:

                call A_Cook_Cold({'Self': 'Self'})

              case 2:
                goto Event418
            }
          case [6, 7]:
            switch EventSystemActor.RandomChoice3() {
              case [0, 1]:

                call A_Cook_Hot({'Self': 'Self'})

              case 2:
                goto Event418
            }
        }
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'GerudoHighlands'}) {
        goto Event408
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'EastHateru'}) {
        Event417:
        switch EventSystemActor.RandomChoice3() {
          case 0:

            call A_Cook_Elec({'Self': 'Self'})

          case [1, 2]:
            goto Event418
        }
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'FironeGrassland'}) {
        goto Event417
    } else
    if Npc_Road_001[Cook_NoFire(Self)].CheckMapArea({'MapAreaName': 'LanayruWetlands'}) {
        goto Event417
    } else
    goto Event418
}

void S_Cook_Stamina() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_J_02'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Plant_Q', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Material_02'})

        } else {
            Event261:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_05'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Mushroom_O', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Item_Material_03', 'CookMaterial_04': 'Item_Ore_H'})

        } else {
            goto Event261
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_17'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Mushroom_O', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Animal_Fish_A'})

        } else {
            goto Event261
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_14'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_B', 'CookMaterial_02': 'Item_Enemy_07'})

        } else {
            goto Event261
        }
    }
}

void N_Cook_Gambari() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_08'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'BeeHome', 'CookMaterial_02': 'Item_Fruit_A'})

        } else {
            Event374:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_17'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_02': 'Item_Material_07', 'CookMaterial_01': 'BeeHome', 'CookMaterial_03': 'Item_Material_04', 'CookMaterial_04': 'Item_Material_05', 'CookMaterial_05': 'Item_Material_01'})

        } else {
            goto Event374
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_A_11'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'BeeHome', 'CookMaterial_02': 'Item_Mushroom_E'})

        } else {
            goto Event374
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_01'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Insect_AA', 'CookMaterial_02': 'Animal_Insect_H', 'CookMaterial_03': 'Item_Enemy_08'})

        } else {
            goto Event374
        }
    }
}

void S_Cook_Max() {
    switch EventSystemActor.RandomChoice8() {
      case [0, 1]:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_01'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Mushroom_F', 'CookMaterial_02': 'Item_Ore_H'})

        } else {
            Event376:

            call Reward({'Self': 'Self'})

        }
      case [2, 3]:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_H_01'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Fish_B', 'CookMaterial_02': 'Item_Ore_H', 'CookMaterial_03': 'Item_Material_06'})

        } else {
            goto Event376
        }
      case [4, 5]:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_P_03'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Plant_B', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Item_Material_02'})

        } else {
            goto Event376
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_14'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Animal_Fish_I', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Ore_H', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            goto Event376
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_02'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Insect_M', 'CookMaterial_02': 'Item_Enemy_00', 'CookMaterial_03': 'Item_Enemy_03'})

        } else {
            goto Event376
        }
    }
}

void A_Cook_Hot() {
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_04'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Mushroom_C', 'CookMaterial_02': 'Item_Material_03'})

        } else {
            Event378:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_K_01'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_01': 'Item_Meat_01', 'CookMaterial_02': 'Item_Fruit_I', 'CookMaterial_03': 'Item_Material_05', 'CookMaterial_04': 'Item_Material_07', 'CookMaterial_05': 'Item_Material_06'})

        } else {
            goto Event378
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_P_04'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_03': 'Item_Material_02', 'CookMaterial_01': 'Item_Meat_02', 'CookMaterial_02': 'Item_Fruit_I'})

        } else {
            goto Event378
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_J_01'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Fruit_I', 'CookMaterial_02': 'Item_Material_02', 'CookMaterial_03': 'Item_Material_03'})

        } else {
            goto Event378
        }
      case 4:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_J_04'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Plant_F', 'CookMaterial_02': 'Item_Meat_06', 'CookMaterial_03': 'Item_Material_03', 'CookMaterial_04': 'Item_Material_02'})

        } else {
            goto Event378
        }
      case 5:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_17'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Meat_01', 'CookMaterial_02': 'Animal_Fish_A', 'CookMaterial_03': 'Item_Fruit_I'})

        } else {
            goto Event378
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_07'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Fruit_I', 'CookMaterial_02': 'Item_Meat_02'})

        } else {
            goto Event378
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_T', 'CookMaterial_02': 'Item_Enemy_01'})

        } else {
            goto Event378
        }
    }
}

void A_Cook_Cold() {
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_12'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_01': 'Item_Fruit_F', 'CookMaterial_02': 'Item_Fruit_K', 'CookMaterial_03': 'Item_Material_07', 'CookMaterial_04': 'Item_Material_06', 'CookMaterial_05': 'Item_Material_01'})

        } else {
            Event380:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_K_07'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Plant_E', 'CookMaterial_02': 'Item_Material_05', 'CookMaterial_03': 'Item_Ore_H'})

        } else {
            goto Event380
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_01'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Fruit_F', 'CookMaterial_02': 'Item_Material_07', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_04': 'Item_Material_01'})

        } else {
            goto Event380
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_22'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Fruit_F', 'CookMaterial_02': 'Item_Fruit_K'})

        } else {
            goto Event380
        }
      case 4:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_12'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_03': 'Item_Material_06', 'CookMaterial_01': 'Item_Mushroom_B', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_04': 'Item_Ore_H'})

        } else {
            goto Event380
        }
      case 5:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_14'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Plant_E', 'CookMaterial_02': 'Item_Material_04', 'CookMaterial_03': 'Item_Material_01', 'CookMaterial_04': 'Item_Material_05'})

        } else {
            goto Event380
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_02'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_03': 'Item_Material_07', 'CookMaterial_01': 'Item_Plant_E', 'CookMaterial_02': 'Item_Fruit_A', 'CookMaterial_04': 'Item_Material_01', 'CookMaterial_05': 'Item_Material_06'})

        } else {
            goto Event380
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_N', 'CookMaterial_02': 'Item_Enemy_06'})

        } else {
            goto Event380
        }
    }
}

void A_Cook_Elec() {
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_P_02'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Plant_L', 'CookMaterial_02': 'Item_Material_02'})

        } else {
            Event382:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_11'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Plant_L', 'CookMaterial_02': 'Item_Material_02', 'CookMaterial_03': 'Item_Material_03', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            goto Event382
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_02'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_05': 'Item_Material_01', 'CookMaterial_01': 'Item_Fruit_A', 'CookMaterial_02': 'Item_Fruit_B', 'CookMaterial_03': 'Item_Fruit_C', 'CookMaterial_04': 'Item_Material_07'})

        } else {
            goto Event382
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_04'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_01': 'Item_Mushroom_H', 'CookMaterial_02': 'Item_Meat_02', 'CookMaterial_03': 'Item_Material_07', 'CookMaterial_04': 'Item_Material_06', 'CookMaterial_05': 'Item_Ore_H'})

        } else {
            goto Event382
        }
      case 4:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_P_03'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Plant_L', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Item_Material_02'})

        } else {
            goto Event382
        }
      case 5:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_E_04'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Mushroom_H', 'CookMaterial_02': 'Item_Material_04', 'CookMaterial_03': 'Item_Material_03'})

        } else {
            goto Event382
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_J_07'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_03': 'Item_Material_03', 'CookMaterial_01': 'Item_Fruit_C', 'CookMaterial_02': 'Item_Meat_02', 'CookMaterial_04': 'Item_Material_02'})

        } else {
            goto Event382
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_R', 'CookMaterial_02': 'Item_Enemy_03'})

        } else {
            goto Event382
        }
    }
}

void A_Cook_Fire() {
    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

        call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_X', 'CookMaterial_02': 'Item_Enemy_00'})

    } else {

        call Reward({'Self': 'Self'})

    }
}

void N_Cook_GoGo() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_A_02'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Mushroom_D', 'CookMaterial_02': 'Item_Plant_A'})

        } else {
            Event385:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_K_08'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Plant_M', 'CookMaterial_02': 'Item_Material_06', 'CookMaterial_03': 'Item_Material_05', 'CookMaterial_04': 'Item_Material_07'})

        } else {
            goto Event385
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_04'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Mushroom_D', 'CookMaterial_02': 'Item_Material_04', 'CookMaterial_03': 'Item_Ore_H', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            goto Event385
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Insect_S', 'CookMaterial_02': 'Item_Enemy_00', 'CookMaterial_03': 'Item_Enemy_01'})

        } else {
            goto Event385
        }
    }
}

void N_Cook_Quiet() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_04'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_01': 'Item_Plant_I', 'CookMaterial_02': 'Item_Material_07', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_04': 'Item_Ore_H', 'CookMaterial_05': 'Item_Meat_06'})

        } else {
            Event387:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_03'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Plant_I', 'CookMaterial_02': 'Item_Material_03'})

        } else {
            goto Event387
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_A_01'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Mushroom_J', 'CookMaterial_02': 'Item_Mushroom_E'})

        } else {
            goto Event387
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Insect_E', 'CookMaterial_02': 'Item_Enemy_40', 'CookMaterial_03': 'Item_Enemy_18'})

        } else {
            goto Event387
        }
    }
}

void N_Cook_Power() {
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_D_10'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_K', 'CookMaterial_02': 'Item_Material_02'})

        } else {
            Event389:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_H_02'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Fish_F', 'CookMaterial_02': 'Item_Material_06', 'CookMaterial_03': 'Item_Ore_H'})

        } else {
            goto Event389
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_12'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Fruit_H', 'CookMaterial_02': 'Item_Fruit_A', 'CookMaterial_03': 'Item_Fruit_B', 'CookMaterial_04': 'Item_Fruit_G'})

        } else {
            goto Event389
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_13'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Fruit_H', 'CookMaterial_02': 'Item_Material_07', 'CookMaterial_03': 'Item_Material_01'})

        } else {
            goto Event389
        }
      case 4:
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Cook_G_15', 'Count': 1}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Item_Mushroom_L', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Item_Material_03'})

        } else {
            goto Event389
        }
      case 5:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_17'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_InsectGet_K', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Ore_H', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            goto Event389
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_10'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_01': 'Animal_Fish_F', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Ore_H'})

        } else {
            goto Event389
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_02': 'Item_Enemy_00', 'CookMaterial_01': 'Animal_Insect_G', 'CookMaterial_03': 'Item_Enemy_06'})

        } else {
            goto Event389
        }
    }
}

void N_Cook_Guard() {
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_K_03'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Fruit_J', 'CookMaterial_02': 'Item_Material_07', 'CookMaterial_03': 'Item_Material_05', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            Event391:

            call Reward({'Self': 'Self'})

        }
      case 1:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_M_01'}) {

            call Demo001_0.SetCookResult3({'CookMaterial_03': 'Item_Ore_H', 'CookMaterial_01': 'Item_Plant_H', 'CookMaterial_02': 'Item_Material_07'})

        } else {
            goto Event391
        }
      case 2:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_13'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Fruit_J', 'CookMaterial_04': 'Item_Material_06', 'CookMaterial_02': 'Item_Material_03', 'CookMaterial_03': 'Item_Ore_H'})

        } else {
            goto Event391
        }
      case 3:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_B_20'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Item_Fruit_J', 'CookMaterial_02': 'Item_Meat_01'})

        } else {
            goto Event391
        }
      case 4:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_I_12'}) {

            call Demo001_0.SetCookResult5({'CookMaterial_01': 'Item_Plant_H', 'CookMaterial_02': 'Item_Material_07', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_04': 'Item_Material_01', 'CookMaterial_05': 'Item_Fruit_L'})

        } else {
            goto Event391
        }
      case 5:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_04'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Mushroom_M', 'CookMaterial_02': 'Item_Material_04', 'CookMaterial_03': 'Item_Ore_H', 'CookMaterial_04': 'Item_Material_06'})

        } else {
            goto Event391
        }
      case 6:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_J_04'}) {

            call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Mushroom_M', 'CookMaterial_02': 'Item_Meat_06', 'CookMaterial_03': 'Item_Material_03', 'CookMaterial_04': 'Item_Material_02'})

        } else {
            goto Event391
        }
      case 7:
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {

            call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_P', 'CookMaterial_02': 'Item_Enemy_02'})

        } else {
            goto Event391
        }
    }
}

void S_Cook_Fairy() {
    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_16'}) {

        call Demo001_0.SetCookResult1WithNum({'CookMaterial_01': 'Animal_Insect_F', 'SetNum': 1})

    } else {

        call Reward({'Self': 'Self'})

    }
}

void Cook_NoFire() {
    goto Event398
}

void CookReward_NoFire() {
    if EventSystemActor.CheckFlag({'FlagName': 'Flag'}) {
        goto Event151
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Flag'})

        call Cook_NoFire({'Self': 'Self'})

    }
}
