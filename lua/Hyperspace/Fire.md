---
layout: lua
title: Fire
lang: en
---

# Class "Fire"


Extends: [Spreadable](../Hyperspace/Spreadable) <- [Repairable](../Hyperspace/Repairable) <- [Selectable](../Hyperspace/Selectable)





## Methods
{: #Methods .section}
### OnLoop ()
{: #OnLoop aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### UpdateDeathTimer ()
{: #UpdateDeathTimer aria-label='Methods' }
#### void :UpdateDeathTimer (integer connectedFires)
{: aria-label='Methods' }

___
### UpdateStartTimer ()
{: #UpdateStartTimer aria-label='Methods' }
#### void :UpdateStartTimer (integer doorLevel)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [Repairable](Repairable)

| Type | Field |
| --- | --- |
| number | .[fDamage](Repairable#fDamage-) |
| number | .[fMaxDamage](Repairable#fMaxDamage-) |
| integer | .[iRepairCount](Repairable#iRepairCount-) |
| string | .[name](Repairable#name-) |
| [Point](../Hyperspace/Point) | .[pLoc](Repairable#pLoc-) |
| integer | .[roomId](Repairable#roomId-) |
| [ShipObject](../Hyperspace/ShipObject) | .[shipObj](Repairable#shipObj-) |

#### From [Selectable](Selectable)

| Type | Field |
| --- | --- |
| integer | .[selectedState](Selectable#selectedState-) |

#### From [Spreadable](Spreadable)

| Type | Field |
| --- | --- |
| string | .[soundName](Spreadable#soundName-) |

</details>
___
### bWasOnFire
{: #bWasOnFire aria-label='Fields' }
#### boolean .bWasOnFire
{: aria-label='Fields' }

___
### fDeathTimer
{: #fDeathTimer aria-label='Fields' }
#### number .fDeathTimer
{: aria-label='Fields' }

___
### fOxygen
{: #fOxygen aria-label='Fields' }
#### number .fOxygen
{: aria-label='Fields' }

___
### fStartTimer
{: #fStartTimer aria-label='Fields' }
#### number .fStartTimer
{: aria-label='Fields' }

___
### fireAnimation
{: #fireAnimation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .fireAnimation
{: aria-label='Fields' }

___
### smokeAnimation
{: #smokeAnimation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .smokeAnimation
{: aria-label='Fields' }

___
