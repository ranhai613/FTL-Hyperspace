---
layout: lua
title: DroneSystem
lang: en
---

# Class "DroneSystem"

Extends: [ShipSystem](../Hyperspace/ShipSystem)





## Methods
### DePowerDrone ()
{: aria-label='Methods' }
#### boolean :DePowerDrone ([Drone](../Hyperspace/Drone) drone, boolean unk)
{: aria-label='Methods' }

___
### RemoveDrone ()
{: aria-label='Methods' }
#### [Drone](../Hyperspace/Drone) :RemoveDrone (integer slot)
{: aria-label='Methods' }

___
### SetBonusPower ()
{: aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

___


## Fields
### drone_count
{: aria-label='Fields' }
#### integer .drone_count
{: aria-label='Fields' }

___
### drone_start
{: aria-label='Fields' }
#### integer .drone_start
{: aria-label='Fields' }

___
### drones
{: aria-label='Fields' }
#### vector\<[Drone](../Hyperspace/Drone)\> .drones
{: aria-label='Fields' }
Vector starts at index 0 not 1.

___
### iStartingBatteryPower
{: aria-label='Fields' }
#### integer .iStartingBatteryPower
{: aria-label='Fields' }

___
### repowerList
{: aria-label='Fields' }
#### vector\<boolean\> .repowerList
{: aria-label='Fields' }
Vector starts at index 0 not 1.

___
### slot_count
{: aria-label='Fields' }
#### integer .slot_count
{: aria-label='Fields' }

___
### targetShip
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .targetShip
{: aria-label='Fields' }

___
### userPowered
{: aria-label='Fields' }
#### vector\<boolean\> .userPowered
{: aria-label='Fields' }
Vector starts at index 0 not 1.

___
