---
layout: lua
title: WeaponSystem
lang: en
---

# Class "WeaponSystem"

Extends: [ShipSystem](../Hyperspace/ShipSystem)





## Methods
### ForceIncreasePower ()
{: aria-label='Functions' }
#### boolean :ForceIncreasePower (integer amount)
{: aria-label='Functions' }

______
### RemoveWeapon ()
{: aria-label='Functions' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) :RemoveWeapon (integer slot)
{: aria-label='Functions' }

______
### SetBonusPower ()
{: aria-label='Functions' }
#### void :SetBonusPower (integer amount, integer permanentPower)
{: aria-label='Functions' }

___


## Fields
### iStartingBatteryPower
{: aria-label='Variables' }
#### integer .iStartingBatteryPower
{: aria-label='Variables' }

______
### missile_count
{: aria-label='Variables' }
#### integer .missile_count
{: aria-label='Variables' }

______
### missile_start
{: aria-label='Variables' }
#### integer .missile_start
{: aria-label='Variables' }

______
### repowerList
{: aria-label='Variables' }
#### vector\<boolean\> .repowerList
{: aria-label='Variables' }

______
### shot_count
{: aria-label='Variables' }
#### integer .shot_count
{: aria-label='Variables' }

______
### shot_timer
{: aria-label='Variables' }
#### number .shot_timer
{: aria-label='Variables' }

______
### slot_count
{: aria-label='Variables' }
#### integer .slot_count
{: aria-label='Variables' }

______
### target
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Variables' }

______
### userPowered
{: aria-label='Variables' }
#### vector\<boolean\> .userPowered
{: aria-label='Variables' }

______
### weapons
{: aria-label='Variables' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weapons
{: aria-label='Variables' }

______
### weaponsTrashList
{: aria-label='Variables' }
#### vector\<[ProjectileFactory](../Hyperspace/ProjectileFactory)\> .weaponsTrashList
{: aria-label='Variables' }

___
