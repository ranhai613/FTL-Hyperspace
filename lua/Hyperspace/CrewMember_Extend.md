---
layout: lua
title: CrewMember_Extend
lang: en
category: Class
---

# Class "CrewMember_Extend"


## Constructors
{: #Constructors .lua-content-section}
### CrewMember_Extend ()
{: #CrewMember_Extend .lua-content-item aria-label='Constructors' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) CrewMember_Extend ()
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### CalculateStat ()
{: #CalculateStat .lua-content-item aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, [CrewDefinition](../Hyperspace/CrewDefinition) def, boolean boolValue=nullptr)
{: aria-label='Methods' }

___
### CalculateStat ()
{: #CalculateStat .lua-content-item aria-label='Methods' }
#### number :CalculateStat ([CrewStat](../Hyperspace/CrewStat) stat, boolean boolValue=nullptr)
{: aria-label='Methods' }
Returns the current `float` and `bool` value for the given `CrewStat`.

___
### GetDefinition ()
{: #GetDefinition .lua-content-item aria-label='Methods' }
#### [CrewDefinition](../Hyperspace/CrewDefinition) :GetDefinition ()
{: aria-label='Methods' }

___
### InitiateTeleport ()
{: #InitiateTeleport .lua-content-item aria-label='Methods' }
#### void :InitiateTeleport (integer shipId, integer roomId=-1, integer slotId=-1)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### canPhaseThroughDoors
{: #canPhaseThroughDoors .lua-content-item aria-label='Fields' }
#### boolean .canPhaseThroughDoors
{: aria-label='Fields' }

___
### crewPowers (Read-only)
{: #crewPowers .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPower](../Hyperspace/ActivatedPower)\> .crewPowers
{: aria-label='Fields' }
**read-only**

___
### customTele
{: #customTele .lua-content-item aria-label='Fields' }
#### [CustomTeleport](../Hyperspace/CustomTeleport) .customTele
{: aria-label='Fields' }

___
### deathTimer
{: #deathTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .deathTimer
{: aria-label='Fields' }

___
### exploded
{: #exploded .lua-content-item aria-label='Fields' }
#### boolean .exploded
{: aria-label='Fields' }

___
### hasSpecialPower
{: #hasSpecialPower .lua-content-item aria-label='Fields' }
#### boolean .hasSpecialPower
{: aria-label='Fields' }

___
### isHealing
{: #isHealing .lua-content-item aria-label='Fields' }
#### boolean .isHealing
{: aria-label='Fields' }

___
### lastRoom
{: #lastRoom .lua-content-item aria-label='Fields' }
#### integer .lastRoom
{: aria-label='Fields' }

___
### lastShipId
{: #lastShipId .lua-content-item aria-label='Fields' }
#### integer .lastShipId
{: aria-label='Fields' }

___
### noClone
{: #noClone .lua-content-item aria-label='Fields' }
#### boolean .noClone
{: aria-label='Fields' }

___
### noSlot
{: #noSlot .lua-content-item aria-label='Fields' }
#### boolean .noSlot
{: aria-label='Fields' }

___
### orig (Read-only)
{: #orig .lua-content-item aria-label='Fields' }
#### [CrewMember](../Hyperspace/CrewMember) .orig
{: aria-label='Fields' }
**read-only**

___
### passiveHealTimer
{: #passiveHealTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .passiveHealTimer
{: aria-label='Fields' }

___
### powerChange
{: #powerChange .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPowerDefinition](../Hyperspace/ActivatedPowerDefinition)\> .powerChange
{: aria-label='Fields' }

___
### powerResourceMap (Read-only)
{: #powerResourceMap .lua-content-item aria-label='Fields' }
#### unordered_map\<uint, [ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResourceMap
{: aria-label='Fields' }
**read-only**

___
### powerResources (Read-only)
{: #powerResources .lua-content-item aria-label='Fields' }
#### vector\<[ActivatedPowerResource](../Hyperspace/ActivatedPowerResource)\> .powerResources
{: aria-label='Fields' }
**read-only**

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### integer .selfId
{: aria-label='Fields' }
**read-only**

___
### transformRace
{: #transformRace .lua-content-item aria-label='Fields' }
#### string .transformRace
{: aria-label='Fields' }
Can be set within a CalculateStat callback to transform a crew to a different race.

___
### triggerExplosion
{: #triggerExplosion .lua-content-item aria-label='Fields' }
#### boolean .triggerExplosion
{: aria-label='Fields' }

___
