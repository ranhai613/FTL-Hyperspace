---
layout: lua
title: DefenseDrone
lang: en
---

# Class "DefenseDrone"

Extends: [SpaceDrone](../Hyperspace/SpaceDrone)


## Constructors
### DefenseDrone ()
{: aria-label='Constructors' }
#### [DefenseDrone](../Hyperspace/DefenseDrone) DefenseDrone ()
{: aria-label='Constructors' }

___




## Methods
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip ()
{: aria-label='Methods' }

______
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

______
### PickTarget ()
{: aria-label='Methods' }
#### void :PickTarget ()
{: aria-label='Methods' }

______
### SetWeaponTarget ()
{: aria-label='Methods' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

______
### ValidTargetObject ()
{: aria-label='Methods' }
#### boolean :ValidTargetObject ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
### currentSpeed
{: aria-label='Fields' }
#### number .currentSpeed
{: aria-label='Fields' }

______
### currentTargetId
{: aria-label='Fields' }
#### integer .currentTargetId
{: aria-label='Fields' }

______
### currentTargetType
{: aria-label='Fields' }
#### integer .currentTargetType
{: aria-label='Fields' }

______
### drone_image
{: aria-label='Fields' }
#### CachedImage .drone_image
{: aria-label='Fields' }

______
### engine_image
{: aria-label='Fields' }
#### CachedImage .engine_image
{: aria-label='Fields' }

______
### gun_image_charging
{: aria-label='Fields' }
#### CachedImage .gun_image_charging
{: aria-label='Fields' }

______
### gun_image_off
{: aria-label='Fields' }
#### CachedImage .gun_image_off
{: aria-label='Fields' }

______
### gun_image_on
{: aria-label='Fields' }
#### CachedImage .gun_image_on
{: aria-label='Fields' }

______
### shotAtTargetId
{: aria-label='Fields' }
#### integer .shotAtTargetId
{: aria-label='Fields' }

___
