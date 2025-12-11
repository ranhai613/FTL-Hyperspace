---
layout: lua
title: Ship
lang: en
---

# Class "Ship"

Extends: [ShipObject](../Hyperspace/ShipObject)





## Methods
### BreachRandomHull ()
{: aria-label='Methods' }
#### void :BreachRandomHull (integer roomId)
{: aria-label='Methods' }
Breaches a random tile in the room with `roomId` as its id. This can select an already breached tile, in which case nothing will happen.

___
### BreachSpecificHull ()
{: aria-label='Methods' }
#### boolean :BreachSpecificHull (integer grid_x, integer grid_y)
{: aria-label='Methods' }
Breaches a tile at the specified grid coordinates.

___
### EmptySlots ()
{: aria-label='Methods' }
#### integer :EmptySlots (integer roomId)
{: aria-label='Methods' }
Returns the number of tiles within the room (Equivalent to the area of the room). I think this marks all tiles in the room as empty, so you can use this to fit more crew than you should in a given room.

___
### FullRoom ()
{: aria-label='Methods' }
#### boolean :FullRoom (integer roomId, boolean intruder)
{: aria-label='Methods' }
Returns true if the room cannot fit any more crew of the allegiance specifies by the `intruder` arg. If `intruder` is false, counts player crew when on the player ship, and enemy crew when on the enemy ship. If `intruder` is true, counts enemy crew when on the player ship, and player crew when on the enemy ship.

___
### GetAvailableRoomSlot ()
{: aria-label='Methods' }
#### integer :GetAvailableRoomSlot (integer roomId, boolean intruder)
{: aria-label='Methods' }

