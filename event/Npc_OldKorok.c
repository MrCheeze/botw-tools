-------- EventFlow: Npc_OldKorok --------

Actor: Npc_OldKorok
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseGameDataInt', 'Demo_FlagON', 'Demo_AppearNumKorokNuts', 'Demo_IncreaseNumKorokNuts', 'Demo_DisappearNumKorokNuts', 'Demo_WarpPlayer', 'Demo_OpenPouchAddStockNum', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_ClosePouchAddStockNum']
queries: ['GeneralChoice4', 'HasPorchItem', 'CheckFlag', 'GeneralChoice2', 'CheckPlayerState', 'RandomChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OldKorok[SelectIncreasePorch(Xman)]
entrypoint: SelectIncreasePorch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_OldKorok[SubFlowWeapon(Xman)]
entrypoint: SubFlowWeapon(Xman)
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: Npc_OldKorok[SubFlowBow(Xman)]
entrypoint: SubFlowBow(Xman)
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: Npc_OldKorok[SubFlowShield(Xman)]
entrypoint: SubFlowShield(Xman)
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: Npc_OldKorok[ReturnSelectPorch(Xman)]
entrypoint: ReturnSelectPorch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_OldKorok[OpenPouchAddStock(Xman)]
entrypoint: OpenPouchAddStock(Xman)
actions: ['Demo_OpenMessageDialog']
queries: []
params: None

Actor: Npc_OldKorok[BUKI_Pouch(Xman)]
entrypoint: BUKI_Pouch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_OldKorok[YUMI_Pouch(Xman)]
entrypoint: YUMI_Pouch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_OldKorok[TATE_Pouch(Xman)]
entrypoint: TATE_Pouch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_OldKorok[PouchSelect(Xman)]
entrypoint: PouchSelect(Xman)
actions: []
queries: []
params: None

Actor: Npc_OldKorok[No_Pouch(Xman)]
entrypoint: No_Pouch(Xman)
actions: ['Demo_Talk']
queries: []
params: None

void SelectIncreasePorch() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_First'}) {
        Event351:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
            Npc_OldKorok[SelectIncreasePorch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk31', 'IsOverWriteLabelActorName': False})

            call PouchSelect({'Xman': 'Xman'})

        } else {
            Npc_OldKorok[SelectIncreasePorch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk32', 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Fld_5th'}) {
        Npc_OldKorok[SelectIncreasePorch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk83'})
    } else
    goto Event351
}

void SubFlowWeapon() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 'PorchNuts'}) {
            EventSystemActor.Demo_IncreaseNumKorokNuts({'IsWaitFinish': True, 'Value': 'PayNuts'})
            SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
            Npc_OldKorok[SubFlowWeapon(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk22', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})

            call DistributeAndDemo707_0_Weapon()

            EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'WeaponPorchStockNum'})
            Npc_OldKorok[SubFlowWeapon(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})

            call OpenPouchAddStock({'Type': 0, 'GetStockFlagName': 'Arg_FlagName', 'Xman': 'Xman'})

            Npc_OldKorok[SubFlowWeapon(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowWeapon(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowWeapon(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk25', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon11'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow08'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield16'}) {
                    Event221:
                    Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk12', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OldKorok_FullComp'})
                    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                } else {
                    Npc_OldKorok[SubFlowWeapon(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk28', 'IsOverWriteLabelActorName': True})
                    Event928:
                    Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk33'})
                    Event354:

                    call SelectIncreasePorch({'Xman': 'Xman'})

                }
            } else {
                goto Event354
            }
        } else {
            Event640:
            Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk85'})
            Event124:
            Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk23'})
            if !EventSystemActor.GeneralChoice2() {

                call ReturnSelectPorch({'Xman': 'Xman'})

            } else {
                Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk05', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
            }
        }
    } else {
        goto Event124
    }
}

