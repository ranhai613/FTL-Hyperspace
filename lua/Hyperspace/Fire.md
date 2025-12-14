---
layout: lua
title: Fire
lang: en
category: Class
---

# Class "Fire"


Extends: [Spreadable](../Hyperspace/Spreadable) <- [Repairable](../Hyperspace/Repairable) <- [Selectable](../Hyperspace/Selectable)





## Methods
{: #Methods .lua-content-section}
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### UpdateDeathTimer ()
{: #UpdateDeathTimer .lua-content-item aria-label='Methods' }
#### void :UpdateDeathTimer (integer connectedFires)
{: aria-label='Methods' }

___
### UpdateStartTimer ()
{: #UpdateStartTimer .lua-content-item aria-label='Methods' }
#### void :UpdateStartTimer (integer doorLevel)
{: aria-label='Methods' }

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

___
### fDeathTimer
{: #fDeathTimer .lua-content-item aria-label='Fields' }
#### number .fDeathTimer
{: aria-label='Fields' }

___
### fOxygen
{: #fOxygen .lua-content-item aria-label='Fields' }
#### number .fOxygen
{: aria-label='Fields' }

___
### fStartTimer
{: #fStartTimer .lua-content-item aria-label='Fields' }
#### number .fStartTimer
{: aria-label='Fields' }

___
### fireAnimation
{: #fireAnimation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .fireAnimation
{: aria-label='Fields' }

___
### smokeAnimation
{: #smokeAnimation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .smokeAnimation
{: aria-label='Fields' }

___
