---
layout: lua
title: StarMap
lang: en
---

# Class "StarMap"

Extends: [FocusWindow](../Hyperspace/FocusWindow)





## Methods
### ForceWaitMessage ()
{: aria-label='Functions' }
#### void :ForceWaitMessage ([GL_Primitive](../Graphics/GL_Primitive) waitMessage)
{: aria-label='Functions' }
Disables the ability to jump and enables the wait/distress menu. Replaces the "NO FUEL" message shown on the sector map with a primitive of your own.
NOTE: The primitive should be a local or global variable. If it is garbage collected while in use this will lead to a crash.
If no argument is passed, then the jump menu is re-enabled and the "NO FUEL" message is restored.

______
### ForceWaitMessage ()
{: aria-label='Functions' }
#### void :ForceWaitMessage ()
{: aria-label='Functions' }

______
### ModifyPursuit ()
{: aria-label='Functions' }
#### void :ModifyPursuit (integer unk0)
{: aria-label='Functions' }

______
### PointToGrid ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :PointToGrid (number x, number y)
{: aria-label='Functions' }

___


## Fields
### bChoosingNewSector
{: aria-label='Variables' }
#### boolean .bChoosingNewSector
{: aria-label='Variables' }

______
### bMapRevealed
{: aria-label='Variables' }
#### boolean .bMapRevealed
{: aria-label='Variables' }

______
### bSecretSector
{: aria-label='Variables' }
#### boolean .bSecretSector
{: aria-label='Variables' }

______
### bTutorialGenerated
{: aria-label='Variables' }
#### boolean .bTutorialGenerated
{: aria-label='Variables' }

______
### currentLoc
{: aria-label='Variables' }
#### [Location](../Hyperspace/Location) .currentLoc
{: aria-label='Variables' }

______
### currentSector
{: aria-label='Variables' }
#### [Sector](../Hyperspace/Sector) .currentSector
{: aria-label='Variables' }

______
### dangerZone
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .dangerZone
{: aria-label='Variables' }

______
### hoverLoc
{: aria-label='Variables' }
#### [Location](../Hyperspace/Location) .hoverLoc
{: aria-label='Variables' }

______
### locations (Read-only)
{: aria-label='Variables' }
#### vector\<[Location](../Hyperspace/Location)\> .locations
{: aria-label='Variables' }
**Read-only**

______
### mapsBottom
{: aria-label='Variables' }
#### [GL_Primitive[] length=3](../Graphics/GL_Primitive[] length=3) .mapsBottom
{: aria-label='Variables' }
Contains the 3 background images of the sector map. Index selected via `worldLevel % 3`.

______
### potentialLoc
{: aria-label='Variables' }
#### [Location](../Hyperspace/Location) .potentialLoc
{: aria-label='Variables' }

______
### pursuitDelay
{: aria-label='Variables' }
#### integer .pursuitDelay
{: aria-label='Variables' }

______
### sectors
{: aria-label='Variables' }
#### vector\<[Sector](../Hyperspace/Sector)\> .sectors
{: aria-label='Variables' }

______
### ship
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .ship
{: aria-label='Variables' }
The map icon that rotates around the current location representing the player ship.

______
### shipNoFuel
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipNoFuel
{: aria-label='Variables' }
The no fuel variant of the `ship` icon.

______
### worldLevel (Read-only)
{: aria-label='Variables' }
#### integer .worldLevel
{: aria-label='Variables' }
**Read-only**

___