void SubFlowBow() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 'PorchNutsBow'}) {
            EventSystemActor.Demo_IncreaseNumKorokNuts({'IsWaitFinish': True, 'Value': 'PayNutsBow'})
            SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
            Npc_OldKorok[SubFlowBow(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk22', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})

            call DistributeAndDemo707_0_Bow()

            EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'BowPorchStockNum'})
            Npc_OldKorok[SubFlowBow(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})

            call OpenPouchAddStock({'Type': 1, 'GetStockFlagName': 'Arg_FlagName', 'Xman': 'Xman'})

            Npc_OldKorok[SubFlowBow(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowBow(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowBow(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk26', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow08'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon11'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield16'}) {
                    goto Event221
                } else {
                    Npc_OldKorok[SubFlowBow(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk29', 'IsOverWriteLabelActorName': False})
                    goto Event928
                }
            } else {
                goto Event354
            }
        } else {
            goto Event640
        }
    } else {
        goto Event124
    }
}

void SubFlowShield() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 'PorchNutsShield'}) {
            EventSystemActor.Demo_IncreaseNumKorokNuts({'IsWaitFinish': True, 'Value': 'PeyNutsShield'})
            SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Bgm', 'FadeInSec': 1.5, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeOutSec': 2.5})
            Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk22', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})

            call DistributeAndDemo707_0_Shield()

            EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'IsWaitFinish': True, 'GameDataIntName': 'ShieldPorchStockNum'})
            Npc_OldKorok[SubFlowShield(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})

            call OpenPouchAddStock({'Type': 2, 'GetStockFlagName': 'Arg_FlagName', 'Xman': 'Xman'})

            Npc_OldKorok[SubFlowShield(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowShield(Xman)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'None'})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk27', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield16'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon11'})
                && EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow08'}) {
                    goto Event221
                } else {
                    Npc_OldKorok[SubFlowShield(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk30', 'IsOverWriteLabelActorName': False})
                    goto Event928
                }
            } else {
                goto Event354
            }
        } else {
            goto Event640
        }
    } else {
        goto Event124
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_FullComp'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_OldKorok.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_OldKorok.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:near02', 'IsChecked': False, 'DispFrame': 90})
        }
    } else {
        Npc_OldKorok.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void ReturnSelectPorch() {
    Npc_OldKorok[ReturnSelectPorch(Xman)].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk34', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})

    call PouchSelect({'Xman': 'Xman'})

}

void Daijin_Forest_InitTalk() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'F-2', 'WarpDestPosName': 'OldKorokTalk'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 466.98370361328125, 'Pattern1PosY': 251.52618408203125, 'Pattern1PosZ': -2103.617431640625, 'Pattern1AtX': 466.53875732421875, 'Pattern1AtY': 250.57437133789062, 'Pattern1AtZ': -2108.836181640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
}

void OpenPouchAddStock() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GetStockFlagName'})
    EventSystemActor.Demo_OpenPouchAddStockNum({'IsWaitFinish': True, 'Type': 'Type'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'GetDemo_Deluxe', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    Npc_OldKorok[OpenPouchAddStock(Xman)].Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk84', 'CloseDialogOption': 0, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    EventSystemActor.Demo_ClosePouchAddStockNum({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
}

void BUKI_Pouch() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon01'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon06'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon07'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon08'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon09'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon10'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Weapon11'}) {
                                                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk06'})
                                                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk09', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk33'})
                                                EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                                            } else {
                                                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk81'})

                                                call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon11', 'Xman': 'Xman', 'PorchNuts': 55, 'PayNuts': -55})

                                            }
                                        } else {
                                            Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk80'})

                                            call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon10', 'Xman': 'Xman', 'PorchNuts': 45, 'PayNuts': -45})

                                        }
                                    } else {
                                        Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk79'})

                                        call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon09', 'Xman': 'Xman', 'PorchNuts': 35, 'PayNuts': -35})

                                    }
                                } else {
                                    Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk78'})

                                    call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon08', 'Xman': 'Xman', 'PorchNuts': 25, 'PayNuts': -25})

                                }
                            } else {
                                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk77'})

                                call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon07', 'Xman': 'Xman', 'PorchNuts': 17, 'PayNuts': -17})

                            }
                        } else {
                            Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk76'})

                            call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon06', 'Xman': 'Xman', 'PorchNuts': 12, 'PayNuts': -12})

                        }
                    } else {
                        Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk75'})

                        call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon05', 'Xman': 'Xman', 'PorchNuts': 8, 'PayNuts': -8})

                    }
                } else {
                    Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk74'})

                    call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon04', 'Xman': 'Xman', 'PorchNuts': 5, 'PayNuts': -5})

                }
            } else {
                Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk73'})

                call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon03', 'PorchNuts': 3, 'PayNuts': -3, 'Xman': 'Xman'})

            }
        } else {
            Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})

            call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon02', 'PorchNuts': 2, 'PayNuts': -2, 'Xman': 'Xman'})

        }
    } else {
        Npc_OldKorok[BUKI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk71'})

        call SubFlowWeapon({'Arg_FlagName': 'Npc_OldKorok_Weapon01', 'PorchNuts': 1, 'PayNuts': -1, 'Xman': 'Xman'})

    }
}

