---
layout: lua
title: StarMap
lang: en
---

# Class "StarMap"


Extends: [FocusWindow](../Hyperspace/FocusWindow)





## Methods
{: #Methods .lua-content-section}
### ForceWaitMessage ()
{: #ForceWaitMessage .lua-content-item aria-label='Methods' }
#### void :ForceWaitMessage ([GL_Primitive](../Graphics/GL_Primitive) waitMessage)
{: aria-label='Methods' }
Disables the ability to jump and enables the wait/distress menu. Replaces the "NO FUEL" message shown on the sector map with a primitive of your own.
NOTE: The primitive should be a local or global variable. If it is garbage collected while in use this will lead to a crash.
If no argument is passed, then the jump menu is re-enabled and the "NO FUEL" message is restored.

___
### ForceWaitMessage ()
{: #ForceWaitMessage .lua-content-item aria-label='Methods' }
#### void :ForceWaitMessage ()
{: aria-label='Methods' }

___
### ModifyPursuit ()
{: #ModifyPursuit .lua-content-item aria-label='Methods' }
#### void :ModifyPursuit (integer unk0)
{: aria-label='Methods' }

___
### PointToGrid ()
{: #PointToGrid .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :PointToGrid (number x, number y)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [FocusWindow](FocusWindow)

| Type | Field |
| --- | --- |
| boolean | .[bCloseButtonSelected](FocusWindow#bCloseButtonSelected) |
| boolean | .[bFullFocus](FocusWindow#bFullFocus) |
| boolean | .[bOpen](FocusWindow#bOpen) |

</details>
___
### bChoosingNewSector
{: #bChoosingNewSector .lua-content-item aria-label='Fields' }
#### boolean .bChoosingNewSector
{: aria-label='Fields' }

___
### bMapRevealed
{: #bMapRevealed .lua-content-item aria-label='Fields' }
#### boolean .bMapRevealed
{: aria-label='Fields' }

___
### bSecretSector
{: #bSecretSector .lua-content-item aria-label='Fields' }
#### boolean .bSecretSector
{: aria-label='Fields' }

___
### bTutorialGenerated
{: #bTutorialGenerated .lua-content-item aria-label='Fields' }
#### boolean .bTutorialGenerated
{: aria-label='Fields' }

___
### currentLoc
{: #currentLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .currentLoc
{: aria-label='Fields' }

___
### currentSector
{: #currentSector .lua-content-item aria-label='Fields' }
#### [Sector](../Hyperspace/Sector) .currentSector
{: aria-label='Fields' }

___
### dangerZone
{: #dangerZone .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .dangerZone
{: aria-label='Fields' }

___
### hoverLoc
{: #hoverLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .hoverLoc
{: aria-label='Fields' }

___
### locations (Read-only)
{: #locations .lua-content-item aria-label='Fields' }
#### vector\<[Location](../Hyperspace/Location)\> .locations
{: aria-label='Fields' }
**Read-only**

___
### mapsBottom
{: #mapsBottom .lua-content-item aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .mapsBottom
{: aria-label='Fields' }
Contains the 3 background images of the sector map. Index selected via `worldLevel % 3`.

___
### potentialLoc
{: #potentialLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .potentialLoc
{: aria-label='Fields' }

___
### pursuitDelay
{: #pursuitDelay .lua-content-item aria-label='Fields' }
#### integer .pursuitDelay
{: aria-label='Fields' }

___
### sectors
{: #sectors .lua-content-item aria-label='Fields' }
#### vector\<[Sector](../Hyperspace/Sector)\> .sectors
{: aria-label='Fields' }

___
### ship
{: #ship .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .ship
{: aria-label='Fields' }
The map icon that rotates around the current location representing the player ship.

___
### shipNoFuel
{: #shipNoFuel .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipNoFuel
{: aria-label='Fields' }
The no fuel variant of the `ship` icon.

___
### worldLevel (Read-only)
{: #worldLevel .lua-content-item aria-label='Fields' }
#### integer .worldLevel
{: aria-label='Fields' }
**Read-only**

___
