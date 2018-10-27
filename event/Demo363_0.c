-------- EventFlow: Demo363_0 --------

Actor: DgnObj_WarpPoint_A_01
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_A_01[WarpPointAnimeHateno(DgnObj_WarpPoint_A_01)]
entrypoint: WarpPointAnimeHateno(DgnObj_WarpPoint_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

Actor: DgnObj_WarpPoint_A_01[WarpPointAnimeAkkare(DgnObj_WarpPoint_A_01)]
entrypoint: WarpPointAnimeAkkare(DgnObj_WarpPoint_A_01)
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: None

void Demo363_0_Hateno() {

    call WarpPointAnimeHateno({'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01")})

}

void WarpPointAnimeHateno() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3781.38037109375, 'Pattern1PosY': 360.3814392089844, 'Pattern1PosZ': 2105.27978515625, 'Pattern1AtX': 3779.470703125, 'Pattern1AtY': 356.805419921875, 'Pattern1AtZ': 2111.55419921875, 'Pattern1Fovy': 50.00001907348633, 'Count': 0.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    DgnObj_WarpPoint_A_01[WarpPointAnimeHateno(DgnObj_WarpPoint_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
    DgnObj_WarpPoint_A_01[WarpPointAnimeHateno(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'ASName': 'On', 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': True, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    DgnObj_WarpPoint_A_01[WarpPointAnimeHateno(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'ASName': 'OnWait', 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
}

void WarpPointAnimeAkkare() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4505.015625, 'Pattern1PosY': 356.0951232910156, 'Pattern1PosZ': -3141.211669921875, 'Pattern1AtX': 4507.7421875, 'Pattern1AtY': 351.6239013671875, 'Pattern1AtZ': -3146.998291015625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    DgnObj_WarpPoint_A_01[WarpPointAnimeAkkare(DgnObj_WarpPoint_A_01)].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
    DgnObj_WarpPoint_A_01[WarpPointAnimeAkkare(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'ASName': 'On', 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': True, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    DgnObj_WarpPoint_A_01[WarpPointAnimeAkkare(DgnObj_WarpPoint_A_01)].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'SeqBank': 0, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'ASName': 'OnWait', 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
}

void Demo363_0_Akkare() {

    call WarpPointAnimeAkkare({'DgnObj_WarpPoint_A_01': ActorIdentifier(name="DgnObj_WarpPoint_A_01")})

}
