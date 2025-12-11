---
layout: lua
title: OxygenSystem
lang: en
---

# Class "OxygenSystem"

Extends: [ShipSystem](../Hyperspace/ShipSystem)


## Constructors
### OxygenSystem ()
{: aria-label='Constructors' }
#### [OxygenSystem](../Hyperspace/OxygenSystem) OxygenSystem (integer numRooms, integer roomId, integer shipId, integer startingPower)
{: aria-label='Constructors' }

___




## Methods
### EmptyOxygen ()
{: aria-label='Methods' }
#### void :EmptyOxygen (integer roomId)
{: aria-label='Methods' }

______
### GetRefillSpeed ()
{: aria-label='Methods' }
#### number :GetRefillSpeed ()
{: aria-label='Methods' }

______
### ModifyRoomOxygen ()
{: aria-label='Methods' }
#### void :ModifyRoomOxygen (integer roomId, number value)
{: aria-label='Methods' }

___


## Fields
### bLeakingO2 (Read-only)
{: aria-label='Fields' }
#### boolean .bLeakingO2
{: aria-label='Fields' }

______
### fTotalOxygen
{: aria-label='Fields' }
#### number .fTotalOxygen
{: aria-label='Fields' }

______
### leakModifier (Read-only)
{: aria-label='Fields' }
#### number .leakModifier
{: aria-label='Fields' }
**Read-only**
A multiplier to the rate at which airlocks and breaches drain oxygen.
Can be changed with `CALCULATE_LEAK_MODIFIER` callback.

______
### max_oxygen
{: aria-label='Fields' }
#### number .max_oxygen
{: aria-label='Fields' }

______
### oxygenLevels
{: aria-label='Fields' }
#### vector\<number\> .oxygenLevels
{: aria-label='Fields' }

___