___
### GetBaseEllipse ()
{: aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetBaseEllipse ()
{: aria-label='Methods' }
Return `baseEllipse` member by value.

___
### GetHullBreaches ()
{: aria-label='Methods' }
#### vector\<[Repairable](../Hyperspace/Repairable)\> :GetHullBreaches (boolean onlyDamaged)
{: aria-label='Methods' }

___
### GetRoomCenter ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer room)
{: aria-label='Methods' }

___
### GetSelectedRoomId ()
{: aria-label='Methods' }
#### integer :GetSelectedRoomId (integer x, integer y, boolean unk)
{: aria-label='Methods' }
Returns the id of the room at the selected point, or -1 if no valid room would be selected at that point. bIncludeWalls specifies that walls count as part of the room.

___
### GetShards ()
{: aria-label='Methods' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> :GetShards ()
{: aria-label='Methods' }

___
### LockdownRoom ()
{: aria-label='Methods' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }
Locks down the room, and spawns the crystal animation at `pos`. Does not play the lockdown sound. Note: For a "normal" animation, `pos` can be set to the room's center, but it can be set outside of the room as well. Uses the default lockdown type.

___
### LockdownRoom ()
{: aria-label='Methods' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos, [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) def)
{: aria-label='Methods' }
Does the same thing as the other version of LockdownRoom, and allows a custom lockdown type to be defined with a [`CustomLockdownDefinition`](#CustomLockdownDefinition).

___
### RoomLocked ()
{: aria-label='Methods' }
#### boolean :RoomLocked (integer roomId)
{: aria-label='Methods' }
Returns true if the room is locked down.

___
### SetRoomBlackout ()
{: aria-label='Methods' }
#### void :SetRoomBlackout (integer roomId, boolean blackout)
{: aria-label='Methods' }
When `blackout` is true, hide the room's interior (As if sensors were disabled). When it is false, show the room's interior. Note: This must be done every tick to have an effect.

___
### SetSelectedRoom ()
{: aria-label='Methods' }
#### void :SetSelectedRoom (integer roomId)
{: aria-label='Methods' }
Sets the room to be selected (Yellow outline). Note: Must be done every tick to have an effect.

___


## Fields
### bCloaked
{: aria-label='Fields' }
#### boolean .bCloaked
{: aria-label='Fields' }

___
### bDestroyed
{: aria-label='Fields' }
#### boolean .bDestroyed
{: aria-label='Fields' }

___
### bExperiment
{: aria-label='Fields' }
#### boolean .bExperiment
{: aria-label='Fields' }

___
### bShowEngines
{: aria-label='Fields' }
#### boolean .bShowEngines
{: aria-label='Fields' }

___
### baseEllipse
{: aria-label='Fields' }
#### [Ellipse](../Hyperspace/Ellipse) .baseEllipse
{: aria-label='Fields' }

___
### cloakImageName
{: aria-label='Fields' }
#### string .cloakImageName
{: aria-label='Fields' }

___
### cloakPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .cloakPrimitive
{: aria-label='Fields' }

___
### cloakingTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .cloakingTracker
{: aria-label='Fields' }

___
### doorState
{: aria-label='Fields' }
#### vector\<[Ship.DoorState](../Hyperspace/Ship.DoorState)\> .doorState
{: aria-label='Fields' }

___
### doorsPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .doorsPrimitive
{: aria-label='Fields' }

___
### engineAnim
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .engineAnim
{: aria-label='Fields' }

___
### extraEngineAnim (Read-only)
{: aria-label='Fields' }
#### vector\<[Animation](../pair<Hyperspace/Animation), integer>\> .extraEngineAnim
{: aria-label='Fields' }

___
### floorImageName
{: aria-label='Fields' }
#### string .floorImageName
{: aria-label='Fields' }

___
### floorPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .floorPrimitive
{: aria-label='Fields' }

___
### glowOffset
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .glowOffset
{: aria-label='Fields' }

___
### gridPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .gridPrimitive
{: aria-label='Fields' }

___
### horizontal_shift
{: aria-label='Fields' }
#### integer .horizontal_shift
{: aria-label='Fields' }

___
### hullIntegrity
{: aria-label='Fields' }
#### pair\<integer, integer\> .hullIntegrity
{: aria-label='Fields' }

___
### jumpGlare
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .jumpGlare
{: aria-label='Fields' }

___
### lastDoorControlMode
{: aria-label='Fields' }
#### boolean .lastDoorControlMode
{: aria-label='Fields' }

___
### lockdowns (Read-only)
{: aria-label='Fields' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> .lockdowns
{: aria-label='Fields' }
**Read-only**
Does not give a pointer to the LockdownShard, so any changes to the LockdownShard will not be reflected. Use GetShards() instead.
WARNING: Shards should not be removed from this vector! This will result in a memory leak. If this is absolutely necessary, set the `.bDone` field to true instead.

___
### shipFloor
{: aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipFloor
{: aria-label='Fields' }

___
### shipImage
{: aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImage
{: aria-label='Fields' }

___
### shipImageCloak
{: aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImageCloak
{: aria-label='Fields' }

___
### shipImageName
{: aria-label='Fields' }
#### string .shipImageName
{: aria-label='Fields' }

___
### shipImagePrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipImagePrimitive
{: aria-label='Fields' }

___
### shipName
{: aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }

___
### thrustersImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .thrustersImage
{: aria-label='Fields' }

___
### vDoorList
{: aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .vDoorList
{: aria-label='Fields' }

___
### vOuterAirlocks
{: aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .vOuterAirlocks
{: aria-label='Fields' }

___
### vOuterWalls
{: aria-label='Fields' }
#### vector\<[OuterHull](../Hyperspace/OuterHull)\> .vOuterWalls
{: aria-label='Fields' }

___
### vRoomList
{: aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .vRoomList
{: aria-label='Fields' }

___
### vertical_shift
{: aria-label='Fields' }
#### integer .vertical_shift
{: aria-label='Fields' }

___
### wallsPrimitive
{: aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .wallsPrimitive
{: aria-label='Fields' }

___
### weaponMounts
{: aria-label='Fields' }
#### vector\<[WeaponMount](../Hyperspace/WeaponMount)\> .weaponMounts
{: aria-label='Fields' }

___
