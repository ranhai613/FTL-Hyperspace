---
layout: lua
title: Ship
lang: en
---

# Class "Ship"

Extends: [ShipObject](../Hyperspace/ShipObject)





## Methods
### BreachRandomHull ()
{: aria-label='Functions' }
#### void :BreachRandomHull (integer roomId)
{: aria-label='Functions' }
Breaches a random tile in the room with `roomId` as its id. This can select an already breached tile, in which case nothing will happen.

______
### BreachSpecificHull ()
{: aria-label='Functions' }
#### boolean :BreachSpecificHull (integer grid_x, integer grid_y)
{: aria-label='Functions' }
Breaches a tile at the specified grid coordinates.

______
### EmptySlots ()
{: aria-label='Functions' }
#### integer :EmptySlots (integer roomId)
{: aria-label='Functions' }
Returns the number of tiles within the room (Equivalent to the area of the room). I think this marks all tiles in the room as empty, so you can use this to fit more crew than you should in a given room.

______
### FullRoom ()
{: aria-label='Functions' }
#### boolean :FullRoom (integer roomId, boolean intruder)
{: aria-label='Functions' }
Returns true if the room cannot fit any more crew of the allegiance specifies by the `intruder` arg. If `intruder` is false, counts player crew when on the player ship, and enemy crew when on the enemy ship. If `intruder` is true, counts enemy crew when on the player ship, and player crew when on the enemy ship.

______
### GetAvailableRoomSlot ()
{: aria-label='Functions' }
#### integer :GetAvailableRoomSlot (integer roomId, boolean intruder)
{: aria-label='Functions' }

______
### GetBaseEllipse ()
{: aria-label='Functions' }
#### [Ellipse](../Hyperspace/Ellipse) :GetBaseEllipse ()
{: aria-label='Functions' }
Return `baseEllipse` member by value.

______
### GetHullBreaches ()
{: aria-label='Functions' }
#### vector\<[Repairable](../Hyperspace/Repairable)\> :GetHullBreaches (boolean onlyDamaged)
{: aria-label='Functions' }

______
### GetRoomCenter ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer room)
{: aria-label='Functions' }

______
### GetSelectedRoomId ()
{: aria-label='Functions' }
#### integer :GetSelectedRoomId (integer x, integer y, boolean unk)
{: aria-label='Functions' }
Returns the id of the room at the selected point, or -1 if no valid room would be selected at that point. bIncludeWalls specifies that walls count as part of the room.

