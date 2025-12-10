---
layout: lua
title: DroneSystem
lang: en
---

# Class "DroneSystem"

Extends: [ShipSystem](../Hyperspace/ShipSystem)





## Methods
### DePowerDrone ()
{: aria-label='Functions' }
#### boolean :DePowerDrone ([Drone](../Hyperspace/Drone) drone, boolean unk)
{: aria-label='Functions' }

______
### RemoveDrone ()
{: aria-label='Functions' }
#### [Drone](../Hyperspace/Drone) :RemoveDrone (integer slot)
{: aria-label='Functions' }

______
### SetBonusPower ()
{: aria-label='Functions' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Functions' }

___


## Fields
### drone_count
{: aria-label='Variables' }
#### integer .drone_count
{: aria-label='Variables' }

______
### drone_start
{: aria-label='Variables' }
#### integer .drone_start
{: aria-label='Variables' }

______
### drones
{: aria-label='Variables' }
#### vector\<[Drone](../Hyperspace/Drone)\> .drones
{: aria-label='Variables' }
Vector starts at index 0 not 1.

______
### iStartingBatteryPower
{: aria-label='Variables' }
#### integer .iStartingBatteryPower
{: aria-label='Variables' }

______
### repowerList
{: aria-label='Variables' }
#### vector\<boolean\> .repowerList
{: aria-label='Variables' }
Vector starts at index 0 not 1.

______
### slot_count
{: aria-label='Variables' }
#### integer .slot_count
{: aria-label='Variables' }

______
### targetShip
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) .targetShip
{: aria-label='Variables' }

______
### userPowered
{: aria-label='Variables' }
#### vector\<boolean\> .userPowered
{: aria-label='Variables' }
Vector starts at index 0 not 1.

___
