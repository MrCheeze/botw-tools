-------- EventFlow: CarryingBlueFireEXMini --------

Actor: Npc_AncientDoctor
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog', 'Demo_TalkASync', 'Demo_TalkToPlayer', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'GeneralChoice4', 'CheckSelectPicture', 'CheckWeather', 'RandomChoice2', 'RandomChoice4', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_StopInAir', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

void Ready_Npc_AncientDoctor_Talk() {
    Event319:

    call Purua_HelloLie()

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_IntroSimon'}) {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk19', 'ASName': 'Talk_Sad'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk18', 'ASName': 'Talk_Sad'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_GetOut'}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk11'})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk21', 'ASName': 'Talk_Sad'})
            Event321:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk20', 'ASName': 'Talk_Sad'})
        }
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk07', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_IntroSimon', 'IsWaitFinish': True})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Sad'})
            goto Event321
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk08', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait'})
        }
    }
}

void Carry_Npc_AncientDoctor_Talk() {

    call Npc_AncientDoctor.PuruaGreeting()

    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk26', 'IsOverWriteLabelActorName': False})
    Event57:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk25', 'IsOverWriteLabelActorName': False})
        Event552:

        call PuruaRain()

        Event495:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk67'})
        goto Event57
      case 1:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk27', 'IsOverWriteLabelActorName': False})
        goto Event552
      case 2:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk28', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': ''})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Talk_Checkit', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk47'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk15', 'IsCloseMessageDialog': True})
        goto Event495
      case 3:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk29', 'IsOverWriteLabelActorName': False, 'ASName': ''})

        call PuruaRain()

    }
}

void Permit_Npc_AncientDoctor_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_First'}) {

        call Npc_AncientDoctor.PuruaGreeting()

        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk24', 'IsOverWriteLabelActorName': False})
        Event346:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk01'})
        Event36:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk08', 'IsOverWriteLabelActorName': False})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk09', 'IsOverWriteLabelActorName': False})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk14'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientDoctor.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk20', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Soliloquy', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Event47:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk22', 'IsOverWriteLabelActorName': False})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk42'})

                call PuruaTrunStart()

                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk44'})

                call PuruaTrunEnd()

                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk16'})
                EventSystemActor.Demo_FlagON({'FlagName': 'CarryingBlueFireEXMini_Permit', 'IsWaitFinish': True})
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk21', 'IsOverWriteLabelActorName': False})
                goto Event47
            }
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_Replay'}) {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk18'})
                Event348:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk06'})
                goto Event36
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_Replay', 'IsWaitFinish': True})
                Npc_AncientDoctor.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk10', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Soliloquy', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                goto Event348
            }
          case 2:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk11', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
            Npc_AncientDoctor.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Soliloquy', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk12', 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk13', 'ASName': 'Talk_Checkit2'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_First'}) {

        call Npc_AncientDoctor.PuruaDeskTalk()

        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_First', 'IsWaitFinish': True})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk05'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Talk_Checkit', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk47'})

        call PuruaExplain()

        goto Event346
    } else {

        call LiarPurua()

    }
}

void Fired_Npc_AncientDoctor_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_First'}) {

        call Npc_AncientDoctor.PuruaGreeting()

        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_NoCheckIt'}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk33'})
            Event332:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk45'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk31', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Peace'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk39', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Event300:
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo032_0', 'EntryPointName': 'Demo032_0', 'EndFade': 0})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk34', 'IsCloseMessageDialog': True})

                call ShowkSS()

                if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_GetSSLv1'}) {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk49'})
                    Event473:
                    Npc_AncientDoctor.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk76', 'ASName': ''})
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk50', 'ASName': 'Talk_Checkit2', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CarryingBlueFireEXMini_Fired'})
                    Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near02', 'DispFrame': 90, 'IsChecked': False})
                } else {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk48'})
                    goto Event473
                }
              case 1:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk32', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event300
              case 2:
                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_NoCheckIt', 'IsWaitFinish': True})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk11', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Npc_AncientDoctor.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Soliloquy', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk12', 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk13', 'ASName': 'Talk_Peace'})
            }
        } else {
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk17', 'ASName': 'Talk_Normal_L'})

            call PuruaTrunStart()

            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk30', 'IsOverWriteLabelActorName': False})

            call PuruaTrunEnd()

            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            goto Event332
        }
    } else {

        call Npc_AncientDoctor.PuruaDeskTalk()

        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_First', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor001_Irregular'})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk68'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk69', 'ASName': 'Talk_Special'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk70'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Talk_Checkit', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk47'})
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_First'}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk73'})
            Event510:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk71'})

            call PuruaExplain()

            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk01'})
            EventSystemActor.Demo_FlagON({'FlagName': 'CarryingBlueFireEXMini_Permit', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_NoCheckIt', 'IsWaitFinish': True})
            goto Event332
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk72'})
            goto Event510
        }
    }
}

