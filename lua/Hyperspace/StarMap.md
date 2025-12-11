---
layout: lua
title: StarMap
lang: en
---

# Class "StarMap"

Extends: [FocusWindow](../Hyperspace/FocusWindow)





## Methods
### ForceWaitMessage ()
{: aria-label='Methods' }
#### void :ForceWaitMessage ([GL_Primitive](../Graphics/GL_Primitive) waitMessage)
{: aria-label='Methods' }
Disables the ability to jump and enables the wait/distress menu. Replaces the "NO FUEL" message shown on the sector map with a primitive of your own.
NOTE: The primitive should be a local or global variable. If it is garbage collected while in use this will lead to a crash.
If no argument is passed, then the jump menu is re-enabled and the "NO FUEL" message is restored.

___
### ForceWaitMessage ()
{: aria-label='Methods' }
#### void :ForceWaitMessage ()
{: aria-label='Methods' }

___
### ModifyPursuit ()
{: aria-label='Methods' }
#### void :ModifyPursuit (integer unk0)
{: aria-label='Methods' }

___
### PointToGrid ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :PointToGrid (number x, number y)
{: aria-label='Methods' }

___


## Fields
### bChoosingNewSector
{: aria-label='Fields' }
#### boolean .bChoosingNewSector
{: aria-label='Fields' }

___
### bMapRevealed
{: aria-label='Fields' }
#### boolean .bMapRevealed
{: aria-label='Fields' }

___
### bSecretSector
{: aria-label='Fields' }
#### boolean .bSecretSector
{: aria-label='Fields' }

___
### bTutorialGenerated
{: aria-label='Fields' }
#### boolean .bTutorialGenerated
{: aria-label='Fields' }

___
### currentLoc
{: aria-label='Fields' }
#### [Location](../Hyperspace/Location) .currentLoc
{: aria-label='Fields' }

___
### currentSector
{: aria-label='Fields' }
#### [Sector](../Hyperspace/Sector) .currentSector
{: aria-label='Fields' }

___
### dangerZone
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .dangerZone
{: aria-label='Fields' }

___
### hoverLoc
{: aria-label='Fields' }
#### [Location](../Hyperspace/Location) .hoverLoc
{: aria-label='Fields' }

___
### locations (Read-only)
{: aria-label='Fields' }
#### vector\<[Location](../Hyperspace/Location)\> .locations
{: aria-label='Fields' }
**Read-only**

___
### mapsBottom
{: aria-label='Fields' }
#### [GL_Primitive[]](../Graphics/GL_Primitive) .mapsBottom
{: aria-label='Fields' }
Contains the 3 background images of the sector map. Index selected via `worldLevel % 3`.

___
### potentialLoc
{: aria-label='Fields' }
#### [Location](../Hyperspace/Location) .potentialLoc
{: aria-label='Fields' }

___
### pursuitDelay
{: aria-label='Fields' }
#### integer .pursuitDelay
{: aria-label='Fields' }

___
### sectors
{: aria-label='Fields' }
#### vector\<[Sector](../Hyperspace/Sector)\> .sectors
{: aria-label='Fields' }

___
### ship
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .ship
{: aria-label='Fields' }
The map icon that rotates around the current location representing the player ship.

___
### shipNoFuel
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipNoFuel
{: aria-label='Fields' }
The no fuel variant of the `ship` icon.

___
### worldLevel (Read-only)
{: aria-label='Fields' }
#### integer .worldLevel
{: aria-label='Fields' }
**Read-only**

___
