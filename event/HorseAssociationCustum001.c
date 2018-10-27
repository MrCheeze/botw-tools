-------- EventFlow: HorseAssociationCustum001 --------

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_Wait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: Self_HorseAssociationCustum
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOwnedHorseAssociated', 'CheckActorAction13', 'CheckTerrorLevel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseAssociationCustum001
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseAssociationCustum001[CustumNPC_0(HorseCustumActor)]
entrypoint: CustumNPC_0(HorseCustumActor)
actions: []
queries: []
params: None

void Talk() {

    call CustumNPC_0({'HorseCustumActor': ActorIdentifier(name="HorseAssociationCustum001")})

}

void CustumNPC_0() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Self_HorseAssociationCustum.CheckTerrorLevel() {
      case 0:
        Event41:
        switch Self_HorseAssociationCustum.CheckActorAction13() {
          case 0:
            Event42:
            Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk00_01'})
          case 1:
            switch Self_HorseAssociationCustum.IsOwnedHorseAssociated({'IsRidden': False}) {
              case 0:
                Event38:
                OwnedHorse_ForEvent.Demo_Wait({'IsWaitFinish': False, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': False, 'IsNoMorph': False})
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk01', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
                EventSystemActor.Demo_CallDemo({'DemoName': 'Demo012_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo012_0', 'EndFade': 0})
              case 1:
                goto Event38
              case 2:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk07', 'IsOverWriteLabelActorName': False})
              case 3:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
              case 4:
                Self_HorseAssociationCustum.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseAssociationCustum001:Talk23'})
            }
          case 2:
            goto Event42
          case 3:
            goto Event42
          case 4:
            goto Event42
          case 5:
            goto Event42
          case 6:
            goto Event42
          case 7:
            goto Event42
          case 8:
            goto Event42
          case 9:
            goto Event42
          case 10:
            goto Event42
          case 11:
            goto Event42
          case 12:
            goto Event42
          case 13:
            goto Event42
        }
      case 1:
        goto Event41
      case 2:
        goto Event41
      case 3:
        goto Event42
      case 4:
        goto Event42
      case 5:
        goto Event42
    }
}
