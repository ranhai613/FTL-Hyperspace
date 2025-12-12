---
layout: lua
title: PowerResourceDefinition
lang: en
---

# Class "PowerResourceDefinition"


## Constructors
{: #Constructors .lua-content-section}
### PowerResourceDefinition ()
{: #PowerResourceDefinition .lua-content-item aria-label='Constructors' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) PowerResourceDefinition ()
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
### AddNamedDefinition ()
{: #AddNamedDefinition .lua-content-item aria-label='StaticMethods' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .AddNamedDefinition (string _name, [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) copyDef)
{: aria-label='StaticMethods' }

___
### GetByName ()
{: #GetByName .lua-content-item aria-label='StaticMethods' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .GetByName (string _name)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### AssignGroup ()
{: #AssignGroup .lua-content-item aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }

___
### AssignIndex ()
{: #AssignIndex .lua-content-item aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }

___
### AssignName ()
{: #AssignName .lua-content-item aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### chargeReq
{: #chargeReq .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }

___
### chargesPerJump
{: #chargesPerJump .lua-content-item aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }

___
### cooldown
{: #cooldown .lua-content-item aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }

___
### cooldownColor
{: #cooldownColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }

___
### disabledCharges
{: #disabledCharges .lua-content-item aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }

___
### disabledCooldown
{: #disabledCooldown .lua-content-item aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }

___
### groupIndex (Read-only)
{: #groupIndex .lua-content-item aria-label='Fields' }
#### uint .groupIndex
{: aria-label='Fields' }
**read-only**

___
### hideCharges
{: #hideCharges .lua-content-item aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }

___
### hideCooldown
{: #hideCooldown .lua-content-item aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }

___
### initialCharges
{: #initialCharges .lua-content-item aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }

___
### initialCooldownFraction
{: #initialCooldownFraction .lua-content-item aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }

___
### jumpCooldown
{: #jumpCooldown .lua-content-item aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }

___
### name (Read-only)
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
**read-only**

___
### onDeath
{: #onDeath .lua-content-item aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }

___
### powerCharges
{: #powerCharges .lua-content-item aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }

___
### respawnCharges
{: #respawnCharges .lua-content-item aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }

___
### showLinkedCharges
{: #showLinkedCharges .lua-content-item aria-label='Fields' }
#### boolean .showLinkedCharges
{: aria-label='Fields' }

___
### showLinkedCooldowns
{: #showLinkedCooldowns .lua-content-item aria-label='Fields' }
#### boolean .showLinkedCooldowns
{: aria-label='Fields' }

___
### showTemporaryBars
{: #showTemporaryBars .lua-content-item aria-label='Fields' }
#### boolean .showTemporaryBars
{: aria-label='Fields' }

___
### sortOrder
{: #sortOrder .lua-content-item aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }

___
