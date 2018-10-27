-------- EventFlow: Npc_OldKorok_Help --------

Actor: Npc_OldKorok_Help
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call OldKorok_Help.InitTalk_OldKorok({'WarpDestMapName': 'H-6', 'WarpDestPosName': 'Quest_OldKorok_Help', 'Self': ActorIdentifier(name="Npc_OldKorok_Help")})

    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_SecondPorch'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_NormalFirst'}) {
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk02'})
            Event1:
            Npc_OldKorok_Help.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            Event17:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk05', 'IsCloseMessageDialog': True})
                Event20:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk01'})
                goto Event17
              case 1:
                if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Self'}) {
                    Event26:
                    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk06'})
                    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk08', 'IsCloseMessageDialog': True})
                    goto Event20
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Help_Self', 'IsWaitFinish': True})
                    Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk07'})
                    goto Event26
                }
              case 2:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk09'})
                goto Event20
              case 3:
                Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk03'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'OldKorok_Help_NormalFirst', 'IsWaitFinish': True})
            Npc_OldKorok_Help.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:talk04'})
            goto Event1
        }
    } else {

        call OldKorok_Help.AfterQuest()

    }
}

void Near() {
    Npc_OldKorok_Help.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OldKorok_Help:near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}
