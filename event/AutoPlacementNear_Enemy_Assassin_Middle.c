-------- EventFlow: AutoPlacementNear_Enemy_Assassin_Middle --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['GroundNorm', 'WaterDepth', 'EcoAreaActorName', 'RouteDistance', 'PlayerRideHorse', 'TimeType']
params: None

void EntryPoint0() {
    if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Assassin_Middle'}) {
        if !AutoPlacement.PlayerRideHorse() {
            switch AutoPlacement.TimeType() {
              case 3:
                Event256:
                if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                    if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                        if !AutoPlacement.RouteDistance({'Distance': 50.0}) {
                            AutoPlacement.CreateData({'MinNum': 1, 'OffsetPosY': 0.0, 'RideList': '', 'MaxNum': 1, 'GroupRadius': 1.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                        }
                    }
                }
              case 5:
                goto Event256
              case 7:
                goto Event256
            }
        }
    }
}
