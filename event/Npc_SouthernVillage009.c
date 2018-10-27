-------- EventFlow: Npc_SouthernVillage009 --------

Actor: Npc_SouthernVillage009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage009.CheckActorAction13() {
      case 0:
        Event40:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage009_GuideEnd'}) {
                Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk15'})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage009_IsTalked'}) {
                    Event11:
                    Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk05'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk06'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage009_Guide'})
                    } else {
                        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk07'})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage009_IsTalked', 'IsWaitFinish': True})
                    goto Event11
                }
            }
          case 1:
            Event41:
            Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk16'})
          case 2:
            goto Event41
          case 3:
            goto Event41
        }
      case 1:
        goto Event40
      case 2:
        Event12:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk00'})
      case 3:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk02'})
      case 4:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk08'})
      case 5:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage009_GuideEnd'}) {
            Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk14'})
        } else {
            Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk09'})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 3398.0, 'Pattern1PosY': 147.0, 'Pattern1PosZ': 3439.0, 'Pattern1AtX': 3401.0, 'Pattern1AtY': 145.0, 'Pattern1AtZ': 3433.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk11'})
            GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0, 'IsWaitFinish': True})
            Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk12'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage009_GuideEnd'})
        }
      case 6:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk08'})
      case 7:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk10'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage009_Guide2'})
      case 8:
        goto Event12
      case 9:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk00'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage009_Guide'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage009_Guide2'})
      case 10:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk04'})
      case 11:
        Npc_SouthernVillage009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:talk01'})
      case 12:
        goto Event40
      case 13:
        goto Event40
    }
}

void Near() {
    switch Npc_SouthernVillage009.CheckActorAction13() {
      case 2:
        Event29:
        Npc_SouthernVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:Near06'})
      case 4:
        Event28:
        Npc_SouthernVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:Near03'})
      case 5:
        goto Event28
      case 6:
        goto Event28
      case 7:
        goto Event28
      case 8:
        goto Event29
      case 10:
        Npc_SouthernVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:Near01'})
      case 11:
        Npc_SouthernVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:Near04'})
      case 12:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event23:
            Npc_SouthernVillage009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage009:Near00'})
          case 2:
            goto Event23
          case 3:
            goto Event23
        }
    }
}
