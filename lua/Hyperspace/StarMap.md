---
layout: lua
title: StarMap
lang: en
category: Class
---

# Class "StarMap"


Extends: [FocusWindow](../Hyperspace/FocusWindow)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/_head.md" -->





## Methods
{: #Methods .lua-content-section}
### ForceWaitMessage ()
{: #ForceWaitMessage .lua-content-item aria-label='Methods' }
#### void :ForceWaitMessage ([GL_Primitive](../Graphics/GL_Primitive) waitMessage)
{: aria-label='Methods' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/ForceWaitMessage(Graphics.GL_Primitive).md" -->
Disables the ability to jump and enables the wait/distress menu. Replaces the "NO FUEL" message shown on the sector map with a primitive of your own.
NOTE: The primitive should be a local or global variable. If it is garbage collected while in use this will lead to a crash.
If no argument is passed, then the jump menu is re-enabled and the "NO FUEL" message is restored.
<!-- End of content -->

___
### ForceWaitMessage ()
{: #ForceWaitMessage .lua-content-item aria-label='Methods' }
#### void :ForceWaitMessage ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/ForceWaitMessage().md" -->

___
### ModifyPursuit ()
{: #ModifyPursuit .lua-content-item aria-label='Methods' }
#### void :ModifyPursuit (integer unk0)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/ModifyPursuit(integer).md" -->

___
### PointToGrid ()
{: #PointToGrid .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :PointToGrid (number x, number y)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/PointToGrid(number,number).md" -->

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
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/bChoosingNewSector.md" -->

___
### bMapRevealed
{: #bMapRevealed .lua-content-item aria-label='Fields' }
#### boolean .bMapRevealed
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/bMapRevealed.md" -->

___
### bSecretSector
{: #bSecretSector .lua-content-item aria-label='Fields' }
#### boolean .bSecretSector
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/bSecretSector.md" -->

___
### bTutorialGenerated
{: #bTutorialGenerated .lua-content-item aria-label='Fields' }
#### boolean .bTutorialGenerated
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/bTutorialGenerated.md" -->

___
### currentLoc
{: #currentLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .currentLoc
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/currentLoc.md" -->

___
### currentSector
{: #currentSector .lua-content-item aria-label='Fields' }
#### [Sector](../Hyperspace/Sector) .currentSector
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/currentSector.md" -->

___
### dangerZone
{: #dangerZone .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .dangerZone
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/dangerZone.md" -->

___
### hoverLoc
{: #hoverLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .hoverLoc
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/hoverLoc.md" -->

___
### locations (Read-only)
{: #locations .lua-content-item aria-label='Fields' }
#### vector\<[Location](../Hyperspace/Location)\> .locations
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/locations.md" -->
**Read-only**
<!-- End of content -->

___
### mapsBottom
{: #mapsBottom .lua-content-item aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .mapsBottom
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/mapsBottom.md" -->
Contains the 3 background images of the sector map. Index selected via `worldLevel % 3`.
<!-- End of content -->

___
### potentialLoc
{: #potentialLoc .lua-content-item aria-label='Fields' }
#### [Location](../Hyperspace/Location) .potentialLoc
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/potentialLoc.md" -->

___
### pursuitDelay
{: #pursuitDelay .lua-content-item aria-label='Fields' }
#### integer .pursuitDelay
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/pursuitDelay.md" -->

___
### sectors
{: #sectors .lua-content-item aria-label='Fields' }
#### vector\<[Sector](../Hyperspace/Sector)\> .sectors
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/StarMap/sectors.md" -->

___
### ship
{: #ship .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .ship
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/ship.md" -->
The map icon that rotates around the current location representing the player ship.
<!-- End of content -->

___
### shipNoFuel
{: #shipNoFuel .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipNoFuel
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/shipNoFuel.md" -->
The no fuel variant of the `ship` icon.
<!-- End of content -->

___
### worldLevel (Read-only)
{: #worldLevel .lua-content-item aria-label='Fields' }
#### integer .worldLevel
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/StarMap/worldLevel.md" -->
**Read-only**
<!-- End of content -->

___
