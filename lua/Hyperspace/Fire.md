---
layout: lua
title: Fire
lang: en
category: Class
---

# Class "Fire"


Extends: [Spreadable](../Hyperspace/Spreadable) <- [Repairable](../Hyperspace/Repairable) <- [Selectable](../Hyperspace/Selectable)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/OnLoop().md" -->

___
### UpdateDeathTimer ()
{: #UpdateDeathTimer .lua-content-item aria-label='Methods' }
#### void :UpdateDeathTimer (integer connectedFires)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/UpdateDeathTimer(integer).md" -->

___
### UpdateStartTimer ()
{: #UpdateStartTimer .lua-content-item aria-label='Methods' }
#### void :UpdateStartTimer (integer doorLevel)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/UpdateStartTimer(integer).md" -->

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Repairable](Repairable)

| Type | Field |
| --- | --- |
| number | .[fDamage](Repairable#fDamage) |
| number | .[fMaxDamage](Repairable#fMaxDamage) |
| integer | .[iRepairCount](Repairable#iRepairCount) |
| string | .[name](Repairable#name) |
| [Point](../Hyperspace/Point) | .[pLoc](Repairable#pLoc) |
| integer | .[roomId](Repairable#roomId) |
| [ShipObject](../Hyperspace/ShipObject) | .[shipObj](Repairable#shipObj) |

#### From [Selectable](Selectable)

| Type | Field |
| --- | --- |
| integer | .[selectedState](Selectable#selectedState) |

#### From [Spreadable](Spreadable)

| Type | Field |
| --- | --- |
| string | .[soundName](Spreadable#soundName) |

</details>

___
### bWasOnFire
{: #bWasOnFire .lua-content-item aria-label='Fields' }
#### boolean .bWasOnFire
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/bWasOnFire.md" -->

___
### fDeathTimer
{: #fDeathTimer .lua-content-item aria-label='Fields' }
#### number .fDeathTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/fDeathTimer.md" -->

___
### fOxygen
{: #fOxygen .lua-content-item aria-label='Fields' }
#### number .fOxygen
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/fOxygen.md" -->

___
### fStartTimer
{: #fStartTimer .lua-content-item aria-label='Fields' }
#### number .fStartTimer
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/fStartTimer.md" -->

___
### fireAnimation
{: #fireAnimation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .fireAnimation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/fireAnimation.md" -->

___
### smokeAnimation
{: #smokeAnimation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .smokeAnimation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Fire/smokeAnimation.md" -->

___
