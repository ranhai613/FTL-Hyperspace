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

______
### TranslateFromGrid ()
{: aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateFromGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }

______
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

______
### ConnectedGridSquares ()
{: aria-label='Methods' }
#### integer :ConnectedGridSquares (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

______
### ConnectedGridSquaresPoint ()
{: aria-label='Methods' }
#### integer :ConnectedGridSquaresPoint ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

______
### ConnectingDoor ()
{: aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

______
### ConnectingDoor ()
{: aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

______
### ConnectivityDFS ()
{: aria-label='Methods' }
#### vector\<integer\> :ConnectivityDFS (integer roomId)
{: aria-label='Methods' }

______
### ContainsPoint ()
{: aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

______
### ConvertToLocalAngle ()
{: aria-label='Methods' }
#### number :ConvertToLocalAngle (number ang)
{: aria-label='Methods' }

______
### ConvertToLocalPosition ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToLocalPosition ([Pointf](../Hyperspace/Pointf) world, boolean past)
{: aria-label='Methods' }

______
### ConvertToWorldAngle ()
{: aria-label='Methods' }
#### number :ConvertToWorldAngle (number ang)
{: aria-label='Methods' }

______
### ConvertToWorldPosition ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToWorldPosition ([Pointf](../Hyperspace/Pointf) local)
{: aria-label='Methods' }

______
### Dijkstra ()
{: aria-label='Methods' }
#### Path :Dijkstra ([Point](../Hyperspace/Point) start, [Point](../Hyperspace/Point) goal, integer shipId)
{: aria-label='Methods' }

______
### DoorCount ()
{: aria-label='Methods' }
#### integer :DoorCount (integer roomId)
{: aria-label='Methods' }

______
### FindPath ()
{: aria-label='Methods' }
#### Path :FindPath ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2, integer shipId)
{: aria-label='Methods' }

______
### GetClosestSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetClosestSlot ([Point](../Hyperspace/Point) pos, integer shipId, boolean intruder)
{: aria-label='Methods' }

______
### GetDoors ()
{: aria-label='Methods' }
#### vector\<[Door](../Hyperspace/Door)\> :GetDoors (integer roomId)
{: aria-label='Methods' }

______
### GetIntoRoom ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetIntoRoom (integer roomId, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

______
### GetNumSlots ()
{: aria-label='Methods' }
#### integer :GetNumSlots (integer room)
{: aria-label='Methods' }

______
### GetRoomBlackedOut ()
{: aria-label='Methods' }
#### boolean :GetRoomBlackedOut (integer room)
{: aria-label='Methods' }

______
### GetRoomCenter ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }

______
### GetRoomOxygen ()
{: aria-label='Methods' }
#### number :GetRoomOxygen (integer room)
{: aria-label='Methods' }

______
### GetRoomShape ()
{: aria-label='Methods' }
#### [Rect](../Hyperspace/Rect) :GetRoomShape (integer room)
{: aria-label='Methods' }

______
### GetSelectedRoom ()
{: aria-label='Methods' }
#### integer :GetSelectedRoom (integer x, integer y, boolean unk)
{: aria-label='Methods' }

______
### GetSlotRenderPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotRenderPosition (integer slotId, integer roomId, boolean intruder)
{: aria-label='Methods' }

______
### GetSlotWorldPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotWorldPosition (integer slotId, integer roomId)
{: aria-label='Methods' }

______
### IsRoomConnected ()
{: aria-label='Methods' }
#### boolean :IsRoomConnected (integer room1, integer room2)
{: aria-label='Methods' }

______
### PopClosestDoor ()
{: aria-label='Methods' }
#### integer :PopClosestDoor (vector\<integer\> doors, vector\<number\> distances)
{: aria-label='Methods' }

______
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

______
### doorCounts
{: aria-label='Fields' }
#### vector\<integer\> .doorCounts
{: aria-label='Fields' }

______
### doors
{: aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .doors
{: aria-label='Fields' }

______
### lastWorldHeading
{: aria-label='Fields' }
#### number .lastWorldHeading
{: aria-label='Fields' }

______
### lastWorldPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastWorldPosition
{: aria-label='Fields' }

______
### rooms
{: aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .rooms
{: aria-label='Fields' }

______
### shipBox
{: aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .shipBox
{: aria-label='Fields' }

______
### shipName
{: aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }

______
### worldHeading
{: aria-label='Fields' }
#### number .worldHeading
{: aria-label='Fields' }

______
### worldPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .worldPosition
{: aria-label='Fields' }

___
