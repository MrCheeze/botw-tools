-------- EventFlow: Npc_TamourHatago004 --------

Actor: Npc_TamourHatago004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee']
queries: ['CheckSelectPicture', 'CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'CheckWeather', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call HosutaHello()

    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk14'})
    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk13'})
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'HigakkareMini_StrangeMan_Finish'}) {
        Event8:
        Npc_TamourHatago004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:near00', 'IsChecked': False, 'DispFrame': 90})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HigakkareMini_StrangeMan_Activated'}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'Npc_MamonoShop'}) {
            Event43:
            Npc_TamourHatago004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:near00', 'DispFrame': 300, 'IsChecked': True})
        } else {
            goto Event8
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
        goto Event43
    } else {
        goto Event8
    }
}

void Ready_Hosuta_StrangeMan() {

    call HosutaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TamourHatago004_First'}) {
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk29'})
        Event69:
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_Camera'}) {
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk06'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk07'})
            } else {
                Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk08'})
            }
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk09'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HigakkareMini_StrangeMan_Activated', 'IsWaitFinish': True})
        } else {
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk28'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TamourHatago004_First', 'IsWaitFinish': True})
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk05'})
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk04'})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk27'})
            goto Event69
        }
    }
}

void Finish_Hosuta_StrangeMan() {

    call HosutaHello()

    if EventSystemActor.CheckSelectPicture({'ActorName': 'Npc_MamonoShop'}) {
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk11'})

        call Common.LookPicture({'Self': ActorIdentifier(name="Npc_TamourHatago004"), 'ActorName': 'Npc_MamonoShop'})

        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk16'})
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk12'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HigakkareMini_StrangeMan_Finish'})
    } else {
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk10'})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckFlag({'FlagName': 'KirutonDokuro_Delete'}) {
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk23'})
                    Event63:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk21'})
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk22'})
                    Event56:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk15'})
                  case 1:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk24'})
                    goto Event63
                  case 2:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk25'})
                    goto Event63
                  case 3:
                    Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk26'})
                    goto Event63
                }
            } else {
                Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk20'})
                goto Event63
            }
        } else {
            goto Event56
        }
    }
}

void HosutaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TamourHatago004.IsOnInstEventFlag() {
        Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk00'})
    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk01'})
          case [2, 3, 4, 5]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk02'})
          case [6, 7]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk03'})
        }
      case [1, 2, 3]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk17'})
          case [2, 3, 4, 5]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk18'})
          case [6, 7]:
            Npc_TamourHatago004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago004:talk19'})
        }
    }
}