______
### GetShards ()
{: aria-label='Functions' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> :GetShards ()
{: aria-label='Functions' }

______
### LockdownRoom ()
{: aria-label='Functions' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Functions' }
Locks down the room, and spawns the crystal animation at `pos`. Does not play the lockdown sound. Note: For a "normal" animation, `pos` can be set to the room's center, but it can be set outside of the room as well. Uses the default lockdown type.

______
### LockdownRoom ()
{: aria-label='Functions' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos, [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) def)
{: aria-label='Functions' }
Does the same thing as the other version of LockdownRoom, and allows a custom lockdown type to be defined with a [`CustomLockdownDefinition`](#CustomLockdownDefinition).

______
### RoomLocked ()
{: aria-label='Functions' }
#### boolean :RoomLocked (integer roomId)
{: aria-label='Functions' }
Returns true if the room is locked down.

______
### SetRoomBlackout ()
{: aria-label='Functions' }
#### void :SetRoomBlackout (integer roomId, boolean blackout)
{: aria-label='Functions' }
When `blackout` is true, hide the room's interior (As if sensors were disabled). When it is false, show the room's interior. Note: This must be done every tick to have an effect.

______
### SetSelectedRoom ()
{: aria-label='Functions' }
#### void :SetSelectedRoom (integer roomId)
{: aria-label='Functions' }
Sets the room to be selected (Yellow outline). Note: Must be done every tick to have an effect.

___


## Fields
### bCloaked
{: aria-label='Variables' }
#### boolean .bCloaked
{: aria-label='Variables' }

______
### bDestroyed
{: aria-label='Variables' }
#### boolean .bDestroyed
{: aria-label='Variables' }

______
### bExperiment
{: aria-label='Variables' }
#### boolean .bExperiment
{: aria-label='Variables' }

______
### bShowEngines
{: aria-label='Variables' }
#### boolean .bShowEngines
{: aria-label='Variables' }

______
### baseEllipse
{: aria-label='Variables' }
#### [Ellipse](../Hyperspace/Ellipse) .baseEllipse
{: aria-label='Variables' }

______
### cloakImageName
{: aria-label='Variables' }
#### string .cloakImageName
{: aria-label='Variables' }

______
### cloakPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .cloakPrimitive
{: aria-label='Variables' }

______
### cloakingTracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .cloakingTracker
{: aria-label='Variables' }

______
### doorState
{: aria-label='Variables' }
#### vector\<[Ship.DoorState](../Hyperspace/Ship.DoorState)\> .doorState
{: aria-label='Variables' }

______
### doorsPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .doorsPrimitive
{: aria-label='Variables' }

______
### engineAnim
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .engineAnim
{: aria-label='Variables' }

______
### extraEngineAnim (Read-only)
{: aria-label='Variables' }
#### vector\<[Animation](../pair<Hyperspace/Animation), integer>\> .extraEngineAnim
{: aria-label='Variables' }

______
### floorImageName
{: aria-label='Variables' }
#### string .floorImageName
{: aria-label='Variables' }

______
### floorPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .floorPrimitive
{: aria-label='Variables' }

______
### glowOffset
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .glowOffset
{: aria-label='Variables' }

______
### gridPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .gridPrimitive
{: aria-label='Variables' }

______
### horizontal_shift
{: aria-label='Variables' }
#### integer .horizontal_shift
{: aria-label='Variables' }

______
### hullIntegrity
{: aria-label='Variables' }
#### pair\<integer, integer\> .hullIntegrity
{: aria-label='Variables' }

______
### jumpGlare
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .jumpGlare
{: aria-label='Variables' }

______
### lastDoorControlMode
{: aria-label='Variables' }
#### boolean .lastDoorControlMode
{: aria-label='Variables' }

______
### lockdowns (Read-only)
{: aria-label='Variables' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> .lockdowns
{: aria-label='Variables' }
**Read-only**
Does not give a pointer to the LockdownShard, so any changes to the LockdownShard will not be reflected. Use GetShards() instead.
WARNING: Shards should not be removed from this vector! This will result in a memory leak. If this is absolutely necessary, set the `.bDone` field to true instead.

______
### shipFloor
{: aria-label='Variables' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipFloor
{: aria-label='Variables' }

______
### shipImage
{: aria-label='Variables' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImage
{: aria-label='Variables' }

______
### shipImageCloak
{: aria-label='Variables' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImageCloak
{: aria-label='Variables' }

______
### shipImageName
{: aria-label='Variables' }
#### string .shipImageName
{: aria-label='Variables' }

______
### shipImagePrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipImagePrimitive
{: aria-label='Variables' }

______
### shipName
{: aria-label='Variables' }
#### string .shipName
{: aria-label='Variables' }

______
### thrustersImage
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .thrustersImage
{: aria-label='Variables' }

______
### vDoorList
{: aria-label='Variables' }
#### vector\<[Door](../Hyperspace/Door)\> .vDoorList
{: aria-label='Variables' }

______
### vOuterAirlocks
{: aria-label='Variables' }
#### vector\<[Door](../Hyperspace/Door)\> .vOuterAirlocks
{: aria-label='Variables' }

______
### vOuterWalls
{: aria-label='Variables' }
#### vector\<[OuterHull](../Hyperspace/OuterHull)\> .vOuterWalls
{: aria-label='Variables' }

______
### vRoomList
{: aria-label='Variables' }
#### vector\<[Room](../Hyperspace/Room)\> .vRoomList
{: aria-label='Variables' }

______
### vertical_shift
{: aria-label='Variables' }
#### integer .vertical_shift
{: aria-label='Variables' }

______
### wallsPrimitive
{: aria-label='Variables' }
#### [GL_Primitive](../Graphics/GL_Primitive) .wallsPrimitive
{: aria-label='Variables' }

______
### weaponMounts
{: aria-label='Variables' }
#### vector\<[WeaponMount](../Hyperspace/WeaponMount)\> .weaponMounts
{: aria-label='Variables' }

___
