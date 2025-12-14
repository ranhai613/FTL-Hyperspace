---
layout: lua
title: InternalEvents
lang: en
category: Enum
---

# Enum "InternalEvents"

| Name | Value | Description |
| --- | --- | --- |
| UNKNOWN | 0 |  |
| ON_TICK | 1 | Run code every in-game tick (frame), use in combination with other events to turn logic on and off in your code that runs every tick |
| MAIN_MENU | 2 | Run code when the main menu opens |
| DANGEROUS_ENVIRONMENT | 3 | Can be used to change the state of the environment, affecting music and ability to upgrade |
| GET_BEACON_HAZARD | 4 | If a value is returned, can be used to mark a beacon as a hazard with an icon and tooltip on the beacon map |
| GET_HAZARD_FLASH | 5 | Can be used to alter the opacity and color of the flash used for suns and pulsars |
| GET_RUN_SEED | 6 | Run code when the seed for the run is set |
| ON_KEY_DOWN | 7 | Detect keyboard key is pressed |
| ON_KEY_UP | 8 | Detect keyboard key is unpressed |
| ON_MOUSE_MOVE | 9 | Detect mouse movement |
| ON_MOUSE_L_BUTTON_DOWN | 10 | Detect left mouse button is pressed |
| ON_MOUSE_L_BUTTON_UP | 11 | Detect left mouse button is unpressed |
| ON_MOUSE_R_BUTTON_DOWN | 12 | Detect right mouse button is pressed |
| ON_MOUSE_R_BUTTON_UP | 13 | Detect right mouse button is unpressed |
| ON_MOUSE_M_BUTTON_DOWN | 14 | Detect middle mouse button is pressed |
| ON_MOUSE_SCROLL | 15 | Detect mouse scrolling. `direction` will be 1.0 when scrolling down, -1.0 when scrolling up. |
| GUI_MOUSE_MOVE | 16 | Detect mouse movement (to be used for `GenericButton`'s `MouseMove` method) |
| CREW_LOOP | 17 | While unpaused, run code every in-game tick for each crew member |
| CREW_CLONE | 18 | Called at the start of creating a `CrewMember` after the cloning process |
| SHIP_LOOP | 19 | While unpaused, run code every in-game tick for each ship |
| HAS_EQUIPMENT | 20 | Run every hasEquipment check |
| HAS_AUGMENTATION | 21 | Run every hasAugmentation check |
| GET_AUGMENTATION_VALUE | 22 | Called when checking an augmentation's value |
| GET_DODGE_FACTOR | 23 | Can be used to alter the dodge factor for the given ship |
| SET_BONUS_POWER | 24 | Can be used to alter the bonus power for the given system |
| SELECT_ARMAMENT_PRE | 25 | Triggered when selecting a weapon to fire, can be used to alter or block the selected weapon |
| SELECT_ARMAMENT_POST | 26 | Triggered after selecting a weapon to fire |
| PROJECTILE_INITIALIZE | 27 | Called when a projectile is initialized |
| PROJECTILE_FIRE | 28 | Called when a projectile is fired |
| PROJECTILE_PRE | 29 | Called before projectile processing |
| PROJECTILE_POST | 30 | Called after projectile processing |
| PROJECTILE_UPDATE_PRE | 31 | Called before projectile update |
| PROJECTILE_UPDATE_POST | 32 | Called after projectile update |
| WEAPON_COOLDOWN_MOD | 33 | Check and possibly alter the cooldown modifier being applied to a weapon. Return value cannot be greater than 1 for non-artillery weapons. |
| WEAPON_STATBOX | 34 | Change the text displayed for the player weapon stats (only works if `redesignedWeaponTooltips` is enabled) |
| WEAPON_DESCBOX | 35 | Change the text displayed for the player weapon description |
| WEAPON_RENDERBOX | 36 | Change the text displayed for the player weapon cooldown timers |
| DRONE_FIRE | 37 | Called when a drone fires |
| DRONE_COLLISION | 38 | Called when a drone collides with a projectile |
| PROJECTILE_COLLISION | 39 | Called when projectiles collide |
| SHIELD_COLLISION_PRE | 40 | Called before shield collision logic |
| SHIELD_COLLISION | 41 | Called after shield collision |
| DAMAGE_AREA | 42 | Called when an is about to be hit by a projectile |
| DAMAGE_AREA_HIT | 43 | Called when an area is hit by a projectile |
| DAMAGE_BEAM | 44 | Called when a beam deals damage |
| DAMAGE_SYSTEM | 45 | Called when a system takes damage |
| SYSTEM_ADD_DAMAGE | 46 | Called when damage is added to a system, occurs after all resist calculations |
| ACTIVATE_POWER | 47 | Called when a crew activates a power |
| PREPARE_POWER | 48 | Called when preparing a power activation |
| CANCEL_POWER | 49 | Called when canceling a power |
| POWER_ON_UPDATE | 50 | Called when updating a power |
| POWER_RESOURCE_ON_UPDATE | 51 | Called when updating a resource power |
| POWER_ENABLE_INIT | 52 | Called when initializing power enable state |
| POWER_RESOURCE_ENABLE_INIT | 53 | Called when initializing resource power enable state |
| POWER_REQ | 54 | Called when checking power requirements |
| POWER_READY | 55 | Called when checking if power is ready |
| POWER_TOOLTIP | 56 | Called when rendering power tooltip |
| GENERATOR_CREATE_SHIP | 57 | Called when generating a new ship from an event |
| GENERATOR_CREATE_SHIP_POST | 58 | Called after generating a new ship from an event |
| PRE_CREATE_CHOICEBOX | 59 | Called before the creation of a `ChoiceBox` by a `LocationEvent` |
| POST_CREATE_CHOICEBOX | 60 | Called after the creation of a `ChoiceBox` by a `LocationEvent` |
| TABBED_WINDOW_CONFIRM | 61 | Called for every event that closes the current tab in the upgrade menu |
| TABBED_WINDOW_UNDO | 62 | Called when the UNDO button is activated in the upgrade menu |
| JUMP_ARRIVE | 63 | Called when a ship arrives at a beacon |
| JUMP_LEAVE | 64 | Called when a ship leaves a beacon |
| ON_WAIT | 65 | Run code every time the ship waits (Spending a jump cycle without moving beacons, either when out of fuel or at last stand) |
| SYSTEM_BOX_MOUSE_MOVE | 66 | Called when the mouse is moved at coordinates (`x`, `y`). Coordinates are relative to the SystemBox in question. |
| SYSTEM_BOX_MOUSE_CLICK | 67 | Called when the mouse is clicked. `shift` indicates whether the shift key is held on click. |
| SYSTEM_BOX_KEY_DOWN | 68 | Called when a key is pressed. `Key` argument indicates the specific key pressed, and `shift` argument indicates whether the shift key is held on click. |
| GET_LEVEL_DESCRIPTION | 69 | Called to get the description of what a system does at a certain level. `systemId` indicates the ID of the system, `level` indicates the power level, and `tooltip` indicates whether the string being generated is in the context of a mouseover tooltip. |
| CALCULATE_LEAK_MODIFIER | 70 | Called once per ship every game tick to calculate a multiplier to the rate at which airlocks and breaches drain oxygen. |
| CALCULATE_STAT_PRE | 71 |  |
| CALCULATE_STAT_POST | 72 |  |
| CONSTRUCT_CREWMEMBER | 73 | Called when constructing a crew member |
| CONSTRUCT_SPACEDRONE | 74 | Called when constructing a space drone |
| CONSTRUCT_PROJECTILE_FACTORY | 75 | Called when constructing a weapon |
| CONSTRUCT_PROJECTILE | 76 | Called when constructing a projectile |
| CONSTRUCT_ROOM | 77 | Called when constructing a room |
| CONSTRUCT_SHIP_MANAGER | 78 | Called when constructing a ShipManager |
| CONSTRUCT_SHIP_SYSTEM | 79 | Called when constructing a ship system |
| CONSTRUCT_SYSTEM_BOX | 80 | Called when constructing a GUI system box |
| UNKNOWN_MAX | 81 |  |