void YUMI_Pouch() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow01'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow06'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow07'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Bow08'}) {
                                    Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk06'})
                                    Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk10', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                    Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk33'})
                                    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                                } else {
                                    Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk78'})

                                    call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow08', 'Xman': 'Xman', 'PorchNutsBow': 25, 'PayNutsBow': -25})

                                }
                            } else {
                                Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk77'})

                                call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow07', 'Xman': 'Xman', 'PorchNutsBow': 17, 'PayNutsBow': -17})

                            }
                        } else {
                            Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk76'})

                            call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow06', 'Xman': 'Xman', 'PorchNutsBow': 12, 'PayNutsBow': -12})

                        }
                    } else {
                        Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk75'})

                        call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow05', 'Xman': 'Xman', 'PorchNutsBow': 8, 'PayNutsBow': -8})

                    }
                } else {
                    Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk74'})

                    call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow04', 'Xman': 'Xman', 'PorchNutsBow': 5, 'PayNutsBow': -5})

                }
            } else {
                Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk73'})

                call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow03', 'PorchNutsBow': 3, 'PayNutsBow': -3, 'Xman': 'Xman'})

            }
        } else {
            Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})

            call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow02', 'PorchNutsBow': 2, 'PayNutsBow': -2, 'Xman': 'Xman'})

        }
    } else {
        Npc_OldKorok[YUMI_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk71'})

        call SubFlowBow({'Arg_FlagName': 'Npc_OldKorok_Bow01', 'PorchNutsBow': 1, 'PayNutsBow': -1, 'Xman': 'Xman'})

    }
}

void TATE_Pouch() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield01'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield03'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield06'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield07'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield08'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield09'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield10'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield11'}) {
                                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield12'}) {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield13'}) {
                                                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield14'}) {
                                                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield15'}) {
                                                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_Shield16'}) {
                                                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk06'})
                                                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk11'})
                                                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk33'})
                                                                    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
                                                                } else {
                                                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk89'})

                                                                    call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield16', 'PorchNutsShield': 20, 'PeyNutsShield': -20, 'Xman': 'Xman'})

                                                                }
                                                            } else {
                                                                Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk88'})

                                                                call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield15', 'PorchNutsShield': 15, 'PeyNutsShield': -15, 'Xman': 'Xman'})

                                                            }
                                                        } else {
                                                            Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk88'})

                                                            call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield14', 'PorchNutsShield': 15, 'PeyNutsShield': -15, 'Xman': 'Xman'})

                                                        }
                                                    } else {
                                                        Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk88'})

                                                        call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield13', 'PorchNutsShield': 15, 'PeyNutsShield': -15, 'Xman': 'Xman'})

                                                    }
                                                } else {
                                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk88'})

                                                    call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield12', 'PorchNutsShield': 15, 'PeyNutsShield': -15, 'Xman': 'Xman'})

                                                }
                                            } else {
                                                Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk88'})

                                                call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield11', 'PorchNutsShield': 15, 'PeyNutsShield': -15, 'Xman': 'Xman'})

                                            }
                                        } else {
                                            Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk87'})

                                            call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield10', 'PorchNutsShield': 10, 'PeyNutsShield': -10, 'Xman': 'Xman'})

                                        }
                                    } else {
                                        Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk87'})

                                        call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield09', 'PorchNutsShield': 10, 'PeyNutsShield': -10, 'Xman': 'Xman'})

                                    }
                                } else {
                                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk87'})

                                    call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield08', 'PorchNutsShield': 10, 'PeyNutsShield': -10, 'Xman': 'Xman'})

                                }
                            } else {
                                Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk87'})

                                call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield07', 'PorchNutsShield': 10, 'PeyNutsShield': -10, 'Xman': 'Xman'})

                            }
                        } else {
                            Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk87'})

                            call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield06', 'PorchNutsShield': 10, 'PeyNutsShield': -10, 'Xman': 'Xman'})

                        }
                    } else {
                        Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk74'})

                        call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield05', 'PorchNutsShield': 5, 'PeyNutsShield': -5, 'Xman': 'Xman'})

                    }
                } else {
                    Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk86'})

                    call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield04', 'PorchNutsShield': 4, 'PeyNutsShield': -4, 'Xman': 'Xman'})

                }
            } else {
                Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk73'})

                call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield03', 'PorchNutsShield': 3, 'PeyNutsShield': -3, 'Xman': 'Xman'})

            }
        } else {
            Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk72'})

            call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield02', 'PorchNutsShield': 2, 'PeyNutsShield': -2, 'Xman': 'Xman'})

        }
    } else {
        Npc_OldKorok[TATE_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk71'})

        call SubFlowShield({'Arg_FlagName': 'Npc_OldKorok_Shield01', 'PorchNutsShield': 1, 'PeyNutsShield': -1, 'Xman': 'Xman'})

    }
}

