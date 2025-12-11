---
layout: lua
title: CrewMember_Extend
lang: en
---

# Class "CrewMember_Extend"


## Constructors
{: #Constructors .section}
### CrewMember_Extend ()
{: #CrewMember_Extend aria-label='Constructors' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) CrewMember_Extend ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
### CalculateStat ()
{: #CalculateStat aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, [CrewDefinition](../Hyperspace/CrewDefinition) def, boolean boolValue=nullptr)
{: aria-label='Methods' }

___
### CalculateStat ()
{: #CalculateStat aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, boolean boolValue=nullptr)
{: aria-label='Methods' }
Returns the current `float` and `bool` value for the given `CrewStat`.

___
### GetDefinition ()
{: #GetDefinition aria-label='Methods' }
#### [CrewDefinition](../Hyperspace/CrewDefinition) :GetDefinition ()
{: aria-label='Methods' }

___
### InitiateTeleport ()
{: #InitiateTeleport aria-label='Methods' }
#### void :InitiateTeleport (integer shipId, integer roomId=-1, integer slotId=-1)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### canPhaseThroughDoors
{: #canPhaseThroughDoors aria-label='Fields' }
#### boolean .canPhaseThroughDoors
{: aria-label='Fields' }

___
### crewPowers (Read-only)
{: #crewPowers aria-label='Fields' }
#### vector\<[ActivatedPower](../Hyperspace/ActivatedPower)\> .crewPowers
{: aria-label='Fields' }
**read-only**

___
### customTele
{: #customTele aria-label='Fields' }
#### [CustomTeleport](../Hyperspace/CustomTeleport) .customTele
{: aria-label='Fields' }

___
### deathTimer
{: #deathTimer aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .deathTimer
{: aria-label='Fields' }

___
### exploded
{: #exploded aria-label='Fields' }
#### boolean .exploded
{: aria-label='Fields' }

___
### hasSpecialPower
{: #hasSpecialPower aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

___
### isHealing
{: #isHealing aria-label='Fields' }
#### boolean .isHealing
{: aria-label='Fields' }

___
### lastRoom
{: #lastRoom aria-label='Fields' }
#### integer .lastRoom
{: aria-label='Fields' }

___
### lastShipId
{: #lastShipId aria-label='Fields' }
#### integer .lastShipId
{: aria-label='Fields' }

___
### noClone
{: #noClone aria-label='Fields' }
#### boolean .noClone
{: aria-label='Fields' }

___
### noSlot
{: #noSlot aria-label='Fields' }
#### boolean .noSlot
{: aria-label='Fields' }

___
### orig (Read-only)
{: #orig aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .orig
{: aria-label='Fields' }
**read-only**

___
### passiveHealTimer
{: #passiveHealTimer aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .passiveHealTimer
{: aria-label='Fields' }

___
### powerChange
{: #powerChange aria-label='Fields' }
#### vector\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerChange
{: aria-label='Fields' }

___
### powerResourceMap (Read-only)
{: #powerResourceMap aria-label='Fields' }
#### unordered_map\<uint, [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResourceMap
{: aria-label='Fields' }
**read-only**

___
### powerResources (Read-only)
{: #powerResources aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }
**read-only**

___
### selfId (Read-only)
{: #selfId aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }
**read-only**

___
### transformRace
{: #transformRace aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }
Can be set within a CalculateStat callback to transform a crew to a different race.

___
### triggerExplosion
{: #triggerExplosion aria-label='Fields' }
#### boolean .triggerExplosion
{: aria-label='Fields' }

___
