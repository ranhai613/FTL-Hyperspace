---
layout: lua
title: CommandGui
lang: en
---

# Class "CommandGui"






## Fields
### bAutoPaused (Read-only)
{: aria-label='Fields' }
#### boolean .bAutoPaused
{: aria-label='Fields' }
**Read-only**
Maybe true for event pauses and ESC menu pauses? Not sure.

______
### bHideUI
{: aria-label='Fields' }
#### boolean .bHideUI
{: aria-label='Fields' }

______
### bPaused
{: aria-label='Fields' }
#### boolean .bPaused
{: aria-label='Fields' }
Only true for spacebar pauses, NOT event pauses or ESC menu pauses.
Modifying this variable during event pauses and ESC menu pauses does not unfreeze the game; it will only change whether or not the game remains paused when the event or ESC menu closes.

______
### choiceBox (Read-only)
{: aria-label='Fields' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) .choiceBox
{: aria-label='Fields' }
**Read-only**

______
### choiceBoxOpen (Read-only)
{: aria-label='Fields' }
#### boolean .choiceBoxOpen
{: aria-label='Fields' }
**Read-only**

______
### combatControl
{: aria-label='Fields' }
#### [CombatControl](../Hyperspace/CombatControl) .combatControl
{: aria-label='Fields' }

______
### crewControl
{: aria-label='Fields' }
#### [CrewControl](../Hyperspace/CrewControl) .crewControl
{: aria-label='Fields' }

______
### dangerLocation (Read-only)
{: aria-label='Fields' }
#### boolean .dangerLocation
{: aria-label='Fields' }
**Read-only**

______
### equipScreen (Read-only)
{: aria-label='Fields' }
#### [Equipment](../Hyperspace/Equipment) .equipScreen
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

______
### event_pause (Read-only)
{: aria-label='Fields' }
#### boolean .event_pause
{: aria-label='Fields' }
**Read-only**
True for event pauses.

______
### ftlButton
{: aria-label='Fields' }
#### [FTLButton](../Hyperspace/FTLButton) .ftlButton
{: aria-label='Fields' }

______
### jumpComplete (Read-only)
{: aria-label='Fields' }
#### boolean .jumpComplete
{: aria-label='Fields' }
**Read-only**

______
### mapId (Read-only)
{: aria-label='Fields' }
#### integer .mapId
{: aria-label='Fields' }
**Read-only**

______
### menu_pause (Read-only)
{: aria-label='Fields' }
#### boolean .menu_pause
{: aria-label='Fields' }
**Read-only**
Probably true for ESC menu pauses.

______
### outOfFuel (Read-only)
{: aria-label='Fields' }
#### boolean .outOfFuel
{: aria-label='Fields' }
**Read-only**

______
### pauseTextLoc
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pauseTextLoc
{: aria-label='Fields' }

______
### secretSector (Read-only)
{: aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }
**Read-only**

______
### shipPosition
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .shipPosition
{: aria-label='Fields' }

______
### shipStatus
{: aria-label='Fields' }
#### ShipStatus .shipStatus
{: aria-label='Fields' }

______
### spaceStatus
{: aria-label='Fields' }
#### [SpaceStatus](../Hyperspace/SpaceStatus) .spaceStatus
{: aria-label='Fields' }

______
### sysControl
{: aria-label='Fields' }
#### SystemControl .sysControl
{: aria-label='Fields' }

______
### upgradeButton (Read-only)
{: aria-label='Fields' }
#### [Button](../Hyperspace/Button) .upgradeButton
{: aria-label='Fields' }
Field is **read-only** but fields under this object may still be mutable.

___
