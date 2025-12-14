---
layout: lua
title: CommandGui
lang: en
category: Class
---

# Class "CommandGui"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/_head.md" -->






## Fields
{: #Fields .lua-content-section}
### bAutoPaused (Read-only)
{: #bAutoPaused .lua-content-item aria-label='Fields' }
#### boolean .bAutoPaused
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/bAutoPaused.md" -->
**Read-only**
Maybe true for event pauses and ESC menu pauses? Not sure.
<!-- End of content -->

___
### bHideUI
{: #bHideUI .lua-content-item aria-label='Fields' }
#### boolean .bHideUI
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/bHideUI.md" -->

___
### bPaused
{: #bPaused .lua-content-item aria-label='Fields' }
#### boolean .bPaused
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/bPaused.md" -->
Only true for spacebar pauses, NOT event pauses or ESC menu pauses.
Modifying this variable during event pauses and ESC menu pauses does not unfreeze the game; it will only change whether or not the game remains paused when the event or ESC menu closes.
<!-- End of content -->

___
### choiceBox (Read-only)
{: #choiceBox .lua-content-item aria-label='Fields' }
#### [ChoiceBox](../Hyperspace/ChoiceBox) .choiceBox
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/choiceBox.md" -->
**Read-only**
<!-- End of content -->

___
### choiceBoxOpen (Read-only)
{: #choiceBoxOpen .lua-content-item aria-label='Fields' }
#### boolean .choiceBoxOpen
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/choiceBoxOpen.md" -->
**Read-only**
<!-- End of content -->

___
### combatControl
{: #combatControl .lua-content-item aria-label='Fields' }
#### [CombatControl](../Hyperspace/CombatControl) .combatControl
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/combatControl.md" -->

___
### crewControl
{: #crewControl .lua-content-item aria-label='Fields' }
#### [CrewControl](../Hyperspace/CrewControl) .crewControl
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/crewControl.md" -->

___
### dangerLocation (Read-only)
{: #dangerLocation .lua-content-item aria-label='Fields' }
#### boolean .dangerLocation
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/dangerLocation.md" -->
**Read-only**
<!-- End of content -->

___
### equipScreen (Read-only)
{: #equipScreen .lua-content-item aria-label='Fields' }
#### [Equipment](../Hyperspace/Equipment) .equipScreen
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/equipScreen.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
### event_pause (Read-only)
{: #event_pause .lua-content-item aria-label='Fields' }
#### boolean .event_pause
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/event_pause.md" -->
**Read-only**
True for event pauses.
<!-- End of content -->

___
### ftlButton
{: #ftlButton .lua-content-item aria-label='Fields' }
#### [FTLButton](../Hyperspace/FTLButton) .ftlButton
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/ftlButton.md" -->

___
### jumpComplete (Read-only)
{: #jumpComplete .lua-content-item aria-label='Fields' }
#### boolean .jumpComplete
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/jumpComplete.md" -->
**Read-only**
<!-- End of content -->

___
### mapId (Read-only)
{: #mapId .lua-content-item aria-label='Fields' }
#### integer .mapId
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/mapId.md" -->
**Read-only**
<!-- End of content -->

___
### menu_pause (Read-only)
{: #menu_pause .lua-content-item aria-label='Fields' }
#### boolean .menu_pause
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/menu_pause.md" -->
**Read-only**
Probably true for ESC menu pauses.
<!-- End of content -->

___
### outOfFuel (Read-only)
{: #outOfFuel .lua-content-item aria-label='Fields' }
#### boolean .outOfFuel
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/outOfFuel.md" -->
**Read-only**
<!-- End of content -->

___
### pauseTextLoc
{: #pauseTextLoc .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .pauseTextLoc
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/pauseTextLoc.md" -->

___
### secretSector (Read-only)
{: #secretSector .lua-content-item aria-label='Fields' }
#### boolean .secretSector
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/secretSector.md" -->
**Read-only**
<!-- End of content -->

___
### shipPosition
{: #shipPosition .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .shipPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/shipPosition.md" -->

___
### shipStatus
{: #shipStatus .lua-content-item aria-label='Fields' }
#### ShipStatus .shipStatus
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/shipStatus.md" -->

___
### spaceStatus
{: #spaceStatus .lua-content-item aria-label='Fields' }
#### [SpaceStatus](../Hyperspace/SpaceStatus) .spaceStatus
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/spaceStatus.md" -->

___
### sysControl
{: #sysControl .lua-content-item aria-label='Fields' }
#### SystemControl .sysControl
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/CommandGui/sysControl.md" -->

___
### upgradeButton (Read-only)
{: #upgradeButton .lua-content-item aria-label='Fields' }
#### [Button](../Hyperspace/Button) .upgradeButton
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/CommandGui/upgradeButton.md" -->
Field is **read-only** but fields under this object may still be mutable.
<!-- End of content -->

___
