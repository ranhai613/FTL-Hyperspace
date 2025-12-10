---
layout: lua
title: CommandGui
lang: en
---

# Class "CommandGui"






## Fields
### bAutoPaused (Read-only)
{: aria-label='Variables' }
#### boolean .bAutoPaused
{: aria-label='Variables' }
**Read-only**
Maybe true for event pauses and ESC menu pauses? Not sure.

______
### bHideUI
{: aria-label='Variables' }
#### boolean .bHideUI
{: aria-label='Variables' }

______
### bPaused
{: aria-label='Variables' }
#### boolean .bPaused
{: aria-label='Variables' }
Only true for spacebar pauses, NOT event pauses or ESC menu pauses.
Modifying this variable during event pauses and ESC menu pauses does not unfreeze the game; it will only change whether or not the game remains paused when the event or ESC menu closes.

______
### choiceBox (Read-only)
{: aria-label='Variables' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) .choiceBox
{: aria-label='Variables' }
**Read-only**

______
### choiceBoxOpen (Read-only)
{: aria-label='Variables' }
#### boolean .choiceBoxOpen
{: aria-label='Variables' }
**Read-only**

______
### combatControl
{: aria-label='Variables' }
#### [CombatControl](../Hyperspace/CombatControl) .combatControl
{: aria-label='Variables' }

______
### crewControl
{: aria-label='Variables' }
#### [CrewControl](../Hyperspace/CrewControl) .crewControl
{: aria-label='Variables' }

______
### dangerLocation (Read-only)
{: aria-label='Variables' }
#### boolean .dangerLocation
{: aria-label='Variables' }
**Read-only**

______
### equipScreen (Read-only)
{: aria-label='Variables' }
#### [Equipment](../Hyperspace/Equipment) .equipScreen
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

______
### event_pause (Read-only)
{: aria-label='Variables' }
#### boolean .event_pause
{: aria-label='Variables' }
**Read-only**
True for event pauses.

______
### ftlButton
{: aria-label='Variables' }
#### [FTLButton](../Hyperspace/FTLButton) .ftlButton
{: aria-label='Variables' }

______
### jumpComplete (Read-only)
{: aria-label='Variables' }
#### boolean .jumpComplete
{: aria-label='Variables' }
**Read-only**

______
### mapId (Read-only)
{: aria-label='Variables' }
#### integer .mapId
{: aria-label='Variables' }
**Read-only**

______
### menu_pause (Read-only)
{: aria-label='Variables' }
#### boolean .menu_pause
{: aria-label='Variables' }
**Read-only**
Probably true for ESC menu pauses.

______
### outOfFuel (Read-only)
{: aria-label='Variables' }
#### boolean .outOfFuel
{: aria-label='Variables' }
**Read-only**

______
### pauseTextLoc
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .pauseTextLoc
{: aria-label='Variables' }

______
### secretSector (Read-only)
{: aria-label='Variables' }
#### boolean .secretSector
{: aria-label='Variables' }
**Read-only**

______
### shipPosition
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .shipPosition
{: aria-label='Variables' }

______
### shipStatus
{: aria-label='Variables' }
#### ShipStatus .shipStatus
{: aria-label='Variables' }

______
### spaceStatus
{: aria-label='Variables' }
#### [SpaceStatus](../Hyperspace/SpaceStatus) .spaceStatus
{: aria-label='Variables' }

______
### sysControl
{: aria-label='Variables' }
#### SystemControl .sysControl
{: aria-label='Variables' }

______
### upgradeButton (Read-only)
{: aria-label='Variables' }
#### [Button](../Hyperspace/Button) .upgradeButton
{: aria-label='Variables' }
Field is **read-only** but fields under this object may still be mutable.

___
