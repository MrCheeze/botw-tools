-------- EventFlow: AutoPlacementNear_Enemy_Assassin_Shooter_Junior --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'WaterDepth', 'EcoAreaActorName', 'RouteDistance', 'PlayerRideHorse', 'TimeType']
params: None

void EntryPoint0() {
    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Assassin_Shooter_Junior'})
    && !AutoPlacement.PlayerRideHorse()
    && AutoPlacement.TimeType() in [3, 5, 7]
    && AutoPlacement.GroundNorm({'Angle': 10.0})
    && !AutoPlacement.WaterDepth({'Depth': 0.0})
    && !AutoPlacement.RouteDistance({'Distance': 50.0}) {
        AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
    }
}
