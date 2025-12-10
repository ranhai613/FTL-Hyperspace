---
layout: lua
title: CrewMember_Extend
lang: en
---

# Class "CrewMember_Extend"


## Constructors
### CrewMember_Extend ()
{: aria-label='Constructors' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) CrewMember_Extend ()
{: aria-label='Constructors' }

___




## Methods
### CalculateStat ()
{: aria-label='Functions' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, [CrewDefinition](../Hyperspace/CrewDefinition) def, boolean boolValue=nullptr)
{: aria-label='Functions' }

______
### CalculateStat ()
{: aria-label='Functions' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, boolean boolValue=nullptr)
{: aria-label='Functions' }
Returns the current `float` and `bool` value for the given `CrewStat`.

______
### GetDefinition ()
{: aria-label='Functions' }
#### [CrewDefinition](../Hyperspace/CrewDefinition) :GetDefinition ()
{: aria-label='Functions' }

______
### InitiateTeleport ()
{: aria-label='Functions' }
#### void :InitiateTeleport (integer shipId, integer roomId=-1, integer slotId=-1)
{: aria-label='Functions' }

___


## Fields
### canPhaseThroughDoors
{: aria-label='Variables' }
#### boolean .canPhaseThroughDoors
{: aria-label='Variables' }

______
### crewPowers (Read-only)
{: aria-label='Variables' }
#### vector\<[ActivatedPower](../Hyperspace/ActivatedPower)\> .crewPowers
{: aria-label='Variables' }
**read-only**

______
### customTele
{: aria-label='Variables' }
#### [CustomTeleport](../Hyperspace/CustomTeleport) .customTele
{: aria-label='Variables' }

______
### deathTimer
{: aria-label='Variables' }
#### [TimerHelper](../Hyperspace/TimerHelper) .deathTimer
{: aria-label='Variables' }

______
### exploded
{: aria-label='Variables' }
#### boolean .exploded
{: aria-label='Variables' }

______
### hasSpecialPower
{: aria-label='Variables' }
#### boolean .hasSpecialPower
{: aria-label='Variables' }

______
### isHealing
{: aria-label='Variables' }
#### boolean .isHealing
{: aria-label='Variables' }

______
### lastRoom
{: aria-label='Variables' }
#### integer .lastRoom
{: aria-label='Variables' }

______
### lastShipId
{: aria-label='Variables' }
#### integer .lastShipId
{: aria-label='Variables' }

______
### noClone
{: aria-label='Variables' }
#### boolean .noClone
{: aria-label='Variables' }

______
### noSlot
{: aria-label='Variables' }
#### boolean .noSlot
{: aria-label='Variables' }

______
### orig (Read-only)
{: aria-label='Variables' }
#### [CrewMember](../Hyperspace/CrewMember) .orig
{: aria-label='Variables' }
**read-only**

______
### passiveHealTimer
{: aria-label='Variables' }
#### [TimerHelper](../Hyperspace/TimerHelper) .passiveHealTimer
{: aria-label='Variables' }

______
### powerChange
{: aria-label='Variables' }
#### vector\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerChange
{: aria-label='Variables' }

______
### powerResourceMap (Read-only)
{: aria-label='Variables' }
#### unordered_map\<uint, [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResourceMap
{: aria-label='Variables' }
**read-only**

______
### powerResources (Read-only)
{: aria-label='Variables' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Variables' }
**read-only**

______
### selfId (Read-only)
{: aria-label='Variables' }
#### integer .selfId
{: aria-label='Variables' }
**read-only**

______
### transformRace
{: aria-label='Variables' }
#### string .transformRace
{: aria-label='Variables' }
Can be set within a CalculateStat callback to transform a crew to a different race.

______
### triggerExplosion
{: aria-label='Variables' }
#### boolean .triggerExplosion
{: aria-label='Variables' }

___
