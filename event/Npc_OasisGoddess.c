-------- EventFlow: Npc_OasisGoddess --------

Actor: Npc_OasisGoddess
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice3', 'CheckFlag', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisGoddess_first'}) {
        if Npc_OasisGoddess.IsOnInstEventFlag() {
            Event11:
            Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk05'})
            Event2:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_OasisGoddess.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Event12:
                Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk06'})
                goto Event2
              case 1:
                Npc_OasisGoddess.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk03', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event12
              case 2:
                Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk04'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisGoddess_first', 'IsWaitFinish': True})
            }
        } else {
            Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk10'})
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event22:
                Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk11'})
                goto Event11
              case 1:
                goto Event22
              case 2:
                Event21:
                Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk12'})
                goto Event11
              case 3:
                goto Event21
              case 4:
                goto Event21
              case 5:
                Event20:
                Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk13'})
                goto Event11
              case 6:
                goto Event20
              case 7:
                goto Event20
            }
        }
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event14:
            Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk07'})
            Event1:
            Npc_OasisGoddess.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_OasisGoddess.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event2
          case 1:
            goto Event14
          case 2:
            Event15:
            Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk08'})
            goto Event1
          case 3:
            goto Event15
          case 4:
            goto Event15
          case 5:
            Event16:
            Npc_OasisGoddess.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoddess:talk09'})
            goto Event1
          case 6:
            goto Event16
          case 7:
            goto Event16
        }
    }
}