void PouchSelect() {
    switch EventSystemActor.GeneralChoice4() {
      case 0:

        call BUKI_Pouch({'Xman': 'Xman'})

      case 1:

        call YUMI_Pouch({'Xman': 'Xman'})

      case 2:

        call TATE_Pouch({'Xman': 'Xman'})

      case 3:

        call No_Pouch({'Xman': 'Xman'})

    }
}

void Talk() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OldKorok_Top'})

    call OldKorok_Help.InitTalk_OldKorok({'WarpDestMapName': 'F-2', 'Self': ActorIdentifier(name="Npc_OldKorok"), 'WarpDestPosName': 'OldKorokTalk'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        if Npc_OldKorok.IsOnInstEventFlag() {
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk08', 'IsOverWriteLabelActorName': False})
        } else {
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk07', 'IsOverWriteLabelActorName': False})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_GetNuts'}) {
        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk60'})
        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk61'})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk62', 'IsCloseMessageDialog': True})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo707_0', 'EntryPointName': 'Demo707_0_Weapon_KoroguWoods', 'EndFade': 0})
            Npc_OldKorok.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            Event776:
            GameRomCamera.Demo_ReturnSavePoint_1({'Count': 30.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk64'})
                Event771:
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk68'})
              case 1:
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk65'})
                goto Event771
              case 2:
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk66'})
                goto Event771
              case 3:
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk67'})
                goto Event771
            }
          case 1:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk62', 'IsCloseMessageDialog': True})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo707_0', 'EntryPointName': 'Demo707_0_Bow_KoroguWoods', 'EndFade': 0})
            Npc_OldKorok.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            goto Event776
          case 2:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk62', 'IsCloseMessageDialog': True})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo707_0', 'EntryPointName': 'Demo707_0_Shield_KoroguWoods', 'EndFade': 0})
            Npc_OldKorok.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Minister_Samba_Wait', 'MorphingFrame': -1.0})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            goto Event776
          case 3:
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk05', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HiddenKorok_Complete'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_First'}) {
            Event731:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_900First'}) {
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk58'})
                Event227:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_FullComp'}) {
                    Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk57'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_ProofKorok'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OldKorok_GetNuts'})
                    Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk59'})
                } else {
                    Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk46'})
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
                        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk63'})
                        Event314:
                        EventSystemActor.Demo_AppearNumKorokNuts({'IsWaitFinish': True})
                        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk01', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})

                        call PouchSelect({'Xman': ActorIdentifier(name="Npc_OldKorok")})

                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OldKorok_900First', 'IsWaitFinish': True})
                Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk24'})
                goto Event227
            }
        } else {
            Npc_OldKorok.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk90'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OldKorok_First', 'IsWaitFinish': True})
            goto Event731
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_FullComp'}) {
        Npc_OldKorok.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk13', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OldKorok_First'}) {
        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk60'})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            goto Event314
        } else {
            Event499:
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk53', 'IsOverWriteLabelActorName': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OldKorok_First', 'IsWaitFinish': True})
        Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk00'})
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_KorokNuts', 'Count': 1}) {
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk70'})
            goto Event314
        } else {
            Npc_OldKorok.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk69'})
            goto Event499
        }
    }
}

void No_Pouch() {
    Npc_OldKorok[No_Pouch(Xman)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OldKorok:talk68', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_DisappearNumKorokNuts({'IsWaitFinish': True})
}

void DistributeAndDemo707_0_Weapon() {
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Rvs_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_Rvs', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Wet_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_WetLand', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_For_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_Forest', 'EndFade': 0})
        } else {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_KoroguWoods', 'EndFade': 0})
        }
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Weapon_Kakariko', 'EndFade': 0})
    }
}

void DistributeAndDemo707_0_Bow() {
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Rvs_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_Rvs', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Wet_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_WetLand', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_For_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_Forest', 'EndFade': 0})
        } else {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_KoroguWoods', 'EndFade': 0})
        }
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Bow_Kakariko', 'EndFade': 0})
    }
}

void DistributeAndDemo707_0_Shield() {
    if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Help_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Rvs_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_Rvs', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_Wet_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_WetLand', 'EndFade': 0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'OldKorok_For_Talking'}) {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_Forest', 'EndFade': 0})
        } else {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_KoroguWoods', 'EndFade': 0})
        }
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo707_0', 'IsWaitFinish': True, 'EntryPointName': 'Demo707_0_Shield_Kakariko', 'EndFade': 0})
    }
}
