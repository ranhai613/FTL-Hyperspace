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

______
### StatBoostDefinition.BoostSource_CREW
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.BoostType_ADD
{: aria-label='Constants' }
Equivalent to `1`.

______
### StatBoostDefinition.BoostType_FLAT
{: aria-label='Constants' }
Equivalent to `1`.

______
### StatBoostDefinition.BoostType_FLIP
{: aria-label='Constants' }
Equivalent to `3`.

______
### StatBoostDefinition.BoostType_MAX
{: aria-label='Constants' }
Equivalent to `6`.

______
### StatBoostDefinition.BoostType_MIN
{: aria-label='Constants' }
Equivalent to `5`.

______
### StatBoostDefinition.BoostType_MULT
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.BoostType_REPLACE_GROUP
{: aria-label='Constants' }
Equivalent to `7`.

______
### StatBoostDefinition.BoostType_REPLACE_POWER
{: aria-label='Constants' }
Equivalent to `8`.

______
### StatBoostDefinition.BoostType_SET
{: aria-label='Constants' }
Equivalent to `2`.

______
### StatBoostDefinition.BoostType_SET_VALUE
{: aria-label='Constants' }
Equivalent to `4`.

______
### StatBoostDefinition.CrewTarget_ALL
{: aria-label='Constants' }
Equivalent to `3`.

______
### StatBoostDefinition.CrewTarget_ALLIES
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.CrewTarget_CURRENT_ALLIES
{: aria-label='Constants' }
Equivalent to `4`.

______
### StatBoostDefinition.CrewTarget_CURRENT_ENEMIES
{: aria-label='Constants' }
Equivalent to `5`.

______
### StatBoostDefinition.CrewTarget_ENEMIES
{: aria-label='Constants' }
Equivalent to `1`.

______
### StatBoostDefinition.CrewTarget_ORIGINAL_ALLIES
{: aria-label='Constants' }
Equivalent to `6`.

______
### StatBoostDefinition.CrewTarget_ORIGINAL_ENEMIES
{: aria-label='Constants' }
Equivalent to `7`.

______
### StatBoostDefinition.CrewTarget_SELF
{: aria-label='Constants' }
Equivalent to `2`.

______
### StatBoostDefinition.DroneTarget_ALL
{: aria-label='Constants' }
Equivalent to `2`.

______
### StatBoostDefinition.DroneTarget_CREW
{: aria-label='Constants' }
Equivalent to `1`.

______
### StatBoostDefinition.DroneTarget_DRONES
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.ShipTarget_ALL
{: aria-label='Constants' }
Equivalent to `9`.

______
### StatBoostDefinition.ShipTarget_CREW_TARGET
{: aria-label='Constants' }
Equivalent to `7`.

______
### StatBoostDefinition.ShipTarget_CURRENT_ALL
{: aria-label='Constants' }
Equivalent to `2`.

______
### StatBoostDefinition.ShipTarget_CURRENT_ROOM
{: aria-label='Constants' }
Equivalent to `3`.

______
### StatBoostDefinition.ShipTarget_ENEMY_SHIP
{: aria-label='Constants' }
Equivalent to `1`.

______
### StatBoostDefinition.ShipTarget_ORIGINAL_OTHER_SHIP
{: aria-label='Constants' }
Equivalent to `6`.

______
### StatBoostDefinition.ShipTarget_ORIGINAL_SHIP
{: aria-label='Constants' }
Equivalent to `5`.

______
### StatBoostDefinition.ShipTarget_OTHER_ALL
{: aria-label='Constants' }
Equivalent to `4`.

______
### StatBoostDefinition.ShipTarget_PLAYER_SHIP
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.ShipTarget_TARGETS_ME
{: aria-label='Constants' }
Equivalent to `8`.

______
### StatBoostDefinition.SystemRoomTarget_ALL
{: aria-label='Constants' }
Equivalent to `0`.

______
### StatBoostDefinition.SystemRoomTarget_NONE
{: aria-label='Constants' }
Equivalent to `1`.

___



## Methods
### GiveId ()
{: aria-label='Functions' }
#### void :GiveId ()
{: aria-label='Functions' }

______
### IsTargetPower ()
{: aria-label='Functions' }
#### boolean :IsTargetPower ([ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) power)
{: aria-label='Functions' }

