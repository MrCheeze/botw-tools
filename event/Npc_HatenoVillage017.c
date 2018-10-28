-------- EventFlow: Npc_HatenoVillage017 --------

Actor: Npc_HatenoVillage017
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_ExitEventPlayer']
queries: ['CheckWeather', 'CheckPlayerWeaponFired', 'GeneralChoice3', 'CheckFlag', 'RandomChoice2', 'CheckTimeType', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage017.CheckActorAction13() {
      case 0:

        call RodanteBlueFire()

        Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk06'})
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_LostFirst'}) {
            Event93:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk30'})
            Event94:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_LostFirst'}) {
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk21'})
                    Event29:
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk12'})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC017_ThiefFirst', 'IsWaitFinish': True})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC017_LostFirst', 'IsWaitFinish': True})
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk11'})
                    goto Event29
                }
              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_ThiefFirst'}) {
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk20'})
                    Event83:
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC017_LostFirst', 'IsWaitFinish': True})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC017_ThiefFirst', 'IsWaitFinish': True})
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk13'})
                    goto Event83
                }
              case 2:
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk34'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC017_LostFirst', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC017_ThiefFirst', 'IsWaitFinish': True})
              case 3:
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk03'})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_ThiefFirst'}) {
            goto Event93
        } else {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk29'})
        }
        goto Event94
      case 1:

        call RodanteBlueFire()

        if Npc_HatenoVillage017.IsOnInstEventFlag() {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk14'})
            Event13:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_WhatsFirst'}) {
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk18'})
                    Event24:
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk10'})
                    goto Event94
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC017_WhatsFirst', 'IsWaitFinish': True})
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk17'})
                    goto Event24
                }
              case 1:
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Npc_HatenoVillage017.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [3581.0, 267.0, 2104.0], 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3580.29638671875, 'Pattern1PosY': 268.4642028808594, 'Pattern1PosZ': 2110.64501953125, 'Pattern1AtX': 3580.683837890625, 'Pattern1AtY': 268.5150146484375, 'Pattern1AtZ': 2105.6064453125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 15.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_ThisFirst'}) {
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk19', 'IsCloseMessageDialog': True})
                    Event118:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_HatenoVillage017.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 2, 'IsWaitFinish': True, 'TurnPosition': [3617.0, 282.0, 2111.0]})
                    GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True, 'TurnPosition': [3617.0, 282.0, 2111.0], 'ObjectId': 1})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3572.70703125, 'Pattern1PosY': 267.48968505859375, 'Pattern1PosZ': 2107.614501953125, 'Pattern1AtX': 3576.2607421875, 'Pattern1AtY': 268.9198913574219, 'Pattern1AtZ': 2107.90673828125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk16'})
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC017_ThisFirst', 'IsWaitFinish': True})
                    Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk15', 'IsCloseMessageDialog': True})
                    goto Event118
                }
              case 2:
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk03'})
            }
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk00'})
            goto Event13
          case [1, 2, 3]:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk01'})
            goto Event13
        }
      case 10:

        call RodanteBlueFire()

        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk07'})
        } else {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk02'})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        }
        if !Npc_HatenoVillage017.IsOnInstEventFlag() {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk08'})
        }
        Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk09'})
    }
}

void Near() {
    switch Npc_HatenoVillage017.CheckActorAction13() {
      case [0, 1]:
        Npc_HatenoVillage017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:near01'})
      case 10:
        Npc_HatenoVillage017.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:near02'})
      case 11:
        Npc_HatenoVillage017.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void RodanteBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if Npc_HatenoVillage017.IsOnInstEventFlag() {
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk25'})
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk05'})
                Event106:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk04'})
                Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk23'})
                goto Event106
            }
        } else
        if Npc_HatenoVillage017.IsOnInstEventFlag() {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk24'})
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk05'})
            goto Event106
        } else {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk04'})
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk22'})
            goto Event106
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_LostFirst'}) {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk26'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC017_ThiefFirst'}) {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk27'})
        } else
        if Npc_HatenoVillage017.IsOnInstEventFlag() {
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk28'})
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk31'})
          case [2, 3, 4, 5]:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk32'})
          case [6, 7]:
            Npc_HatenoVillage017.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage017:talk33'})
        }
    }
}
