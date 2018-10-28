-------- EventFlow: AutoPlacementNear_Enemy_Lizalfos --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData', 'NearCreate']
queries: ['GroundNorm', 'WaterDepth', 'EcoAreaActorName', 'PlayerRideHorse', 'GroundMat', 'TimeType', 'CheckGameData', 'RouteDistance']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Electric'})
        && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
        && AutoPlacement.GroundMat() in [3, 12]
        Event267:
        && AutoPlacement.TimeType() in [3, 5]
        && !AutoPlacement.PlayerRideHorse() {
            AutoPlacement.NearCreate({'WaitFrame': 1})
            if AutoPlacement.GroundNorm({'Angle': 10.0})
            && !AutoPlacement.WaterDepth({'Depth': 0.0})
            && AutoPlacement.RouteDistance({'Distance': 20.0}) {
                AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Ice'})
        && AutoPlacement.CheckGameData({'Label': 'FirstTouchdown'})
        && AutoPlacement.GroundMat() in [9, 14] {
            goto Event267
        }
    }

}
