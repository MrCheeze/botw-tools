-------- EventFlow: Npc_HighMountain037 --------

Actor: Npc_HighMountain037
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_ExitEventPlayer', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice3', 'CheckWeather', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC037_First'}) {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Event180:
                Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk13'})
            } else {
                Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk15'})
                Event44:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC037_First'}) {
                        Event37:
                        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk10'})
                        Event151:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk39'})
                        goto Event44
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC037_First', 'IsWaitFinish': True})
                        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk09'})
                        goto Event37
                    }
                  case 1:
                    Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk11'})
                    goto Event151
                  case 2:
                    Event13:
                    Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk14'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC037_First', 'IsWaitFinish': True})
                }
            }
        } else
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            goto Event180
        } else {
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk12'})
            goto Event44
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC037_First'}) {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk03'})

        call RainTalk()

        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk18'})
        Event12:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk04'})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk40'})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk44'})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk46'})
            Event149:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk43'})
            goto Event12
          case 1:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk05'})
            goto Event149
          case 2:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3197.88671875, 'Pattern1PosY': 350.2380676269531, 'Pattern1PosZ': -1838.5263671875, 'Pattern1AtX': -3207.736328125, 'Pattern1AtY': 345.3674621582031, 'Pattern1AtZ': -1837.8983154296875, 'Pattern1Fovy': 50.00001907348633, 'MotionMode': 0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk27'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk28'})
            goto Event149
          case 3:
            goto Event13
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC037_First', 'IsWaitFinish': True})

        call GizanHello()


        call RainTalk()

        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk42'})
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk04'})
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk40'})
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk44'})
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk45'})
    }
}

void Ready_IceGolem_Gizan() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GizanHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC037_ReadyFirst'}) {

        call RainTalk()

        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk23'})
        switch EventSystemActor.GeneralChoice4() {
          case 1:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk30'})
          case 2:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk34'})
            Event61:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk24'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_HighMountain037.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk29', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC037_HowAreYou'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Rito_NPC037_GachiRock'})
                EventSystemActor.Demo_FlagON({'FlagName': 'RitoMini_IceGolem_Activated', 'IsWaitFinish': True})
            } else {
                Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk14'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC037_ReadyFirst'})
            }
          case 3:
            Event116:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk14'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC037_First'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk21'})
            Event111:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk19'})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk23'})
            switch EventSystemActor.GeneralChoice4() {
              case 2:
                Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk33'})
                goto Event61
              case 3:
                goto Event116
            }
          case [1, 2, 3]:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk25'})
            goto Event111
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC037_First', 'IsWaitFinish': True})
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk20'})
            goto Event111
          case [1, 2, 3]:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk22'})
            goto Event111
        }
    }
}

void Finish_IceGolem_Gizan() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GizanHello()


    call RainTalk()

    Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk35'})
    if !EventSystemActor.GeneralChoice2() {

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk31'})
        }

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk32'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC037_Thanks'})
        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'RitoMini_IceGolem_Finish', 'IsWaitFinish': True})
    } else {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk14'})
    }
}

void GizanHello() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk13'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else
    if Npc_HighMountain037.IsOnInstEventFlag() {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk17'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk00'})
      case [2, 3, 4, 5]:
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk01'})
      case [6, 7]:
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk02'})
    }
}

void NormalNear() {
    Npc_HighMountain037.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HighMountain037:near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Beated_IceGolem_Gizan() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GizanHello()

    switch EventSystemActor.CheckWeather() {
      case 0:
        Event129:
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk23'})
        Event130:
        switch EventSystemActor.GeneralChoice4() {
          case 1:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk30'})
            Event183:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk23'})
            goto Event130
          case 2:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk33'})
            goto Event183
          case 3:
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk14'})
        }
      case [1, 2, 3]:
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk25'})
        goto Event129
    }
}

void RitoMini_IceGolem_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GizanHello()


    call RainTalk()

    Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk36'})
    if !EventSystemActor.RandomChoice2() {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk38'})
    } else {
        Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk37'})
    }
}

void RainTalk() {
    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        if !Npc_HighMountain037.IsOnInstEventFlag() {
            Npc_HighMountain037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain037:talk25'})
        }
    }
}

void MarkNear() {
    Npc_HighMountain037.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HighMountain037:near00', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
}
