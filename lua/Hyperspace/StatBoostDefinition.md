---
layout: lua
title: StatBoostDefinition
lang: en
---

# Class "StatBoostDefinition"


## Constructors
{: #Constructors .lua-content-section}
### StatBoostDefinition ()
{: #StatBoostDefinition .lua-content-item aria-label='Constructors' }
#### [StatBoostDefinition](../Hyperspace/StatBoostDefinition) StatBoostDefinition ()
{: aria-label='Constructors' }

___


## Constants
{: #Constants .lua-content-section}
### StatBoostDefinition.BoostSource_AUGMENT
{: #BoostSource_AUGMENT .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostSource_CREW
{: #BoostSource_CREW .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.BoostType_ADD
{: #BoostType_ADD .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostType_FLAT
{: #BoostType_FLAT .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostType_FLIP
{: #BoostType_FLIP .lua-content-item aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.BoostType_MAX
{: #BoostType_MAX .lua-content-item aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.BoostType_MIN
{: #BoostType_MIN .lua-content-item aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.BoostType_MULT
{: #BoostType_MULT .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.BoostType_REPLACE_GROUP
{: #BoostType_REPLACE_GROUP .lua-content-item aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.BoostType_REPLACE_POWER
{: #BoostType_REPLACE_POWER .lua-content-item aria-label='Constants' }
Equivalent to `8`.

___
### StatBoostDefinition.BoostType_SET
{: #BoostType_SET .lua-content-item aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.BoostType_SET_VALUE
{: #BoostType_SET_VALUE .lua-content-item aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.CrewTarget_ALL
{: #CrewTarget_ALL .lua-content-item aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.CrewTarget_ALLIES
{: #CrewTarget_ALLIES .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.CrewTarget_CURRENT_ALLIES
{: #CrewTarget_CURRENT_ALLIES .lua-content-item aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.CrewTarget_CURRENT_ENEMIES
{: #CrewTarget_CURRENT_ENEMIES .lua-content-item aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.CrewTarget_ENEMIES
{: #CrewTarget_ENEMIES .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.CrewTarget_ORIGINAL_ALLIES
{: #CrewTarget_ORIGINAL_ALLIES .lua-content-item aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.CrewTarget_ORIGINAL_ENEMIES
{: #CrewTarget_ORIGINAL_ENEMIES .lua-content-item aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.CrewTarget_SELF
{: #CrewTarget_SELF .lua-content-item aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.DroneTarget_ALL
{: #DroneTarget_ALL .lua-content-item aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.DroneTarget_CREW
{: #DroneTarget_CREW .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.DroneTarget_DRONES
{: #DroneTarget_DRONES .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.ShipTarget_ALL
{: #ShipTarget_ALL .lua-content-item aria-label='Constants' }
Equivalent to `9`.

___
### StatBoostDefinition.ShipTarget_CREW_TARGET
{: #ShipTarget_CREW_TARGET .lua-content-item aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.ShipTarget_CURRENT_ALL
{: #ShipTarget_CURRENT_ALL .lua-content-item aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.ShipTarget_CURRENT_ROOM
{: #ShipTarget_CURRENT_ROOM .lua-content-item aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.ShipTarget_ENEMY_SHIP
{: #ShipTarget_ENEMY_SHIP .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.ShipTarget_ORIGINAL_OTHER_SHIP
{: #ShipTarget_ORIGINAL_OTHER_SHIP .lua-content-item aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.ShipTarget_ORIGINAL_SHIP
{: #ShipTarget_ORIGINAL_SHIP .lua-content-item aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.ShipTarget_OTHER_ALL
{: #ShipTarget_OTHER_ALL .lua-content-item aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.ShipTarget_PLAYER_SHIP
{: #ShipTarget_PLAYER_SHIP .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.ShipTarget_TARGETS_ME
{: #ShipTarget_TARGETS_ME .lua-content-item aria-label='Constants' }
Equivalent to `8`.

___
### StatBoostDefinition.SystemRoomTarget_ALL
{: #SystemRoomTarget_ALL .lua-content-item aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.SystemRoomTarget_NONE
{: #SystemRoomTarget_NONE .lua-content-item aria-label='Constants' }
Equivalent to `1`.

___



## Methods
{: #Methods .lua-content-section}
### GiveId ()
{: #GiveId .lua-content-item aria-label='Methods' }
#### void :GiveId ()
{: aria-label='Methods' }

___
### IsTargetPower ()
{: #IsTargetPower .lua-content-item aria-label='Methods' }
#### boolean :IsTargetPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) power)
{: aria-label='Methods' }

___
### IsTargetPower ()
{: #IsTargetPower .lua-content-item aria-label='Methods' }
#### boolean :IsTargetPower ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) power)
{: aria-label='Methods' }

___
### TestRoomStatBoostSystem ()
{: #TestRoomStatBoostSystem .lua-content-item aria-label='Methods' }
#### boolean :TestRoomStatBoostSystem ([ShipManager](../Hyperspace/ShipManager) ship, integer room)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### affectsSelf
{: #affectsSelf .lua-content-item aria-label='Fields' }
#### boolean .affectsSelf
{: aria-label='Fields' }

___
### amount
{: #amount .lua-content-item aria-label='Fields' }
#### number .amount
{: aria-label='Fields' }

___
### blackList
{: #blackList .lua-content-item aria-label='Fields' }
#### vector\<string\> .blackList
{: aria-label='Fields' }

___
### boostAnim
{: #boostAnim .lua-content-item aria-label='Fields' }
#### string .boostAnim
{: aria-label='Fields' }

___
### boostSource
{: #boostSource .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.BoostSource](../Hyperspace/StatBoostDefinition.BoostSource) .boostSource
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.BoostSource.CREW`
`Hyperspace.StatBoostDefinition.BoostSource.AUGMENT`

___
### boostType
{: #boostType .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.BoostType](../Hyperspace/StatBoostDefinition.BoostType) .boostType
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.BoostType.MULT`
`Hyperspace.StatBoostDefinition.BoostType.FLAT`
`Hyperspace.StatBoostDefinition.BoostType.ADD`
`Hyperspace.StatBoostDefinition.BoostType.SET`
`Hyperspace.StatBoostDefinition.BoostType.FLIP`
`Hyperspace.StatBoostDefinition.BoostType.SET_VALUE`
`Hyperspace.StatBoostDefinition.BoostType.MIN`
`Hyperspace.StatBoostDefinition.BoostType.MAX`
`Hyperspace.StatBoostDefinition.BoostType.REPLACE_GROUP`
`Hyperspace.StatBoostDefinition.BoostType.REPLACE_POWER`

___
### cloneClear
{: #cloneClear .lua-content-item aria-label='Fields' }
#### boolean .cloneClear
{: aria-label='Fields' }

___
### crewTarget
{: #crewTarget .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.CrewTarget.ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ENEMIES`
`Hyperspace.StatBoostDefinition.CrewTarget.SELF`
`Hyperspace.StatBoostDefinition.CrewTarget.ALL`
`Hyperspace.StatBoostDefinition.CrewTarget.CURRENT_ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.CURRENT_ENEMIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ORIGINAL_ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ORIGINAL_ENEMIES`

___
### dangerRating
{: #dangerRating .lua-content-item aria-label='Fields' }
#### number .dangerRating
{: aria-label='Fields' }

___
### deathEffectChange
{: #deathEffectChange .lua-content-item aria-label='Fields' }
#### ExplosionDefinition .deathEffectChange
{: aria-label='Fields' }

___
### droneTarget
{: #droneTarget .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.DroneTarget](../Hyperspace/StatBoostDefinition.DroneTarget) .droneTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.DroneTarget.DRONES`
`Hyperspace.StatBoostDefinition.DroneTarget.CREW`
`Hyperspace.StatBoostDefinition.DroneTarget.ALL`

___
### duration
{: #duration .lua-content-item aria-label='Fields' }
#### number .duration
{: aria-label='Fields' }

___
### extraConditions
{: #extraConditions .lua-content-item aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraConditions
{: aria-label='Fields' }

___
### extraConditionsReq
{: #extraConditionsReq .lua-content-item aria-label='Fields' }
#### boolean .extraConditionsReq
{: aria-label='Fields' }

___
### extraOrConditions
{: #extraOrConditions .lua-content-item aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraOrConditions
{: aria-label='Fields' }

___
### fireCount
{: #fireCount .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .fireCount
{: aria-label='Fields' }

___
### functionalTarget
{: #functionalTarget .lua-content-item aria-label='Fields' }
#### boolean .functionalTarget
{: aria-label='Fields' }

___
### hasPowerList
{: #hasPowerList .lua-content-item aria-label='Fields' }
#### boolean .hasPowerList
{: aria-label='Fields' }

___
### healthFractionReq
{: #healthFractionReq .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .healthFractionReq
{: aria-label='Fields' }

___
### healthReq
{: #healthReq .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .healthReq
{: aria-label='Fields' }

___
### isBool
{: #isBool .lua-content-item aria-label='Fields' }
#### boolean .isBool
{: aria-label='Fields' }

___
### isRoomBased
{: #isRoomBased .lua-content-item aria-label='Fields' }
#### boolean .isRoomBased
{: aria-label='Fields' }

___
### jumpClear
{: #jumpClear .lua-content-item aria-label='Fields' }
#### boolean .jumpClear
{: aria-label='Fields' }

___
### maxStacks
{: #maxStacks .lua-content-item aria-label='Fields' }
#### integer .maxStacks
{: aria-label='Fields' }

___
### oxygenReq
{: #oxygenReq .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .oxygenReq
{: aria-label='Fields' }

___
### powerBlacklist
{: #powerBlacklist .lua-content-item aria-label='Fields' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerBlacklist
{: aria-label='Fields' }

___
### powerChange
{: #powerChange .lua-content-item aria-label='Fields' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .powerChange
{: aria-label='Fields' }

___
### powerGroupBlacklist
{: #powerGroupBlacklist .lua-content-item aria-label='Fields' }
#### unordered_set\<uint\> .powerGroupBlacklist
{: aria-label='Fields' }

___
### powerGroupWhitelist
{: #powerGroupWhitelist .lua-content-item aria-label='Fields' }
#### unordered_set\<uint\> .powerGroupWhitelist
{: aria-label='Fields' }

___
### powerResourceBlacklist
{: #powerResourceBlacklist .lua-content-item aria-label='Fields' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceBlacklist
{: aria-label='Fields' }

___
### powerResourceWhitelist
{: #powerResourceWhitelist .lua-content-item aria-label='Fields' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceWhitelist
{: aria-label='Fields' }

___
### powerScaling
{: #powerScaling .lua-content-item aria-label='Fields' }
#### vector\<number\> .powerScaling
{: aria-label='Fields' }

___
### powerScalingHackedSys
{: #powerScalingHackedSys .lua-content-item aria-label='Fields' }
#### number .powerScalingHackedSys
{: aria-label='Fields' }

___
### powerScalingNoSys
{: #powerScalingNoSys .lua-content-item aria-label='Fields' }
#### number .powerScalingNoSys
{: aria-label='Fields' }

___
### powerWhitelist
{: #powerWhitelist .lua-content-item aria-label='Fields' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerWhitelist
{: aria-label='Fields' }

___
### priority
{: #priority .lua-content-item aria-label='Fields' }
#### integer .priority
{: aria-label='Fields' }

___
### providedStatBoosts
{: #providedStatBoosts .lua-content-item aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .providedStatBoosts
{: aria-label='Fields' }

___
### realBoostId
{: #realBoostId .lua-content-item aria-label='Fields' }
#### integer .realBoostId
{: aria-label='Fields' }

___
### roomAnim
{: #roomAnim .lua-content-item aria-label='Fields' }
#### RoomAnimDef .roomAnim
{: aria-label='Fields' }

___
### savedStatBoostDefs
{: #savedStatBoostDefs .lua-content-item aria-label='Fields' }
#### unordered_map\<string, [StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .savedStatBoostDefs
{: aria-label='Fields' }

___
### shipTarget
{: #shipTarget .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.ShipTarget](../Hyperspace/StatBoostDefinition.ShipTarget) .shipTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.ShipTarget.PLAYER_SHIP`
`Hyperspace.StatBoostDefinition.ShipTarget.ENEMY_SHIP`
`Hyperspace.StatBoostDefinition.ShipTarget.CURRENT_ALL`
`Hyperspace.StatBoostDefinition.ShipTarget.CURRENT_ROOM`
`Hyperspace.StatBoostDefinition.ShipTarget.OTHER_ALL`
`Hyperspace.StatBoostDefinition.ShipTarget.ORIGINAL_SHIP`
`Hyperspace.StatBoostDefinition.ShipTarget.ORIGINAL_OTHER_SHIP`
`Hyperspace.StatBoostDefinition.ShipTarget.CREW_TARGET`
`Hyperspace.StatBoostDefinition.ShipTarget.TARGETS_ME`
`Hyperspace.StatBoostDefinition.ShipTarget.ALL`

___
### stackId
{: #stackId .lua-content-item aria-label='Fields' }
#### integer .stackId
{: aria-label='Fields' }

___
### stat
{: #stat .lua-content-item aria-label='Fields' }
#### [CrewStat](../Hyperspace/CrewStat) .stat
{: aria-label='Fields' }

___
### statBoostDefs
{: #statBoostDefs .lua-content-item aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoostDefs
{: aria-label='Fields' }

___
### stringValue
{: #stringValue .lua-content-item aria-label='Fields' }
#### string .stringValue
{: aria-label='Fields' }

___
### systemList
{: #systemList .lua-content-item aria-label='Fields' }
#### vector\<string\> .systemList
{: aria-label='Fields' }

___
### systemPowerScaling
{: #systemPowerScaling .lua-content-item aria-label='Fields' }
#### vector\<integer\> .systemPowerScaling
{: aria-label='Fields' }

___
### systemRoomReq
{: #systemRoomReq .lua-content-item aria-label='Fields' }
#### boolean .systemRoomReq
{: aria-label='Fields' }

___
### systemRoomReqs
{: #systemRoomReqs .lua-content-item aria-label='Fields' }
#### vector\<string\> .systemRoomReqs
{: aria-label='Fields' }

___
### systemRoomTarget
{: #systemRoomTarget .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.SystemRoomTarget](../Hyperspace/StatBoostDefinition.SystemRoomTarget) .systemRoomTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.SystemRoomTarget.ALL`
`Hyperspace.StatBoostDefinition.SystemRoomTarget.NONE`

___
### value
{: #value .lua-content-item aria-label='Fields' }
#### boolean .value
{: aria-label='Fields' }

___
### whiteList
{: #whiteList .lua-content-item aria-label='Fields' }
#### vector\<string\> .whiteList
{: aria-label='Fields' }

___