______
### IsTargetPower ()
{: aria-label='Functions' }
#### boolean :IsTargetPower ([PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) power)
{: aria-label='Functions' }

______
### TestRoomStatBoostSystem ()
{: aria-label='Functions' }
#### boolean :TestRoomStatBoostSystem ([ShipManager](../Hyperspace/ShipManager) ship, integer room)
{: aria-label='Functions' }

___


## Fields
### affectsSelf
{: aria-label='Variables' }
#### boolean .affectsSelf
{: aria-label='Variables' }

______
### amount
{: aria-label='Variables' }
#### number .amount
{: aria-label='Variables' }

______
### blackList
{: aria-label='Variables' }
#### vector\<string\> .blackList
{: aria-label='Variables' }

______
### boostAnim
{: aria-label='Variables' }
#### string .boostAnim
{: aria-label='Variables' }

______
### boostSource
{: aria-label='Variables' }
#### [StatBoostDefinition.BoostSource](../Hyperspace/StatBoostDefinition.BoostSource) .boostSource
{: aria-label='Variables' }
Valid values:
`Hyperspace.StatBoostDefinition.BoostSource.CREW`
`Hyperspace.StatBoostDefinition.BoostSource.AUGMENT`

______
### boostType
{: aria-label='Variables' }
#### [StatBoostDefinition.BoostType](../Hyperspace/StatBoostDefinition.BoostType) .boostType
{: aria-label='Variables' }
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

______
### cloneClear
{: aria-label='Variables' }
#### boolean .cloneClear
{: aria-label='Variables' }

