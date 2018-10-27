-------- EventFlow: AutoPlacement_Enemy_Lizalfos --------

Actor: AutoPlacement
entrypoint: None()
actions: ['CreateData']
queries: ['WaterDepth', 'EcoAreaActorName', 'TimeType', 'WaterSurface', 'WaterSubMat', 'GroundMat', 'GroundNorm', 'RouteDistance']
params: None

void EntryPoint0() {

    fork {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Junior'}) {
            Event269:
            switch AutoPlacement.TimeType() {
              case 0:
                Event271:
                if AutoPlacement.WaterSurface() {
                    if !AutoPlacement.WaterSubMat() {
                        if AutoPlacement.WaterDepth({'Depth': 3.0}) {
                            AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'MaxNum': 2, 'OffsetPosY': -2.0, 'EquipWeaponActorCount': -1, 'Mimicry': False})
                        }
                    }
                } else {
                    switch AutoPlacement.GroundMat() {
                      case 0:
                        Event282:
                        if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                            if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                                if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                    AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
                                }
                            }
                        }
                      case 1:
                        goto Event282
                      case 2:
                        goto Event282
                      case 3:
                        goto Event282
                      case 5:
                        goto Event282
                    }
                }
              case 1:
                goto Event271
              case 2:
                goto Event271
              case 3:
                goto Event271
              case 4:
                goto Event271
              case 5:
                goto Event271
              case 6:
                goto Event271
              case 7:
                goto Event271
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Middle'}) {
            goto Event269
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Senior'}) {
            goto Event269
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Electric'}) {
            switch AutoPlacement.TimeType() {
              case 0:
                Event285:
                switch AutoPlacement.GroundMat() {
                  case 3:
                    Event287:
                    if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
                            }
                        }
                    }
                  case 12:
                    goto Event287
                }
              case 1:
                goto Event285
              case 2:
                goto Event285
              case 3:
                goto Event285
              case 4:
                goto Event285
              case 5:
                goto Event285
              case 6:
                goto Event285
              case 7:
                goto Event285
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Ice'}) {
            switch AutoPlacement.TimeType() {
              case 0:
                Event290:
                switch AutoPlacement.GroundMat() {
                  case 9:
                    Event292:
                    if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
                            }
                        }
                    }
                  case 14:
                    goto Event292
                }
              case 1:
                goto Event290
              case 2:
                goto Event290
              case 3:
                goto Event290
              case 4:
                goto Event290
              case 5:
                goto Event290
              case 6:
                goto Event290
              case 7:
                goto Event290
            }
        }
    } {
        if AutoPlacement.EcoAreaActorName({'ActorName': 'Enemy_Lizalfos_Fire'}) {
            switch AutoPlacement.TimeType() {
              case 2:
                Event296:
                switch AutoPlacement.GroundMat() {
                  case 3:
                    Event297:
                    if AutoPlacement.GroundNorm({'Angle': 10.0}) {
                        if !AutoPlacement.WaterDepth({'Depth': 0.0}) {
                            if AutoPlacement.RouteDistance({'Distance': 20.0}) {
                                AutoPlacement.CreateData({'MinNum': 1, 'GroupRadius': 8.0, 'RideList': '', 'EquipWeaponActorCount': -1, 'Mimicry': True, 'MaxNum': 1, 'OffsetPosY': 0.0})
                            }
                        }
                    }
                  case 12:
                    goto Event297
                }
              case 3:
                goto Event296
              case 4:
                goto Event296
              case 5:
                goto Event296
            }
        }
    }

}
