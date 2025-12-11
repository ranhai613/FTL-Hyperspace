---
layout: lua
title: CommandGui
lang: en
---

# Class "CommandGui"






## Fields
{: #Fields .section}
### bAutoPaused (Read-only)
{: #bAutoPaused aria-label='Fields' }
#### boolean .bAutoPaused
{: aria-label='Fields' }
**Read-only**
Maybe true for event pauses and ESC menu pauses? Not sure.

___
### bHideUI
{: #bHideUI aria-label='Fields' }
#### boolean .bHideUI
{: aria-label='Fields' }

___
### bPaused
{: #bPaused aria-label='Fields' }
#### boolean .bPaused
{: aria-label='Fields' }
Only true for spacebar pauses, NOT event pauses or ESC menu pauses.
Modifying this variable during event pauses and ESC menu pauses does not unfreeze the game; it will only change whether or not the game remains paused when the event or ESC menu closes.

___
### choiceBox (Read-only)
{: #choiceBox aria-label='Fields' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) .choiceBox
{: aria-label='Fields' }
**Read-only**

___
### choiceBoxOpen (Read-only)
{: #choiceBoxOpen aria-label='Fields' }
#### boolean .choiceBoxOpen
{: aria-label='Fields' }
**Read-only**

___
### combatControl
{: #combatControl aria-label='Fields' }
#### [CombatControl](../Hyperspace/CombatControl) .combatControl
{: aria-label='Fields' }

___
### crewControl
{: #crewControl aria-label='Fields' }
#### [CrewControl](../Hyperspace/CrewControl) .crewControl
{: aria-label='Fields' }

___
### dangerLocation (Read-only)
{: #dangerLocation aria-label='Fields' }
#### boolean .dangerLocation
{: aria-label='Fields' }
**Read-only**

___
### equipScreen (Read-only)
{: #equipScreen aria-label='Fields' }
#### [Equipment](../Hyperspace/Equipment) .equipScreen
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
### event_pause (Read-only)
{: #event_pause aria-label='Fields' }
#### boolean .event_pause
{: aria-label='Fields' }
**Read-only**
True for event pauses.

___
### ftlButton
{: #ftlButton aria-label='Fields' }
#### [FTLButton](../Hyperspace/FTLButton) .ftlButton
{: aria-label='Fields' }

___
### jumpComplete (Read-only)
{: #jumpComplete aria-label='Fields' }
#### boolean .jumpComplete
{: aria-label='Fields' }
**Read-only**

___
### mapId (Read-only)
{: #mapId aria-label='Fields' }
#### integer .mapId
{: aria-label='Fields' }
**Read-only**

___
### menu_pause (Read-only)
{: #menu_pause aria-label='Fields' }
#### boolean .menu_pause
{: aria-label='Fields' }
**Read-only**
Probably true for ESC menu pauses.

___
### outOfFuel (Read-only)
{: #outOfFuel aria-label='Fields' }
#### boolean .outOfFuel
{: aria-label='Fields' }
**Read-only**

___
### pauseTextLoc
{: #pauseTextLoc aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pauseTextLoc
{: aria-label='Fields' }

___
### secretSector (Read-only)
{: #secretSector aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }
**Read-only**

___
### shipPosition
{: #shipPosition aria-label='Fields' }
#### [Point](../Hyperspace/Point) .shipPosition
{: aria-label='Fields' }

___
### shipStatus
{: #shipStatus aria-label='Fields' }
#### ShipStatus .shipStatus
{: aria-label='Fields' }

___
### spaceStatus
{: #spaceStatus aria-label='Fields' }
#### [SpaceStatus](../Hyperspace/SpaceStatus) .spaceStatus
{: aria-label='Fields' }

___
### sysControl
{: #sysControl aria-label='Fields' }
#### SystemControl .sysControl
{: aria-label='Fields' }

___
### upgradeButton (Read-only)
{: #upgradeButton aria-label='Fields' }
#### [Button](../Hyperspace/Button) .upgradeButton
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
