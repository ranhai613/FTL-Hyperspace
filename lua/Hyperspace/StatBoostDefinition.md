---
layout: lua
title: StatBoostDefinition
lang: en
---

# Class "StatBoostDefinition"


## Constructors
### StatBoostDefinition ()
{: aria-label='Constructors' }
#### [StatBoostDefinition](../Hyperspace/StatBoostDefinition) StatBoostDefinition ()
{: aria-label='Constructors' }

___


## Constants
### StatBoostDefinition.BoostSource_AUGMENT
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostSource_CREW
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.BoostType_ADD
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostType_FLAT
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.BoostType_FLIP
{: aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.BoostType_MAX
{: aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.BoostType_MIN
{: aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.BoostType_MULT
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.BoostType_REPLACE_GROUP
{: aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.BoostType_REPLACE_POWER
{: aria-label='Constants' }
Equivalent to `8`.

___
### StatBoostDefinition.BoostType_SET
{: aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.BoostType_SET_VALUE
{: aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.CrewTarget_ALL
{: aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.CrewTarget_ALLIES
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.CrewTarget_CURRENT_ALLIES
{: aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.CrewTarget_CURRENT_ENEMIES
{: aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.CrewTarget_ENEMIES
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.CrewTarget_ORIGINAL_ALLIES
{: aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.CrewTarget_ORIGINAL_ENEMIES
{: aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.CrewTarget_SELF
{: aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.DroneTarget_ALL
{: aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.DroneTarget_CREW
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.DroneTarget_DRONES
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.ShipTarget_ALL
{: aria-label='Constants' }
Equivalent to `9`.

___
### StatBoostDefinition.ShipTarget_CREW_TARGET
{: aria-label='Constants' }
Equivalent to `7`.

___
### StatBoostDefinition.ShipTarget_CURRENT_ALL
{: aria-label='Constants' }
Equivalent to `2`.

___
### StatBoostDefinition.ShipTarget_CURRENT_ROOM
{: aria-label='Constants' }
Equivalent to `3`.

___
### StatBoostDefinition.ShipTarget_ENEMY_SHIP
{: aria-label='Constants' }
Equivalent to `1`.

___
### StatBoostDefinition.ShipTarget_ORIGINAL_OTHER_SHIP
{: aria-label='Constants' }
Equivalent to `6`.

___
### StatBoostDefinition.ShipTarget_ORIGINAL_SHIP
{: aria-label='Constants' }
Equivalent to `5`.

___
### StatBoostDefinition.ShipTarget_OTHER_ALL
{: aria-label='Constants' }
Equivalent to `4`.

___
### StatBoostDefinition.ShipTarget_PLAYER_SHIP
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.ShipTarget_TARGETS_ME
{: aria-label='Constants' }
Equivalent to `8`.

___
### StatBoostDefinition.SystemRoomTarget_ALL
{: aria-label='Constants' }
Equivalent to `0`.

___
### StatBoostDefinition.SystemRoomTarget_NONE
{: aria-label='Constants' }
Equivalent to `1`.

___



## Methods
### GiveId ()
{: aria-label='Methods' }
#### void :GiveId ()
{: aria-label='Methods' }

___
### IsTargetPower ()
{: aria-label='Methods' }
#### boolean :IsTargetPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) power)
{: aria-label='Methods' }

___
### IsTargetPower ()
{: aria-label='Methods' }
#### boolean :IsTargetPower ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) power)
{: aria-label='Methods' }

___
### TestRoomStatBoostSystem ()
{: aria-label='Methods' }
#### boolean :TestRoomStatBoostSystem ([ShipManager](../Hyperspace/ShipManager) ship, integer room)
{: aria-label='Methods' }

___


## Fields
### affectsSelf
{: aria-label='Fields' }
#### boolean .affectsSelf
{: aria-label='Fields' }

___
### amount
{: aria-label='Fields' }
#### number .amount
{: aria-label='Fields' }

___
### blackList
{: aria-label='Fields' }
#### vector\<string\> .blackList
{: aria-label='Fields' }

___
### boostAnim
{: aria-label='Fields' }
#### string .boostAnim
{: aria-label='Fields' }

___
### boostSource
{: aria-label='Fields' }
#### [StatBoostDefinition.BoostSource](../Hyperspace/StatBoostDefinition.BoostSource) .boostSource
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.BoostSource.CREW`
`Hyperspace.StatBoostDefinition.BoostSource.AUGMENT`

___
### boostType
{: aria-label='Fields' }
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
{: aria-label='Fields' }
#### boolean .cloneClear
{: aria-label='Fields' }

___
### crewTarget
{: aria-label='Fields' }
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
{: aria-label='Fields' }
#### number .dangerRating
{: aria-label='Fields' }

___
### deathEffectChange
{: aria-label='Fields' }
#### ExplosionDefinition .deathEffectChange
{: aria-label='Fields' }

___
### droneTarget
{: aria-label='Fields' }
#### [StatBoostDefinition.DroneTarget](../Hyperspace/StatBoostDefinition.DroneTarget) .droneTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.DroneTarget.DRONES`
`Hyperspace.StatBoostDefinition.DroneTarget.CREW`
`Hyperspace.StatBoostDefinition.DroneTarget.ALL`

___
### duration
{: aria-label='Fields' }
#### number .duration
{: aria-label='Fields' }

___
### extraConditions
{: aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraConditions
{: aria-label='Fields' }

___
### extraConditionsReq
{: aria-label='Fields' }
#### boolean .extraConditionsReq
{: aria-label='Fields' }

___
### extraOrConditions
{: aria-label='Fields' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraOrConditions
{: aria-label='Fields' }

___
### fireCount
{: aria-label='Fields' }
#### pair\<integer, integer\> .fireCount
{: aria-label='Fields' }

___
### functionalTarget
{: aria-label='Fields' }
#### boolean .functionalTarget
{: aria-label='Fields' }

___
### hasPowerList
{: aria-label='Fields' }
#### boolean .hasPowerList
{: aria-label='Fields' }

___
### healthFractionReq
{: aria-label='Fields' }
#### pair\<number, number\> .healthFractionReq
{: aria-label='Fields' }

___
### healthReq
{: aria-label='Fields' }
#### pair\<number, number\> .healthReq
{: aria-label='Fields' }

___
### isBool
{: aria-label='Fields' }
#### boolean .isBool
{: aria-label='Fields' }

___
### isRoomBased
{: aria-label='Fields' }
#### boolean .isRoomBased
{: aria-label='Fields' }

___
### jumpClear
{: aria-label='Fields' }
#### boolean .jumpClear
{: aria-label='Fields' }

___
### maxStacks
{: aria-label='Fields' }
#### integer .maxStacks
{: aria-label='Fields' }

___
### oxygenReq
{: aria-label='Fields' }
#### pair\<number, number\> .oxygenReq
{: aria-label='Fields' }

___
### powerBlacklist
{: aria-label='Fields' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerBlacklist
{: aria-label='Fields' }

___
### powerChange
{: aria-label='Fields' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .powerChange
{: aria-label='Fields' }

___
### powerGroupBlacklist
{: aria-label='Fields' }
#### unordered_set\<uint\> .powerGroupBlacklist
{: aria-label='Fields' }

___
### powerGroupWhitelist
{: aria-label='Fields' }
#### unordered_set\<uint\> .powerGroupWhitelist
{: aria-label='Fields' }

___
### powerResourceBlacklist
{: aria-label='Fields' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceBlacklist
{: aria-label='Fields' }

___
### powerResourceWhitelist
{: aria-label='Fields' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceWhitelist
{: aria-label='Fields' }

___
### powerScaling
{: aria-label='Fields' }
#### vector\<number\> .powerScaling
{: aria-label='Fields' }

___
### powerScalingHackedSys
{: aria-label='Fields' }
#### number .powerScalingHackedSys
{: aria-label='Fields' }

___
### powerScalingNoSys
{: aria-label='Fields' }
#### number .powerScalingNoSys
{: aria-label='Fields' }

___
### powerWhitelist
{: aria-label='Fields' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerWhitelist
{: aria-label='Fields' }

___
### priority
{: aria-label='Fields' }
#### integer .priority
{: aria-label='Fields' }

___
### providedStatBoosts
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .providedStatBoosts
{: aria-label='Fields' }

___
### realBoostId
{: aria-label='Fields' }
#### integer .realBoostId
{: aria-label='Fields' }

___
### roomAnim
{: aria-label='Fields' }
#### RoomAnimDef .roomAnim
{: aria-label='Fields' }

___
### savedStatBoostDefs
{: aria-label='Fields' }
#### unordered_map\<string, [StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .savedStatBoostDefs
{: aria-label='Fields' }

___
### shipTarget
{: aria-label='Fields' }
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
{: aria-label='Fields' }
#### integer .stackId
{: aria-label='Fields' }

___
### stat
{: aria-label='Fields' }
#### [CrewStat](../Hyperspace/CrewStat) .stat
{: aria-label='Fields' }

___
### statBoostDefs
{: aria-label='Fields' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoostDefs
{: aria-label='Fields' }

___
### stringValue
{: aria-label='Fields' }
#### string .stringValue
{: aria-label='Fields' }

___
### systemList
{: aria-label='Fields' }
#### vector\<string\> .systemList
{: aria-label='Fields' }

___
### systemPowerScaling
{: aria-label='Fields' }
#### vector\<integer\> .systemPowerScaling
{: aria-label='Fields' }

___
### systemRoomReq
{: aria-label='Fields' }
#### boolean .systemRoomReq
{: aria-label='Fields' }

___
### systemRoomReqs
{: aria-label='Fields' }
#### vector\<string\> .systemRoomReqs
{: aria-label='Fields' }

___
### systemRoomTarget
{: aria-label='Fields' }
#### [StatBoostDefinition.SystemRoomTarget](../Hyperspace/StatBoostDefinition.SystemRoomTarget) .systemRoomTarget
{: aria-label='Fields' }
Valid values:
`Hyperspace.StatBoostDefinition.SystemRoomTarget.ALL`
`Hyperspace.StatBoostDefinition.SystemRoomTarget.NONE`

___
### value
{: aria-label='Fields' }
#### boolean .value
{: aria-label='Fields' }

___
### whiteList
{: aria-label='Fields' }
#### vector\<string\> .whiteList
{: aria-label='Fields' }

___
