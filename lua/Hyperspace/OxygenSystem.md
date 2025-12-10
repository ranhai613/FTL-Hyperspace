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
{: aria-label='Functions' }
#### void :EmptyOxygen (integer roomId)
{: aria-label='Functions' }

______
### GetRefillSpeed ()
{: aria-label='Functions' }
#### number :GetRefillSpeed ()
{: aria-label='Functions' }

______
### ModifyRoomOxygen ()
{: aria-label='Functions' }
#### void :ModifyRoomOxygen (integer roomId, number value)
{: aria-label='Functions' }

___


## Fields
### bLeakingO2 (Read-only)
{: aria-label='Variables' }
#### boolean .bLeakingO2
{: aria-label='Variables' }

______
### fTotalOxygen
{: aria-label='Variables' }
#### number .fTotalOxygen
{: aria-label='Variables' }

______
### leakModifier (Read-only)
{: aria-label='Variables' }
#### number .leakModifier
{: aria-label='Variables' }
**Read-only**
A multiplier to the rate at which airlocks and breaches drain oxygen.
Can be changed with `CALCULATE_LEAK_MODIFIER` callback.

______
### max_oxygen
{: aria-label='Variables' }
#### number .max_oxygen
{: aria-label='Variables' }

______
### oxygenLevels
{: aria-label='Variables' }
#### vector\<number\> .oxygenLevels
{: aria-label='Variables' }

___