void LiarPurua() {
    goto Event319
}

void Repaired_Npc_AncientDoctor_Talk() {
    Event471:

    call Npc_AncientDoctor.Finish_ItemPowerUp()

}

void Finish_Npc_AncientDoctor_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikPad_PowerUp_Finish'}) {

        call Npc_AncientDoctor.AllFinished()

    } else {
        goto Event471
    }
}

void Camera_Npc_AncientDoctor_Talk() {

    call Npc_AncientDoctor.PuruaGreeting()

    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk38', 'IsCloseMessageDialog': False})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_PicFailed'}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk64', 'IsCloseMessageDialog': True})
            Event314:
            if EventSystemActor.CheckSelectPicture({'ActorName': 'Npc_AncientDoctor'}) {

                call Common.LookPicture({'Self': ActorIdentifier(name="Npc_AncientDoctor"), 'ActorName': 'Npc_AncientDoctor'})

                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk35'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk36'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CarryingBlueFireEXMini_Camera'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'CarryingBlueFireEXMini_Repaired'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk40'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk46', 'ASName': 'Talk_Checkit2'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Hateno_SheikPad_PowerUp_Activated'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_BlueFire_Activated'})
            } else {

                call ShowkSS()

                Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_PicFailed'}) {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk19'})
                    Event522:
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk74'})
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk23'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_PicFailed', 'IsWaitFinish': True})
                } else {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk37'})
                    goto Event522
                }
            }
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk63', 'IsCloseMessageDialog': True})
            goto Event314
        }
      case 1:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk57', 'ASName': ''})
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk58'})
            Event488:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk74'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk65'})
          case 1:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk59'})
            goto Event488
          case 2:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk61'})
            goto Event488
          case 3:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk60'})
            goto Event488
        }
      case 2:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk75', 'IsCloseMessageDialog': True, 'ASName': ''})
      case 3:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Checkit2', 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk56'})
    }
}

void Purua_HelloLie() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_UpArea'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk24'})
            Event530:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk25'})
            goto Event530
        }
    } else
    if Npc_AncientDoctor.IsOnInstEventFlag() {
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_Tripper'}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk22'})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk17', 'ASName': 'Act_Sad_Wait'})
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_Tripper', 'IsWaitFinish': True})
        }
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk10', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait'})
      case [2, 3, 4, 5]:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk00', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait'})
      case [6, 7]:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk01', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sad_Wait'})
    }
}

void Permit_Npc_AncientDoctor_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_First'}) {
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Carry_Npc_AncientDoctor_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_Yoro'}) {
        Event355:
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near04', 'IsChecked': False, 'DispFrame': 90})
    } else {
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near03', 'IsChecked': False, 'DispFrame': 90})
        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_Yoro', 'IsWaitFinish': True})
    }
}

void Fired_Npc_AncientDoctor_Near() {
    Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near01', 'IsChecked': False, 'DispFrame': 90})
}

void Camera_Npc_AncientDoctor_Near() {
    Npc_AncientDoctor.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near02', 'ASKeyName': 'Talk_Checkit2'})
}

void Repaired_Npc_AncientDoctor_Near() {
    goto Event355
}

void Finish_Npc_AncientDoctor_Near() {
    goto Event355
}

void ShowkSS() {

    fork {

        call Common.ShowSheikPad({'Self': ActorIdentifier(name="Npc_AncientDoctor")})

    } {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk62', 'IsCloseMessageDialog': True})
    }

}

void Demo_HatenoWarp() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo363_0', 'EntryPointName': 'Demo363_0_Hateno', 'IsWaitFinish': True, 'EndFade': 0})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event489:
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk66'})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        goto Event489
    }
}

void PuruaExplain() {
    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk00', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk02', 'IsOverWriteLabelActorName': False})
        Event31:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk04', 'IsOverWriteLabelActorName': False})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk07', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Soliloquy'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk51'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk52'})
            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientDoctor001_Diary', 'IsWaitFinish': True})
        }
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk03', 'IsOverWriteLabelActorName': False})
        goto Event31
    }
}

void PuruaTrunStart() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Npc_AncientDoctor.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 2, 'TurnPosition': [3781.0, 357.0, 2125.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [3781.0, 357.0, 2125.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3771.3388671875, 'Pattern1PosY': 358.6866455078125, 'Pattern1PosZ': 2124.16357421875, 'Pattern1AtX': 3774.09375, 'Pattern1AtY': 358.6416015625, 'Pattern1AtZ': 2124.451171875, 'Pattern1Fovy': 40.00001525878906, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void PuruaTrunEnd() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Npc_AncientDoctor.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': 'Npc_AncientDoctor', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
}

void PuruaRain() {
    if EventSystemActor.CheckWeather() in [1, 2, 3] {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk53'})
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk54', 'IsCloseMessageDialog': True})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:talk55', 'IsCloseMessageDialog': True})
        }
    }
}
