---
layout: lua
title: ShipGraph
lang: en
---

# Class "ShipGraph"




## Static Methods
### GetShipInfo ()
{: aria-label='StaticMethods' }
#### [ShipGraph](../Hyperspace/ShipGraph) .GetShipInfo (integer shipId)
{: aria-label='StaticMethods' }

___
### TranslateFromGrid ()
{: aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateFromGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }

___
### TranslateToGrid ()
{: aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateToGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }

___


## Methods
### ComputeCenter ()
{: aria-label='Methods' }
#### void :ComputeCenter ()
{: aria-label='Methods' }

___
### ConnectedGridSquares ()
{: aria-label='Methods' }
#### integer :ConnectedGridSquares (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

___
### ConnectedGridSquaresPoint ()
{: aria-label='Methods' }
#### integer :ConnectedGridSquaresPoint ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

___
### ConnectingDoor ()
{: aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

___
### ConnectingDoor ()
{: aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

___
### ConnectivityDFS ()
{: aria-label='Methods' }
#### vector\<integer\> :ConnectivityDFS (integer roomId)
{: aria-label='Methods' }

___
### ContainsPoint ()
{: aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

___
### ConvertToLocalAngle ()
{: aria-label='Methods' }
#### number :ConvertToLocalAngle (number ang)
{: aria-label='Methods' }

___
### ConvertToLocalPosition ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToLocalPosition ([Pointf](../Hyperspace/Pointf) world, boolean past)
{: aria-label='Methods' }

___
### ConvertToWorldAngle ()
{: aria-label='Methods' }
#### number :ConvertToWorldAngle (number ang)
{: aria-label='Methods' }

___
### ConvertToWorldPosition ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToWorldPosition ([Pointf](../Hyperspace/Pointf) local)
{: aria-label='Methods' }

___
### Dijkstra ()
{: aria-label='Methods' }
#### Path :Dijkstra ([Point](../Hyperspace/Point) start, [Point](../Hyperspace/Point) goal, integer shipId)
{: aria-label='Methods' }

___
### DoorCount ()
{: aria-label='Methods' }
#### integer :DoorCount (integer roomId)
{: aria-label='Methods' }

___
### FindPath ()
{: aria-label='Methods' }
#### Path :FindPath ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2, integer shipId)
{: aria-label='Methods' }

___
### GetClosestSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetClosestSlot ([Point](../Hyperspace/Point) pos, integer shipId, boolean intruder)
{: aria-label='Methods' }

___
### GetDoors ()
{: aria-label='Methods' }
#### vector\<[Door](../Hyperspace/Door)\> :GetDoors (integer roomId)
{: aria-label='Methods' }

___
### GetIntoRoom ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetIntoRoom (integer roomId, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### GetNumSlots ()
{: aria-label='Methods' }
#### integer :GetNumSlots (integer room)
{: aria-label='Methods' }

___
### GetRoomBlackedOut ()
{: aria-label='Methods' }
#### boolean :GetRoomBlackedOut (integer room)
{: aria-label='Methods' }

___
### GetRoomCenter ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }

___
### GetRoomOxygen ()
{: aria-label='Methods' }
#### number :GetRoomOxygen (integer room)
{: aria-label='Methods' }

___
### GetRoomShape ()
{: aria-label='Methods' }
#### [Rect](../Hyperspace/Rect) :GetRoomShape (integer room)
{: aria-label='Methods' }

___
### GetSelectedRoom ()
{: aria-label='Methods' }
#### integer :GetSelectedRoom (integer x, integer y, boolean unk)
{: aria-label='Methods' }

___
### GetSlotRenderPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotRenderPosition (integer slotId, integer roomId, boolean intruder)
{: aria-label='Methods' }

___
### GetSlotWorldPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotWorldPosition (integer slotId, integer roomId)
{: aria-label='Methods' }

___
### IsRoomConnected ()
{: aria-label='Methods' }
#### boolean :IsRoomConnected (integer room1, integer room2)
{: aria-label='Methods' }

___
### PopClosestDoor ()
{: aria-label='Methods' }
#### integer :PopClosestDoor (vector\<integer\> doors, vector\<number\> distances)
{: aria-label='Methods' }

___
### RoomCount ()
{: aria-label='Methods' }
#### integer :RoomCount ()
{: aria-label='Methods' }

___


## Fields
### center
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }

___
### doorCounts
{: aria-label='Fields' }
#### vector\<integer\> .doorCounts
{: aria-label='Fields' }

___
### doors
{: aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .doors
{: aria-label='Fields' }

___
### lastWorldHeading
{: aria-label='Fields' }
#### number .lastWorldHeading
{: aria-label='Fields' }

___
### lastWorldPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastWorldPosition
{: aria-label='Fields' }

___
### rooms
{: aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .rooms
{: aria-label='Fields' }

___
### shipBox
{: aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .shipBox
{: aria-label='Fields' }

___
### shipName
{: aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }

___
### worldHeading
{: aria-label='Fields' }
#### number .worldHeading
{: aria-label='Fields' }

___
### worldPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .worldPosition
{: aria-label='Fields' }

___
