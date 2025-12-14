---
layout: lua
title: RenderEvents
lang: en
category: Enum
---

# Enum "RenderEvents"

<!-- Head content to be pulled from "lua-source-parts-inject/Defines/RenderEvents/_head.md" -->


<!-- Table descriptions pulled from "lua-source-parts-inject/Defines/RenderEvents/_table_descriptions.json" -->

| Name | Value | Description |
| --- | --- | --- |
| UNKNOWN | 0 |  |
| MAIN_MENU | 1 | On rendering the main menu |
| GUI_CONTAINER | 2 | On rendering the main game, this is a wrapper around the entire game UI |
| LAYER_BACKGROUND | 3 | The space background layer |
| LAYER_FOREGROUND | 4 | The space foreground layer, includes the planet/solar flare/ion storm/nebula but not asteroids |
| LAYER_ASTEROIDS | 5 | The space asteroids layer, in front of the the space foreground |
| LAYER_PLAYER | 6 | The player ship, you can render things on top the player ship by using the after method of the callbacks |
| SHIP | 7 | Any active ship, you can render things on top the ship by using the after method of the callbacks |
| SHIP_MANAGER | 8 | `before_function` is equivalent to `roomAnim` layer 3, `after_function` is equivalent to `roomAnim` layer 4 |
| SHIP_JUMP | 9 | Any active ship that is jumping, you can render things on top the ship by using the after method of the callbacks |
| SHIP_HULL | 10 | On rendering the ship hull, cloak and thruster animations |
| SHIP_ENGINES | 11 | Thruster animations |
| SHIP_FLOOR | 12 | Equivalent to `roomAnim` layer 0 |
| SHIP_BREACHES | 13 | Equivalent to `roomAnim` layer 1 |
| SHIP_SPARKS | 14 | Equivalent to `roomAnim` layer 2 |
| CREW_MEMBER_HEALTH | 15 | Runs for each `CrewMember` regardless of whether their health bar is visible |
| LAYER_FRONT | 16 | In front of player ship, where asteroids above the ship are rendered but you can draw whatever you want |
| FTL_BUTTON | 17 | Same layer as the FTL jump button and most of the player UI |
| SYSTEM_BOX | 18 | Called for each individual SystemBox, passed under the `systemBox` arg. Render coordinates are in the reference frame of the SystemBox. Unsure what `ignoreStatus` does. |
| SPACE_STATUS | 19 | On rendering hazard environment icons |
| SHIP_STATUS | 20 | On rendering player element like hull and ressources |
| CHOICE_BOX | 21 | When any choiceBox related window is on screen |
| TABBED_WINDOW | 22 | On rendering a tab in the upgrade interface |
| MOUSE_CONTROL | 23 | Rendering at the highest layer above everything else where the mouse cursor is finally drawn |
| UNKNOWN_MAX | 24 |  |
