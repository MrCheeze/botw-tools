-------- EventFlow: AutoPlacementNear_Enemy_Octarock --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'NearCreate']
queries: ['EcoAreaActorName', 'GroundNorm', 'WaterDepth', 'PlayerRideHorse', 'GroundMat', 'TimeType', 'CheckGameData']
params: None

void EntryPoint0() {
    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Octarock_Snow'}) {
        if AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'}) {
            switch AutoPlacement.GroundMat() {
              case 9:
                Event10:
                switch AutoPlacement.TimeType() {
                  case 1:
                    Event3:
                    if !AutoPlacement.PlayerRideHorse() {
                        AutoPlacement.NearCreate({'WaitFrame': 1})
                        if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                            if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                            }
                        }
                    }
                  case 4:
                    goto Event3
                }
              case 14:
                goto Event10
            }
        }
    }
}
