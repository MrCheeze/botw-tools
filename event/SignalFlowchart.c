-------- EventFlow: SignalFlowchart --------

Actor: SignalFlowchart
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_LoopEnd']
queries: ['CheckAreaTransition', 'CheckPlayerState', 'WhatCurrentItem', 'CheckFlag', 'CheckEquipArmorSeriesType', 'CheckDuringBloodyMoon', 'HasPorchItem', 'CheckGameDataInt', 'CheckEquipment']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void PlayerOnGround() {
    Event46:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event2:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event46
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event2
    }
}

void AproachFirstFieldCliff() {
    Event47:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': -46}) {
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': 47}) {
                Event11:
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                Event8:
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event47
            } else {
                if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 46, 'PostAreaNo': 50}) {
                    goto Event11
                } else {
                    Event10:
                    SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
                    goto Event8
                }
            }
        } else {
            if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': -47}) {
                if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': 46}) {
                    goto Event11
                } else {
                    if EventSystemActor.CheckAreaTransition({'CurrentAreaNo': 47, 'PostAreaNo': 50}) {
                        goto Event11
                    } else {
                        goto Event10
                    }
                }
            } else {
                goto Event11
            }
        }
    } else {
        goto Event11
    }
}

void PlayerNakedness() {
    Event48:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event20:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event48
        } else {
            Event23:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event20
        }
    } else {
        goto Event23
    }
}

void PlayerUseStopTimer() {
    Event28:
    switch EventSystemActor.WhatCurrentItem() {
      case 0:
        Event30:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event27:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event28
      case 1:
        goto Event30
      case 2:
        goto Event30
      case 3:
        goto Event30
      case 4:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        goto Event27
      case 5:
        goto Event30
      case 6:
        goto Event30
      case 7:
        goto Event30
      case 8:
        goto Event30
    }
}

void IsPlayed_Demo103_0() {
    Event38:
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo103_0'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event41:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event38
        } else {
            Event44:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event41
        }
    } else {
        goto Event44
    }
}

void Gerudo_CostumeCheck() {
    Event51:
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Event53:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event54:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event51
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Mans_Clothes_Shop'}) {
            goto Event53
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            goto Event54
        }
    }
}

void PlayerDiveWater() {
    Event58:
    if EventSystemActor.CheckPlayerState({'PlayerState': 15}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event55:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event58
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event55
    }
}

void PlayerNonBattle() {
    Event63:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 16}) {
            Event61:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            Event59:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event63
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            goto Event59
        }
    } else {
        goto Event61
    }
}

void Demo318_0() {
    Event68:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 16}) {
            Event66:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            Event64:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event68
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
                goto Event66
            } else {
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
                goto Event64
            }
        }
    } else {
        goto Event66
    }
}

void BloodyMoonRelief() {
    Event70:
    if !EventSystemActor.CheckDuringBloodyMoon() {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            Event75:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event70
        } else {
            goto Event75
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonReliefOn'}) {
            goto Event75
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            goto Event75
        }
    }
}

void PlayerNakednessAll() {
    Event82:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 18}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event78:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event82
        } else {
            Event80:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event78
        }
    } else {
        goto Event80
    }
}

void NakedIsland() {
    Event86:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            Event84:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event83:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event86
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                goto Event83
            } else {
                if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
                    SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                    goto Event83
                } else {
                    if EventSystemActor.CheckPlayerState({'PlayerState': 19}) {
                        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                        goto Event83
                    } else {
                        if EventSystemActor.CheckPlayerState({'PlayerState': 25}) {
                            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                            goto Event83
                        } else {
                            goto Event84
                        }
                    }
                }
            }
        }
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event83
    }
}

void Relief_Landing() {
    Event94:
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event91:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event94
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event91
    }
}

void RinelMt_Check_EArrow() {
    Event96:
    if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 20}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event95:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event96
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event95
    }
}

void PlayerRideOn() {
    Event103:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event100:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event103
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event100
    }
}

void Gerudo_CostumeCheck_Cha() {
    Event104:
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event107:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event104
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event107
    }
}

void PlayerOnGround_Demo348_1() {
    Event126:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            Event125:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            Event123:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event126
        } else {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            goto Event123
        }
    } else {
        goto Event125
    }
}

void HorseRace_Goal() {
    Event131:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_HorseRace_NumPassFence', 'Operator': 'GreaterThanOrEqualTo', 'Value': 10}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event127:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event131
        } else {
            Event129:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event127
        }
    } else {
        goto Event129
    }
}

void Check_StepOnTheFlowers() {
    Event137:
    if EventSystemActor.CheckPlayerState({'PlayerState': 27}) {
        if EventSystemActor.CheckFlag({'FlagName': 'DontDamageFlower_IsMiss'}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
            Event133:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event137
        } else {
            Event135:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event133
        }
    } else {
        goto Event135
    }
}

void HorseRace_Gate() {
    Event143:
    if EventSystemActor.CheckPlayerState({'PlayerState': 22}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event140:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event143
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event140
    }
}

void Gaman_Failed_Check() {
    Event156:
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event153:
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event152:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event156
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
            goto Event153
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 7}) {
                goto Event153
            } else {
                SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
                goto Event152
            }
        }
    }
}

void StatueOfZora_Check() {
    Event160:
    if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_049'}) {
        Event158:
        if EventSystemActor.CheckPlayerState({'PlayerState': 23}) {
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': True, 'Value': 1})
            Event163:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event160
        } else {
            Event159:
            SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
            goto Event163
        }
    } else {
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Spear_050'}) {
            goto Event158
        } else {
            goto Event159
        }
    }
}

void PlayerStable() {
    Event168:
    if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event164:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event168
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        goto Event164
    }
}

void PlayerFalls() {
    Event172:
    if EventSystemActor.CheckPlayerState({'PlayerState': 20}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        Event169:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event172
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event169
    }
}

void BalladOfHeroRito_RapidBreak() {
    Event175:
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'BalladOfHeroRito_BrokenTargetNum', 'Operator': 'GreaterThanOrEqualTo', 'Value': 4}) {
        SignalFlowchart.Demo_SendSignal({'Value': 1, 'SignalType': 0, 'IsWaitFinish': True})
        Event178:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event175
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        goto Event178
    }
}

void BalladOfHeroGerudo_TakeBall() {
    Event182:
    if EventSystemActor.CheckPlayerState({'PlayerState': 26}) {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 0, 'IsWaitFinish': True})
        Event179:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event182
    } else {
        SignalFlowchart.Demo_SendSignal({'SignalType': 0, 'Value': 1, 'IsWaitFinish': True})
        goto Event179
    }
}
