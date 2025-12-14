---
layout: lua
title: PowerResourceDefinition
lang: en
category: Class
---

# Class "PowerResourceDefinition"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### PowerResourceDefinition ()
{: #PowerResourceDefinition .lua-content-item aria-label='Constructors' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) PowerResourceDefinition ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/PowerResourceDefinition().md" -->

___



## Static Methods
{: #Static-Methods .lua-content-section}
### AddNamedDefinition ()
{: #AddNamedDefinition .lua-content-item aria-label='StaticMethods' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .AddNamedDefinition (string _name, [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) copyDef)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/AddNamedDefinition(string,Hyperspace.PowerResourceDefinition).md" -->

___
### GetByName ()
{: #GetByName .lua-content-item aria-label='StaticMethods' }
#### [PowerResourceDefinition](../Hyperspace/PowerResourceDefinition) .GetByName (string _name)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/GetByName(string).md" -->

___


## Methods
{: #Methods .lua-content-section}
### AssignGroup ()
{: #AssignGroup .lua-content-item aria-label='Methods' }
#### void :AssignGroup (string _name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/AssignGroup(string).md" -->

___
### AssignIndex ()
{: #AssignIndex .lua-content-item aria-label='Methods' }
#### void :AssignIndex ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/AssignIndex().md" -->

___
### AssignName ()
{: #AssignName .lua-content-item aria-label='Methods' }
#### void :AssignName (string _name)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/AssignName(string).md" -->

___


## Fields
{: #Fields .lua-content-section}
### chargeReq
{: #chargeReq .lua-content-item aria-label='Fields' }
#### [ActivatedPowerRequirements](../Hyperspace/ActivatedPowerRequirements) .chargeReq
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/chargeReq.md" -->

___
### chargesPerJump
{: #chargesPerJump .lua-content-item aria-label='Fields' }
#### integer .chargesPerJump
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/chargesPerJump.md" -->

___
### cooldown
{: #cooldown .lua-content-item aria-label='Fields' }
#### number .cooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/cooldown.md" -->

___
### cooldownColor
{: #cooldownColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .cooldownColor
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/cooldownColor.md" -->

___
### disabledCharges
{: #disabledCharges .lua-content-item aria-label='Fields' }
#### integer .disabledCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/disabledCharges.md" -->

___
### disabledCooldown
{: #disabledCooldown .lua-content-item aria-label='Fields' }
#### integer .disabledCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/disabledCooldown.md" -->

___
### groupIndex (Read-only)
{: #groupIndex .lua-content-item aria-label='Fields' }
#### uint .groupIndex
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/groupIndex.md" -->
**read-only**
<!-- End of content -->

___
### hideCharges
{: #hideCharges .lua-content-item aria-label='Fields' }
#### boolean .hideCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/hideCharges.md" -->

___
### hideCooldown
{: #hideCooldown .lua-content-item aria-label='Fields' }
#### boolean .hideCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/hideCooldown.md" -->

___
### initialCharges
{: #initialCharges .lua-content-item aria-label='Fields' }
#### integer .initialCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/initialCharges.md" -->

___
### initialCooldownFraction
{: #initialCooldownFraction .lua-content-item aria-label='Fields' }
#### number .initialCooldownFraction
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/initialCooldownFraction.md" -->

___
### jumpCooldown
{: #jumpCooldown .lua-content-item aria-label='Fields' }
#### integer .jumpCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/jumpCooldown.md" -->

___
### name (Read-only)
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/name.md" -->
**read-only**
<!-- End of content -->

___
### onDeath
{: #onDeath .lua-content-item aria-label='Fields' }
#### integer .onDeath
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/onDeath.md" -->

___
### powerCharges
{: #powerCharges .lua-content-item aria-label='Fields' }
#### integer .powerCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/powerCharges.md" -->

___
### respawnCharges
{: #respawnCharges .lua-content-item aria-label='Fields' }
#### integer .respawnCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/respawnCharges.md" -->

___
### showLinkedCharges
{: #showLinkedCharges .lua-content-item aria-label='Fields' }
#### boolean .showLinkedCharges
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/showLinkedCharges.md" -->

___
### showLinkedCooldowns
{: #showLinkedCooldowns .lua-content-item aria-label='Fields' }
#### boolean .showLinkedCooldowns
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/showLinkedCooldowns.md" -->

___
### showTemporaryBars
{: #showTemporaryBars .lua-content-item aria-label='Fields' }
#### boolean .showTemporaryBars
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/showTemporaryBars.md" -->

___
### sortOrder
{: #sortOrder .lua-content-item aria-label='Fields' }
#### integer .sortOrder
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PowerResourceDefinition/sortOrder.md" -->

___
