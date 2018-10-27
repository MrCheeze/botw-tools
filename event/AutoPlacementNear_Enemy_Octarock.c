-------- EventFlow: AutoPlacementNear_Enemy_Octarock --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'NearCreate']
queries: ['EcoAreaActorName', 'GroundNorm', 'WaterDepth', 'PlayerRideHorse', 'GroundMat', 'TimeType', 'CheckGameData']
params: None

void EntryPoint0() {
    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Snow'}) {
        if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
            if AutoPlacement.GroundMat() in [9, 14] {
                if AutoPlacement.TimeType() in [1, 4] {
                    if !AutoPlacement.PlayerRideHorse() {
                        AutoPlacement.NearCreate({'WaitFrame': 1})
                        if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                            if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                }
            }
        }
    }
}
