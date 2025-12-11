---
layout: lua
title: WeaponSystem
lang: en
---

# Class "WeaponSystem"

Extends: [ShipSystem](../Hyperspace/ShipSystem)





## Methods
### ForceIncreasePower ()
{: aria-label='Methods' }
#### boolean :ForceIncreasePower (integer amount)
{: aria-label='Methods' }

______
### RemoveWeapon ()
{: aria-label='Methods' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) :RemoveWeapon (integer slot)
{: aria-label='Methods' }

______
### SetBonusPower ()
{: aria-label='Methods' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Methods' }

___


## Fields
### iStartingBatteryPower
{: aria-label='Fields' }
#### integer .iStartingBatteryPower
{: aria-label='Fields' }

______
### missile_count
{: aria-label='Fields' }
#### integer .missile_count
{: aria-label='Fields' }

______
### missile_start
{: aria-label='Fields' }
#### integer .missile_start
{: aria-label='Fields' }

______
### repowerList
{: aria-label='Fields' }
#### vector\<boolean\> .repowerList
{: aria-label='Fields' }

______
### shot_count
{: aria-label='Fields' }
#### integer .shot_count
{: aria-label='Fields' }

______
### shot_timer
{: aria-label='Fields' }
#### number .shot_timer
{: aria-label='Fields' }

______
### slot_count
{: aria-label='Fields' }
#### integer .slot_count
{: aria-label='Fields' }

______
### target
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

______
### userPowered
{: aria-label='Fields' }
#### vector\<boolean\> .userPowered
{: aria-label='Fields' }

______
### weapons
{: aria-label='Fields' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weapons
{: aria-label='Fields' }

______
### weaponsTrashList
{: aria-label='Fields' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weaponsTrashList
{: aria-label='Fields' }

___
