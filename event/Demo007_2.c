-------- EventFlow: Demo007_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceTime', 'Demo_RecoverPlayerEnergy', 'Demo_RecoverPlayerLife', 'Demo_SetExtraEnergyOfPlayer', 'Demo_SetExtraLifeOfPlayer', 'Demo_StartLifeUpDemo', 'Demo_WaitUntilLifeUpDemoEnd', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['CheckExtraEnergyOfPlayer', 'CheckExtraLifeOfPlayer', 'isBloodyMoonTrig', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void INN() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INN', 'IsWaitFinish': False})
        EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event66:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event66
    }
}

void INN_Noon() {

    call INN({'DestTime': 1})

}

void INN_Night() {

    call INN({'DestTime': 2})

}

void INN_Extra() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INNExtra', 'IsWaitFinish': False})
        EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
        switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 3}) {
          case 0:
            Event200:
            switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 0}) {
              case 0:
                Event195:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'Value': 4, 'ProcessingMode': 0})
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 0})
              case 1:
                goto Event195
              case 2:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 4})
            }
          case 1:
            goto Event200
          case 2:
            if !EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 0}) {
                Event194:
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 0})
            } else {
                goto Event194
            }
        }
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event205:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event205
    }
}

void INN_NoonExtra() {

    call INN_Extra({'DestTime': 1})

}

void INN_NightExtra() {

    call INN_Extra({'DestTime': 2})

}

void INN_Morning() {

    call INN({'DestTime': 0})

}

void INN_MorningExtra() {

    call INN_Extra({'DestTime': 0})

}

void INN_ExtraGoron() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INNExtraGoron'})
        }

        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
        switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 11}) {
          case 0:
            Event135:
            switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
              case 0:
                Event130:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
              case 1:
                goto Event130
              case 2:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
            }
          case 1:
            goto Event135
          case 2:
            if !EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
                Event129:
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
            } else {
                goto Event129
            }
        }
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event140:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event140
    }
}

void INN_ExtraGerudo() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Event220:
            Starter.Demo_Talk({'MessageId': 'DemoMsg/Demo007_2:Demo007_2_Text002', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            Event329:

            fork {
                EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
            } {
                SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INNExtraGerudo'})
            }

            EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
            EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
            switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 11}) {
              case 0:
                Event179:
                switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
                  case 0:
                    Event174:
                    EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
                    EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
                  case 1:
                    goto Event174
                  case 2:
                    EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
                }
              case 1:
                goto Event179
              case 2:
                if !EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
                    Event173:
                    EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
                } else {
                    goto Event173
                }
            }
          case 1:
            Starter.Demo_Talk({'MessageId': 'DemoMsg/Demo007_2:Demo007_2_Text003', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            goto Event329
          case 2:
            Starter.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo007_2:Demo007_2_Text008', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
            goto Event329
          case 3:
            goto Event220
        }
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event184:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event184
    }
}

void INN_NoonExtraGoron() {

    call INN_ExtraGoron({'DestTime': 1})

}

void INN_NightExtraGoron() {

    call INN_ExtraGoron({'DestTime': 2})

}

void INN_MorningExtraGoron() {

    call INN_ExtraGoron({'DestTime': 0})

}

void INN_NoonExtraGerudo() {

    call INN_ExtraGerudo({'DestTime': 1})

}

void INN_NightExtraGerudo() {

    call INN_ExtraGerudo({'DestTime': 2})

}

void INN_MorningExtraGerudo() {

    call INN_ExtraGerudo({'DestTime': 0})

}

void INN_NoonExtraZora() {

    call INN_ExtraZora({'DestTime': 1})

}

void INN_NightExtraZora() {

    call INN_ExtraZora({'DestTime': 2})

}

void INN_MorningExtraZora() {

    call INN_ExtraZora({'DestTime': 0})

}

void INN_ExtraZora() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INNExtraZora'})
        }

        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
        switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 11}) {
          case 0:
            Event245:
            switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
              case 0:
                Event240:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
              case 1:
                goto Event240
              case 2:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
            }
          case 1:
            goto Event245
          case 2:
            if !EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
                Event239:
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
            } else {
                goto Event239
            }
        }
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event250:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        }

        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event250
    }
}

void INN_ExtraRito() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DirectTime': -1, 'PassTime': -1, 'ActReset': True, 'DestTime': 'DestTime'})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': True, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INNExtraRito'})
        }

        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
        switch EventSystemActor.CheckExtraLifeOfPlayer({'Threshold': 11}) {
          case 0:
            Event282:
            switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
              case 0:
                Event277:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
              case 1:
                goto Event277
              case 2:
                EventSystemActor.Demo_SetExtraLifeOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 12})
            }
          case 1:
            goto Event282
          case 2:
            if !EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 5}) {
                Event276:
                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
            } else {
                goto Event276
            }
        }
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if !EventSystemActor.isBloodyMoonTrig() {
        Event287:

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    } else {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
        goto Event287
    }
}

void INN_NoonExtraRito() {

    call INN_ExtraRito({'DestTime': 1})

}

void INN_NightExtraRito() {

    call INN_ExtraRito({'DestTime': 2})

}

void INN_MorningExtraRito() {

    call INN_ExtraRito({'DestTime': 0})

}
