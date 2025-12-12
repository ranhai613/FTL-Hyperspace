---
layout: lua
title: Ship
lang: en
---

# Class "Ship"


Extends: [ShipObject](../Hyperspace/ShipObject)





## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [ShipObject](ShipObject)

| Return Type | Method |
| --- | --- |
| boolean | :[AddAugmentation](ShipObject#AddAugmentation) (string augment) |
| void | :[ClearShipInfo](ShipObject#ClearShipInfo) () |
| integer | :[GetAugmentationCount](ShipObject#GetAugmentationCount) () |
| vector\<string\> | :[GetAugmentationList](ShipObject#GetAugmentationList) () |
| number | :[GetAugmentationValue](ShipObject#GetAugmentationValue) (string augment) |
| integer | :[HasAugmentation](ShipObject#HasAugmentation) (string augment) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>
___
### BreachRandomHull ()
{: #BreachRandomHull .lua-content-item aria-label='Methods' }
#### void :BreachRandomHull (integer roomId)
{: aria-label='Methods' }
Breaches a random tile in the room with `roomId` as its id. This can select an already breached tile, in which case nothing will happen.

___
### BreachSpecificHull ()
{: #BreachSpecificHull .lua-content-item aria-label='Methods' }
#### boolean :BreachSpecificHull (integer grid_x, integer grid_y)
{: aria-label='Methods' }
Breaches a tile at the specified grid coordinates.

___
### EmptySlots ()
{: #EmptySlots .lua-content-item aria-label='Methods' }
#### integer :EmptySlots (integer roomId)
{: aria-label='Methods' }
Returns the number of tiles within the room (Equivalent to the area of the room). I think this marks all tiles in the room as empty, so you can use this to fit more crew than you should in a given room.

___
### FullRoom ()
{: #FullRoom .lua-content-item aria-label='Methods' }
#### boolean :FullRoom (integer roomId, boolean intruder)
{: aria-label='Methods' }
Returns true if the room cannot fit any more crew of the allegiance specifies by the `intruder` arg. If `intruder` is false, counts player crew when on the player ship, and enemy crew when on the enemy ship. If `intruder` is true, counts enemy crew when on the player ship, and player crew when on the enemy ship.

___
### GetAvailableRoomSlot ()
{: #GetAvailableRoomSlot .lua-content-item aria-label='Methods' }
#### integer :GetAvailableRoomSlot (integer roomId, boolean intruder)
{: aria-label='Methods' }

___
### GetBaseEllipse ()
{: #GetBaseEllipse .lua-content-item aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetBaseEllipse ()
{: aria-label='Methods' }
Return `baseEllipse` member by value.

___
### GetHullBreaches ()
{: #GetHullBreaches .lua-content-item aria-label='Methods' }
#### vector\<[Repairable](../Hyperspace/Repairable)\> :GetHullBreaches (boolean onlyDamaged)
{: aria-label='Methods' }

___
### GetRoomCenter ()
{: #GetRoomCenter .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer room)
{: aria-label='Methods' }

___
### GetSelectedRoomId ()
{: #GetSelectedRoomId .lua-content-item aria-label='Methods' }
#### integer :GetSelectedRoomId (integer x, integer y, boolean unk)
{: aria-label='Methods' }
Returns the id of the room at the selected point, or -1 if no valid room would be selected at that point. bIncludeWalls specifies that walls count as part of the room.

___
### GetShards ()
{: #GetShards .lua-content-item aria-label='Methods' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> :GetShards ()
{: aria-label='Methods' }

___
### LockdownRoom ()
{: #LockdownRoom .lua-content-item aria-label='Methods' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }
Locks down the room, and spawns the crystal animation at `pos`. Does not play the lockdown sound. Note: For a "normal" animation, `pos` can be set to the room's center, but it can be set outside of the room as well. Uses the default lockdown type.

___
### LockdownRoom ()
{: #LockdownRoom .lua-content-item aria-label='Methods' }
#### void :LockdownRoom (integer roomId, [Pointf](../Hyperspace/Pointf) pos, [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) def)
{: aria-label='Methods' }
Does the same thing as the other version of LockdownRoom, and allows a custom lockdown type to be defined with a [`CustomLockdownDefinition`](#CustomLockdownDefinition).

___
### RoomLocked ()
{: #RoomLocked .lua-content-item aria-label='Methods' }
#### boolean :RoomLocked (integer roomId)
{: aria-label='Methods' }
Returns true if the room is locked down.

___
### SetRoomBlackout ()
{: #SetRoomBlackout .lua-content-item aria-label='Methods' }
#### void :SetRoomBlackout (integer roomId, boolean blackout)
{: aria-label='Methods' }
When `blackout` is true, hide the room's interior (As if sensors were disabled). When it is false, show the room's interior. Note: This must be done every tick to have an effect.

___
### SetSelectedRoom ()
{: #SetSelectedRoom .lua-content-item aria-label='Methods' }
#### void :SetSelectedRoom (integer roomId)
{: aria-label='Methods' }
Sets the room to be selected (Yellow outline). Note: Must be done every tick to have an effect.

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId-) |

</details>
___
### bCloaked
{: #bCloaked .lua-content-item aria-label='Fields' }
#### boolean .bCloaked
{: aria-label='Fields' }

___
### bDestroyed
{: #bDestroyed .lua-content-item aria-label='Fields' }
#### boolean .bDestroyed
{: aria-label='Fields' }

___
### bExperiment
{: #bExperiment .lua-content-item aria-label='Fields' }
#### boolean .bExperiment
{: aria-label='Fields' }

___
### bShowEngines
{: #bShowEngines .lua-content-item aria-label='Fields' }
#### boolean .bShowEngines
{: aria-label='Fields' }

___
### baseEllipse
{: #baseEllipse .lua-content-item aria-label='Fields' }
#### [Ellipse](../Hyperspace/Ellipse) .baseEllipse
{: aria-label='Fields' }

___
### cloakImageName
{: #cloakImageName .lua-content-item aria-label='Fields' }
#### string .cloakImageName
{: aria-label='Fields' }

___
### cloakPrimitive
{: #cloakPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .cloakPrimitive
{: aria-label='Fields' }

___
### cloakingTracker
{: #cloakingTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .cloakingTracker
{: aria-label='Fields' }

___
### doorState
{: #doorState .lua-content-item aria-label='Fields' }
#### vector\<[Ship.DoorState](../Hyperspace/Ship.DoorState)\> .doorState
{: aria-label='Fields' }

___
### doorsPrimitive
{: #doorsPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .doorsPrimitive
{: aria-label='Fields' }

___
### engineAnim
{: #engineAnim .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .engineAnim
{: aria-label='Fields' }

___
### extraEngineAnim (Read-only)
{: #extraEngineAnim .lua-content-item aria-label='Fields' }
#### vector\<[Animation](../pair<Hyperspace/Animation), integer>\> .extraEngineAnim
{: aria-label='Fields' }

___
### floorImageName
{: #floorImageName .lua-content-item aria-label='Fields' }
#### string .floorImageName
{: aria-label='Fields' }

___
### floorPrimitive
{: #floorPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .floorPrimitive
{: aria-label='Fields' }

___
### glowOffset
{: #glowOffset .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .glowOffset
{: aria-label='Fields' }

___
### gridPrimitive
{: #gridPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .gridPrimitive
{: aria-label='Fields' }

___
### horizontal_shift
{: #horizontal_shift .lua-content-item aria-label='Fields' }
#### integer .horizontal_shift
{: aria-label='Fields' }

___
### hullIntegrity
{: #hullIntegrity .lua-content-item aria-label='Fields' }
#### pair\<integer, integer\> .hullIntegrity
{: aria-label='Fields' }

___
### jumpGlare
{: #jumpGlare .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .jumpGlare
{: aria-label='Fields' }

___
### lastDoorControlMode
{: #lastDoorControlMode .lua-content-item aria-label='Fields' }
#### boolean .lastDoorControlMode
{: aria-label='Fields' }

___
### lockdowns (Read-only)
{: #lockdowns .lua-content-item aria-label='Fields' }
#### vector\<[LockdownShard](../Hyperspace/LockdownShard)\> .lockdowns
{: aria-label='Fields' }
**Read-only**
Does not give a pointer to the LockdownShard, so any changes to the LockdownShard will not be reflected. Use GetShards() instead.
WARNING: Shards should not be removed from this vector! This will result in a memory leak. If this is absolutely necessary, set the `.bDone` field to true instead.

___
### shipFloor
{: #shipFloor .lua-content-item aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipFloor
{: aria-label='Fields' }

___
### shipImage
{: #shipImage .lua-content-item aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImage
{: aria-label='Fields' }

___
### shipImageCloak
{: #shipImageCloak .lua-content-item aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .shipImageCloak
{: aria-label='Fields' }

___
### shipImageName
{: #shipImageName .lua-content-item aria-label='Fields' }
#### string .shipImageName
{: aria-label='Fields' }

___
### shipImagePrimitive
{: #shipImagePrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .shipImagePrimitive
{: aria-label='Fields' }

___
### shipName
{: #shipName .lua-content-item aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }

___
### thrustersImage
{: #thrustersImage .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .thrustersImage
{: aria-label='Fields' }

___
### vDoorList
{: #vDoorList .lua-content-item aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .vDoorList
{: aria-label='Fields' }

___
### vOuterAirlocks
{: #vOuterAirlocks .lua-content-item aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .vOuterAirlocks
{: aria-label='Fields' }

___
### vOuterWalls
{: #vOuterWalls .lua-content-item aria-label='Fields' }
#### vector\<[OuterHull](../Hyperspace/OuterHull)\> .vOuterWalls
{: aria-label='Fields' }

___
### vRoomList
{: #vRoomList .lua-content-item aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .vRoomList
{: aria-label='Fields' }

___
### vertical_shift
{: #vertical_shift .lua-content-item aria-label='Fields' }
#### integer .vertical_shift
{: aria-label='Fields' }

___
### wallsPrimitive
{: #wallsPrimitive .lua-content-item aria-label='Fields' }
#### [GL_Primitive](../Graphics/GL_Primitive) .wallsPrimitive
{: aria-label='Fields' }

___
### weaponMounts
{: #weaponMounts .lua-content-item aria-label='Fields' }
#### vector\<[WeaponMount](../Hyperspace/WeaponMount)\> .weaponMounts
{: aria-label='Fields' }

___
