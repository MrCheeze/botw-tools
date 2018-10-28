-------- EventFlow: Npc_Kakariko007 --------

Actor: Npc_Kakariko007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'CheckActorAction14_2', 'CheckActorAction', 'IsNeedEquipWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckTime', 'GeneralChoice2', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko003
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_ReturnAnchor', 'Demo_ChangePosture']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko004
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_ReturnAnchor', 'Demo_ChangePosture']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko007_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko007_FrontTalk'})
    }

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Kakariko007.CheckActorAction13() {
      case 2:
        Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk08'})
      case 6:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko007_HomeEncount'}) {
            Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk19'})
        } else {
            Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk18', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko007_HomeEncount'})
            Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 7:
        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk02'})
      case 10:
        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk05'})
      case 11:
        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk06', 'ASName': ''})
      case 13:
        switch Npc_Kakariko007.CheckActorAction14_2() {
          case 8:
            Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 9:
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 21, 'Minute': 0})
            && EventSystemActor.CheckTime({'ConditionType': 'le', 'Minute': 0, 'Hour': 24}) {
                Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk17'})
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                  case [1, 2, 3]:
                    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk13'})
                    Event30:
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk14'})
                    }
                }
            } else {
                Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk16'})
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                  case [1, 2, 3]:
                    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk15'})
                    goto Event30
                }
            }
        }
    }
}

void Near() {
    ;
}

void NearActorsTalk() {

    fork {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko007")})

        Npc_Kakariko007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        if Npc_Kakariko007.IsNeedEquipWeapon() {
            Npc_Kakariko007.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        }
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event73:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk10', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
          case [1, 2, 3]:
            Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk20'})
            goto Event73
        }
    } {

        call Turn_Child()

    }

}

void NearActorsNear() {
    Npc_Kakariko007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Turn_Child() {

    fork {
        Npc_Kakariko003.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Sit'})
        Npc_Kakariko003.Demo_ReturnAnchor({'IsWaitFinish': False})
        Npc_Kakariko003.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True})
    } {
        Npc_Kakariko004.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Sit'})
        Npc_Kakariko004.Demo_ReturnAnchor({'IsWaitFinish': False})
        Npc_Kakariko004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    }

}

void Kakariko007_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko007")})

    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Kakariko007:SupriseHouse'})
    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko007:SupriseHouse_00'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko007_HomeEncount'})
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko007_FrontTalk'})
}
