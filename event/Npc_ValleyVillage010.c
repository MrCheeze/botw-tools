-------- EventFlow: Npc_ValleyVillage010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'RandomChoice4', 'GeneralChoice2', 'RandomChoice2', 'CheckWeather', 'GeneralChoice3', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage010[Teba_RitoVillage]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Get_RitoWeapon'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_Bow028_First'}) {
                    switch Npc_HighMountain001.CheckActorAction13() {
                      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk30'})
                        Event156:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk00'})
                            if !EventSystemActor.GeneralChoice2() {
                                Event160:
                                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk01'})
                                if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                                    Event171:
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk16'})
                                    Event167:
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        goto Event160
                                      case 1:
                                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk15'})
                                        goto Event171
                                      case 2:
                                        Event161:
                                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk02'})
                                    }
                                }
                            } else {
                                goto Event161
                            }
                        } else {
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk12'})
                            goto Event167
                        }
                      case [2, 3]:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                                Event135:
                                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk04'})
                                Event132:
                                switch EventSystemActor.GeneralChoice3() {
                                  case 0:
                                    Event162:
                                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk01'})
                                    Event163:
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                                        goto Event135
                                    } else {
                                        Event175:
                                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk14'})
                                        Event174:
                                        switch EventSystemActor.GeneralChoice4() {
                                          case 0:
                                            goto Event162
                                          case 1:
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk15'})
                                            goto Event163
                                          case 2:
                                            Event155:
                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_HighMountain001', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk25', 'ASName': ''})
                                            Npc_HighMountain001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_ValleyVillage010', 'UniqueName': 'Teba_RitoVillage', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                                            Npc_HighMountain001.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_23', 'IsWaitFinish': True})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk26', 'ASName': ''})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': '', 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk27', 'ASName': ''})
                                            Npc_HighMountain001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                                            Npc_HighMountain001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_24', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
                                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo702_0', 'EndFade': 0})
                                          case 3:
                                            Event133:
                                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk10', 'ASName': ''})
                                        }
                                    }
                                  case 1:
                                    goto Event155
                                  case 2:
                                    goto Event133
                                }
                            } else {
                                goto Event175
                            }
                          case [1, 2, 3]:
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk31'})
                            goto Event156
                        }
                    }
                } else {
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk08', 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010_Bow028_First', 'IsWaitFinish': True})
                    switch Npc_HighMountain001.CheckActorAction13() {
                      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk28'})
                        goto Event156
                      case [2, 3]:
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk03'})
                                goto Event132
                            } else {
                                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_ValleyVillage010_Talk13'})
                                goto Event174
                            }
                          case [1, 2, 3]:
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk29'})
                            goto Event156
                        }
                    }
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_First_Clear'}) {
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk02', 'ASName': ''})
                    goto Event156
                  case 1:
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk01', 'ASName': ''})
                    goto Event156
                  case [2, 3]:
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk03', 'ASName': ''})
                    goto Event156
                }
            } else {
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk00', 'ASName': ''})
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk01', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010_First_Clear', 'IsWaitFinish': True})
                goto Event156
            }
        } else
        Event13:
        if EventSystemActor.CheckFlag({'FlagName': 'Get_RitoWeapon'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_Bow028_First'}) {
                switch Npc_HighMountain001.CheckActorAction13() {
                  case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk30'})
                  case [2, 3]:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk07', 'ASName': ''})
                        Event56:
                        if !EventSystemActor.GeneralChoice2() {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_HighMountain001', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk25', 'ASName': ''})
                            Npc_HighMountain001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_ValleyVillage010', 'UniqueName': 'Teba_RitoVillage', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                            Npc_HighMountain001.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_23', 'IsWaitFinish': True})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk26', 'ASName': ''})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': '', 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk27', 'ASName': ''})
                            Npc_HighMountain001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
                            Npc_HighMountain001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain001:Talk_24', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo702_0', 'EndFade': 0})
                        } else {
                            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk10', 'ASName': ''})
                        }
                      case [1, 2, 3]:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk31'})
                    }
                }
            } else {
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk08', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010_Bow028_First', 'IsWaitFinish': True})
                switch Npc_HighMountain001.CheckActorAction13() {
                  case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                    Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk28'})
                  case [2, 3]:
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk09', 'ASName': ''})
                        goto Event56
                      case [1, 2, 3]:
                        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk29'})
                    }
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_First_Clear'}) {
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk02', 'ASName': ''})
              case 1:
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk01', 'ASName': ''})
              case [2, 3]:
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk03', 'ASName': ''})
            }
        } else {
            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk00', 'ASName': ''})
            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk01', 'ASName': ''})
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010_First_Clear', 'IsWaitFinish': True})
        }
    } else
    goto Event13
}

void Teba_WindRelic_Finished() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_NPC010_Finish_First'}) {
        if Npc_ValleyVillage010[Teba_RitoVillage].IsOnInstEventFlag() {
            Event84:
            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk22', 'ASName': ''})
            if !EventSystemActor.RandomChoice2() {
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk24', 'ASName': ''})
            } else {
                Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk23', 'ASName': ''})
            }
        } else {
            Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk21', 'ASName': ''})
            goto Event84
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_NPC010_Finish_First', 'IsWaitFinish': True})
        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk16', 'ASName': ''})
        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk17', 'ASName': ''})
        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk14', 'ASName': ''})
        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk12', 'ASName': ''})
        Npc_ValleyVillage010[Teba_RitoVillage].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_ValleyVillage010:talk13', 'ASName': ''})
    }
}
