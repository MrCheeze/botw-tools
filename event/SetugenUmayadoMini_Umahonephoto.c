-------- EventFlow: SetugenUmayadoMini_Umahonephoto --------

Actor: Npc_Hunters_Lost
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_PlayASForDemo', 'Demo_ChangeEquipState', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckSelectPicture']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Hunters_Lost_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'SetugenUmayadoMini_Umahonephoto_Activated'}) {
        if EventSystemActor.CheckSelectPicture({'ActorName': 'GameRomHorseBone'}) {
            Event1:
            Npc_Hunters_Lost.Demo_TalkASync({'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_Near', 'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300})
        } else {
            Npc_Hunters_Lost.Demo_TalkASync({'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
        }
    } else {
        goto Event1
    }
}

void Ready_Npc_Hunters_Lost_Talk() {
    Npc_Hunters_Lost.Demo_PlayASForDemo({'ASName': 'Act_Memo_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
    Npc_Hunters_Lost.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'SetugenUmayadoMini_Umahonephoto_Activated'}) {
        Npc_Hunters_Lost.Demo_Talk({'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'GameRomHorseBone'}) {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                call Common.LookPicture({'ActorName': 'GameRomHorseBone', 'Self': ActorIdentifier(name="Npc_Hunters_Lost")})

                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_002', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_005', 'IsCloseMessageDialog': True})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                Npc_Hunters_Lost.Demo_Talk({'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_009', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SetugenUmayadoMini_Umahonephoto_Finish'})
            } else {
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_004'})
                Event20:
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_003'})
            }
        } else {
            goto Event20
        }
    } else {
        if Npc_Hunters_Lost.IsOnInstEventFlag() {
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_012'})
            Event36:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_010'})
                EventSystemActor.Demo_FlagON({'FlagName': 'SetugenUmayadoMini_Umahonephoto_Activated', 'IsWaitFinish': True})
            } else {
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_011'})
            }
        } else {
            Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_006'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_008'})
                goto Event36
            } else {
                Npc_Hunters_Lost.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SetugenUmayadoMini_Umahonephoto:NPC_Umahonephoto001_R_007'})
                Npc_Hunters_Lost.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
            }
        }
    }
}