______
### crewTarget
{: aria-label='Variables' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Variables' }
Valid values:
`Hyperspace.StatBoostDefinition.CrewTarget.ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ENEMIES`
`Hyperspace.StatBoostDefinition.CrewTarget.SELF`
`Hyperspace.StatBoostDefinition.CrewTarget.ALL`
`Hyperspace.StatBoostDefinition.CrewTarget.CURRENT_ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.CURRENT_ENEMIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ORIGINAL_ALLIES`
`Hyperspace.StatBoostDefinition.CrewTarget.ORIGINAL_ENEMIES`

______
### dangerRating
{: aria-label='Variables' }
#### number .dangerRating
{: aria-label='Variables' }

______
### deathEffectChange
{: aria-label='Variables' }
#### ExplosionDefinition .deathEffectChange
{: aria-label='Variables' }

______
### droneTarget
{: aria-label='Variables' }
#### [StatBoostDefinition.DroneTarget](../Hyperspace/StatBoostDefinition.DroneTarget) .droneTarget
{: aria-label='Variables' }
Valid values:
`Hyperspace.StatBoostDefinition.DroneTarget.DRONES`
`Hyperspace.StatBoostDefinition.DroneTarget.CREW`
`Hyperspace.StatBoostDefinition.DroneTarget.ALL`

______
### duration
{: aria-label='Variables' }
#### number .duration
{: aria-label='Variables' }

______
### extraConditions
{: aria-label='Variables' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraConditions
{: aria-label='Variables' }

______
### extraConditionsReq
{: aria-label='Variables' }
#### boolean .extraConditionsReq
{: aria-label='Variables' }

______
### extraOrConditions
{: aria-label='Variables' }
#### vector\<[CrewExtraCondition](../pair<Hyperspace/CrewExtraCondition), boolean>\> .extraOrConditions
{: aria-label='Variables' }

______
### fireCount
{: aria-label='Variables' }
#### pair\<integer, integer\> .fireCount
{: aria-label='Variables' }

______
### functionalTarget
{: aria-label='Variables' }
#### boolean .functionalTarget
{: aria-label='Variables' }

______
### hasPowerList
{: aria-label='Variables' }
#### boolean .hasPowerList
{: aria-label='Variables' }

______
### healthFractionReq
{: aria-label='Variables' }
#### pair\<number, number\> .healthFractionReq
{: aria-label='Variables' }

______
### healthReq
{: aria-label='Variables' }
#### pair\<number, number\> .healthReq
{: aria-label='Variables' }

______
### isBool
{: aria-label='Variables' }
#### boolean .isBool
{: aria-label='Variables' }

______
### isRoomBased
{: aria-label='Variables' }
#### boolean .isRoomBased
{: aria-label='Variables' }

______
### jumpClear
{: aria-label='Variables' }
#### boolean .jumpClear
{: aria-label='Variables' }

______
### maxStacks
{: aria-label='Variables' }
#### integer .maxStacks
{: aria-label='Variables' }

______
### oxygenReq
{: aria-label='Variables' }
#### pair\<number, number\> .oxygenReq
{: aria-label='Variables' }

______
### powerBlacklist
{: aria-label='Variables' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerBlacklist
{: aria-label='Variables' }

______
### powerChange
{: aria-label='Variables' }
#### [ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition) .powerChange
{: aria-label='Variables' }

______
### powerGroupBlacklist
{: aria-label='Variables' }
#### unordered_set\<uint\> .powerGroupBlacklist
{: aria-label='Variables' }

______
### powerGroupWhitelist
{: aria-label='Variables' }
#### unordered_set\<uint\> .powerGroupWhitelist
{: aria-label='Variables' }

______
### powerResourceBlacklist
{: aria-label='Variables' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceBlacklist
{: aria-label='Variables' }

______
### powerResourceWhitelist
{: aria-label='Variables' }
#### unordered_set\<[PowerResourceDefinition](../Hyperspace/PowerResourceDefinition)\> .powerResourceWhitelist
{: aria-label='Variables' }

______
### powerScaling
{: aria-label='Variables' }
#### vector\<number\> .powerScaling
{: aria-label='Variables' }

______
### powerScalingHackedSys
{: aria-label='Variables' }
#### number .powerScalingHackedSys
{: aria-label='Variables' }

______
### powerScalingNoSys
{: aria-label='Variables' }
#### number .powerScalingNoSys
{: aria-label='Variables' }

______
### powerWhitelist
{: aria-label='Variables' }
#### unordered_set\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerWhitelist
{: aria-label='Variables' }

______
### priority
{: aria-label='Variables' }
#### integer .priority
{: aria-label='Variables' }

______
### providedStatBoosts
{: aria-label='Variables' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .providedStatBoosts
{: aria-label='Variables' }

______
### realBoostId
{: aria-label='Variables' }
#### integer .realBoostId
{: aria-label='Variables' }

______
### roomAnim
{: aria-label='Variables' }
#### RoomAnimDef .roomAnim
{: aria-label='Variables' }

______
### shipTarget
{: aria-label='Variables' }
#### [StatBoostDefinition.ShipTarget](../Hyperspace/StatBoostDefinition.ShipTarget) .shipTarget
{: aria-label='Variables' }
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

______
### stackId
{: aria-label='Variables' }
#### integer .stackId
{: aria-label='Variables' }

______
### stat
{: aria-label='Variables' }
#### [CrewStat](../Hyperspace/CrewStat) .stat
{: aria-label='Variables' }

______
### stringValue
{: aria-label='Variables' }
#### string .stringValue
{: aria-label='Variables' }

______
### systemList
{: aria-label='Variables' }
#### vector\<string\> .systemList
{: aria-label='Variables' }

______
### systemPowerScaling
{: aria-label='Variables' }
#### vector\<integer\> .systemPowerScaling
{: aria-label='Variables' }

______
### systemRoomReq
{: aria-label='Variables' }
#### boolean .systemRoomReq
{: aria-label='Variables' }

______
### systemRoomReqs
{: aria-label='Variables' }
#### vector\<string\> .systemRoomReqs
{: aria-label='Variables' }

______
### systemRoomTarget
{: aria-label='Variables' }
#### [StatBoostDefinition.SystemRoomTarget](../Hyperspace/StatBoostDefinition.SystemRoomTarget) .systemRoomTarget
{: aria-label='Variables' }
Valid values:
`Hyperspace.StatBoostDefinition.SystemRoomTarget.ALL`
`Hyperspace.StatBoostDefinition.SystemRoomTarget.NONE`

______
### value
{: aria-label='Variables' }
#### boolean .value
{: aria-label='Variables' }

______
### whiteList
{: aria-label='Variables' }
#### vector\<string\> .whiteList
{: aria-label='Variables' }

___### savedStatBoostDefs
{: aria-label='Variables' }
#### unordered_map\<string, [StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .savedStatBoostDefs
{: aria-label='Variables' }

______
### statBoostDefs
{: aria-label='Variables' }
#### vector\<[StatBoostDefinition](../Hyperspace/StatBoostDefinition)\> .statBoostDefs
{: aria-label='Variables' }

___
