---
layout: lua
title: ShipGraph
lang: en
---

# Class "ShipGraph"




## Static Methods
### GetShipInfo ()
{: aria-label='StaticFunctions' }
#### [ShipGraph](../Hyperspace/ShipGraph) .GetShipInfo (integer shipId)
{: aria-label='StaticFunctions' }

______
### TranslateFromGrid ()
{: aria-label='StaticFunctions' }
#### [Point](../Hyperspace/Point) .TranslateFromGrid (integer xx, integer yy)
{: aria-label='StaticFunctions' }

______
### TranslateToGrid ()
{: aria-label='StaticFunctions' }
#### [Point](../Hyperspace/Point) .TranslateToGrid (integer xx, integer yy)
{: aria-label='StaticFunctions' }

___


## Methods
### ComputeCenter ()
{: aria-label='Functions' }
#### void :ComputeCenter ()
{: aria-label='Functions' }

______
### ConnectedGridSquares ()
{: aria-label='Functions' }
#### integer :ConnectedGridSquares (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Functions' }

______
### ConnectedGridSquaresPoint ()
{: aria-label='Functions' }
#### integer :ConnectedGridSquaresPoint ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Functions' }

______
### ConnectingDoor ()
{: aria-label='Functions' }
#### [Door](../Hyperspace/Door) :ConnectingDoor (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Functions' }

______
### ConnectingDoor ()
{: aria-label='Functions' }
#### [Door](../Hyperspace/Door) :ConnectingDoor ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Functions' }

______
### ConnectivityDFS ()
{: aria-label='Functions' }
#### vector\<integer\> :ConnectivityDFS (integer roomId)
{: aria-label='Functions' }

______
### ContainsPoint ()
{: aria-label='Functions' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Functions' }

______
### ConvertToLocalAngle ()
{: aria-label='Functions' }
#### number :ConvertToLocalAngle (number ang)
{: aria-label='Functions' }

______
### ConvertToLocalPosition ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToLocalPosition ([Pointf](../Hyperspace/Pointf) world, boolean past)
{: aria-label='Functions' }

______
### ConvertToWorldAngle ()
{: aria-label='Functions' }
#### number :ConvertToWorldAngle (number ang)
{: aria-label='Functions' }

______
### ConvertToWorldPosition ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToWorldPosition ([Pointf](../Hyperspace/Pointf) local)
{: aria-label='Functions' }

______
### Dijkstra ()
{: aria-label='Functions' }
#### Path :Dijkstra ([Point](../Hyperspace/Point) start, [Point](../Hyperspace/Point) goal, integer shipId)
{: aria-label='Functions' }

______
### DoorCount ()
{: aria-label='Functions' }
#### integer :DoorCount (integer roomId)
{: aria-label='Functions' }

______
### FindPath ()
{: aria-label='Functions' }
#### Path :FindPath ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2, integer shipId)
{: aria-label='Functions' }

______
### GetClosestSlot ()
{: aria-label='Functions' }
#### [Slot](../Hyperspace/Slot) :GetClosestSlot ([Point](../Hyperspace/Point) pos, integer shipId, boolean intruder)
{: aria-label='Functions' }

______
### GetDoors ()
{: aria-label='Functions' }
#### vector\<[Door](../Hyperspace/Door)\> :GetDoors (integer roomId)
{: aria-label='Functions' }

______
### GetIntoRoom ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetIntoRoom (integer roomId, [Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### GetNumSlots ()
{: aria-label='Functions' }
#### integer :GetNumSlots (integer room)
{: aria-label='Functions' }

______
### GetRoomBlackedOut ()
{: aria-label='Functions' }
#### boolean :GetRoomBlackedOut (integer room)
{: aria-label='Functions' }

______
### GetRoomCenter ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Functions' }

______
### GetRoomOxygen ()
{: aria-label='Functions' }
#### number :GetRoomOxygen (integer room)
{: aria-label='Functions' }

______
### GetRoomShape ()
{: aria-label='Functions' }
#### [Rect](../Hyperspace/Rect) :GetRoomShape (integer room)
{: aria-label='Functions' }

______
### GetSelectedRoom ()
{: aria-label='Functions' }
#### integer :GetSelectedRoom (integer x, integer y, boolean unk)
{: aria-label='Functions' }

______
### GetSlotRenderPosition ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetSlotRenderPosition (integer slotId, integer roomId, boolean intruder)
{: aria-label='Functions' }

______
### GetSlotWorldPosition ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetSlotWorldPosition (integer slotId, integer roomId)
{: aria-label='Functions' }

______
### IsRoomConnected ()
{: aria-label='Functions' }
#### boolean :IsRoomConnected (integer room1, integer room2)
{: aria-label='Functions' }

______
### PopClosestDoor ()
{: aria-label='Functions' }
#### integer :PopClosestDoor (vector\<integer\> doors, vector\<number\> distances)
{: aria-label='Functions' }

______
### RoomCount ()
{: aria-label='Functions' }
#### integer :RoomCount ()
{: aria-label='Functions' }

___


## Fields
### center
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Variables' }

______
### doorCounts
{: aria-label='Variables' }
#### vector\<integer\> .doorCounts
{: aria-label='Variables' }

______
### doors
{: aria-label='Variables' }
#### vector\<[Door](../Hyperspace/Door)\> .doors
{: aria-label='Variables' }

______
### lastWorldHeading
{: aria-label='Variables' }
#### number .lastWorldHeading
{: aria-label='Variables' }

______
### lastWorldPosition
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .lastWorldPosition
{: aria-label='Variables' }

______
### rooms
{: aria-label='Variables' }
#### vector\<[Room](../Hyperspace/Room)\> .rooms
{: aria-label='Variables' }

______
### shipBox
{: aria-label='Variables' }
#### [Rect](../Hyperspace/Rect) .shipBox
{: aria-label='Variables' }

______
### shipName
{: aria-label='Variables' }
#### string .shipName
{: aria-label='Variables' }

______
### worldHeading
{: aria-label='Variables' }
#### number .worldHeading
{: aria-label='Variables' }

______
### worldPosition
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .worldPosition
{: aria-label='Variables' }

___
