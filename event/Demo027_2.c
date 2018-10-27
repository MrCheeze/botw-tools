-------- EventFlow: Demo027_2 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Parasail002
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FirstHighlandFog[FirstFog]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo027_2_0() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C20-0', 'TargetActor': 3, 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        Npc_King_Parasail002.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }

}

void Demo027_2_1() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C20-1', 'TargetActor': 3, 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear12', 'IsCloseMessageDialog': True})
    }

}

void Demo027_2_3() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorDirReferenceMode': 1, 'EndFrame': 90.0, 'SceneName': 'C20-3', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear16'})
    }

}

void Demo027_2_4() {
    FirstHighlandFog[FirstFog].Demo_XLinkEventCreate({'ELinkKey': 'AddMist', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C20-3', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear16'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C20-2', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FirstHighlandFog[FirstFog].Demo_XLinkEventKill({'ELinkKey': 'AddMist', 'IsWaitFinish': True, 'SLinkKey': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 149})
    } {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Appear17'})
    }

}

void Demo027_2_5() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C20-4', 'IsWaitFinish': True, 'ActorName': 'FldObj_MapTower_A_01', 'EndFrame': 150.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C20-5', 'ActorName': 'FldObj_MapTower_A_01', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    } {
        Npc_King_Parasail002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Parasail002:Talk02', 'IsCloseMessageDialog': True})
    }

}
