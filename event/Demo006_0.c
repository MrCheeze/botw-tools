-------- EventFlow: Demo006_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_RestartStageFromGameOver', 'Demo_AppearGameOver', 'Demo_LoadSaveDataFromGameOver', 'Demo_ExitGame']
queries: ['BranchByGameOver', 'CheckPlayerFastFadeDead', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Dead']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forSoundCtrl]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_PublicVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo006_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Dead({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerFastFadeDead() {
        Event29:
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
        EventSystemActor.Demo_AppearGameOver({'IsWaitFinish': True, 'Delay': 0})
        Event7:
        switch EventSystemActor.BranchByGameOver() {
          case 0:
            EventSystemActor.Demo_RestartStageFromGameOver({'IsWaitFinish': True})
          case 1:
            EventSystemActor.Demo_LoadSaveDataFromGameOver({'IsWaitFinish': True})
          case 2:
            EventSystemActor.Demo_ExitGame({'IsWaitFinish': True, 'ShowLogo': 0})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'AssassinHideoutinKilled'}) {
        EventSystemActor[forSoundCtrl].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_AssassinLaughter', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        NPC_PublicVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo006_0:Talk00', 'CloseDialogOption': 3})
        goto Event29
    } else {

        fork {
            EventSystemActor.Demo_AppearGameOver({'IsWaitFinish': True, 'Delay': 85})
        } {
            EventSystemActor[forSoundCtrl].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
        }

        goto Event7
    }
}
