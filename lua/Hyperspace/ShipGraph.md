---
layout: lua
title: ShipGraph
lang: en
category: Class
---

# Class "ShipGraph"




## Static Methods
{: #Static-Methods .lua-content-section}
### GetShipInfo ()
{: #GetShipInfo .lua-content-item aria-label='StaticMethods' }
#### [ShipGraph](../Hyperspace/ShipGraph) .GetShipInfo (integer shipId)
{: aria-label='StaticMethods' }

___
### TranslateFromGrid ()
{: #TranslateFromGrid .lua-content-item aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateFromGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }

___
### TranslateToGrid ()
{: #TranslateToGrid .lua-content-item aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateToGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### ComputeCenter ()
{: #ComputeCenter .lua-content-item aria-label='Methods' }
#### void :ComputeCenter ()
{: aria-label='Methods' }

___
### ConnectedGridSquares ()
{: #ConnectedGridSquares .lua-content-item aria-label='Methods' }
#### integer :ConnectedGridSquares (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

___
### ConnectedGridSquaresPoint ()
{: #ConnectedGridSquaresPoint .lua-content-item aria-label='Methods' }
#### integer :ConnectedGridSquaresPoint ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

___
### ConnectingDoor ()
{: #ConnectingDoor .lua-content-item aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }

___
### ConnectingDoor ()
{: #ConnectingDoor .lua-content-item aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }

___
### ConnectivityDFS ()
{: #ConnectivityDFS .lua-content-item aria-label='Methods' }
#### vector\<integer\> :ConnectivityDFS (integer roomId)
{: aria-label='Methods' }

___
### ContainsPoint ()
{: #ContainsPoint .lua-content-item aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

___
### ConvertToLocalAngle ()
{: #ConvertToLocalAngle .lua-content-item aria-label='Methods' }
#### number :ConvertToLocalAngle (number ang)
{: aria-label='Methods' }

___
### ConvertToLocalPosition ()
{: #ConvertToLocalPosition .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToLocalPosition ([Pointf](../Hyperspace/Pointf) world, boolean past)
{: aria-label='Methods' }

___
### ConvertToWorldAngle ()
{: #ConvertToWorldAngle .lua-content-item aria-label='Methods' }
#### number :ConvertToWorldAngle (number ang)
{: aria-label='Methods' }

___
### ConvertToWorldPosition ()
{: #ConvertToWorldPosition .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToWorldPosition ([Pointf](../Hyperspace/Pointf) local)
{: aria-label='Methods' }

___
### Dijkstra ()
{: #Dijkstra .lua-content-item aria-label='Methods' }
#### Path :Dijkstra ([Point](../Hyperspace/Point) start, [Point](../Hyperspace/Point) goal, integer shipId)
{: aria-label='Methods' }

___
### DoorCount ()
{: #DoorCount .lua-content-item aria-label='Methods' }
#### integer :DoorCount (integer roomId)
{: aria-label='Methods' }

___
### FindPath ()
{: #FindPath .lua-content-item aria-label='Methods' }
#### Path :FindPath ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2, integer shipId)
{: aria-label='Methods' }

___
### GetClosestSlot ()
{: #GetClosestSlot .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetClosestSlot ([Point](../Hyperspace/Point) pos, integer shipId, boolean intruder)
{: aria-label='Methods' }

___
### GetDoors ()
{: #GetDoors .lua-content-item aria-label='Methods' }
#### vector\<[Door](../Hyperspace/Door)\> :GetDoors (integer roomId)
{: aria-label='Methods' }

___
### GetIntoRoom ()
{: #GetIntoRoom .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetIntoRoom (integer roomId, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### GetNumSlots ()
{: #GetNumSlots .lua-content-item aria-label='Methods' }
#### integer :GetNumSlots (integer room)
{: aria-label='Methods' }

___
### GetRoomBlackedOut ()
{: #GetRoomBlackedOut .lua-content-item aria-label='Methods' }
#### boolean :GetRoomBlackedOut (integer room)
{: aria-label='Methods' }

___
### GetRoomCenter ()
{: #GetRoomCenter .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }

___
### GetRoomOxygen ()
{: #GetRoomOxygen .lua-content-item aria-label='Methods' }
#### number :GetRoomOxygen (integer room)
{: aria-label='Methods' }

___
### GetRoomShape ()
{: #GetRoomShape .lua-content-item aria-label='Methods' }
#### [Rect](../Hyperspace/Rect) :GetRoomShape (integer room)
{: aria-label='Methods' }

___
### GetSelectedRoom ()
{: #GetSelectedRoom .lua-content-item aria-label='Methods' }
#### integer :GetSelectedRoom (integer x, integer y, boolean unk)
{: aria-label='Methods' }

___
### GetSlotRenderPosition ()
{: #GetSlotRenderPosition .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotRenderPosition (integer slotId, integer roomId, boolean intruder)
{: aria-label='Methods' }

___
### GetSlotWorldPosition ()
{: #GetSlotWorldPosition .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotWorldPosition (integer slotId, integer roomId)
{: aria-label='Methods' }

___
### IsRoomConnected ()
{: #IsRoomConnected .lua-content-item aria-label='Methods' }
#### boolean :IsRoomConnected (integer room1, integer room2)
{: aria-label='Methods' }

___
### PopClosestDoor ()
{: #PopClosestDoor .lua-content-item aria-label='Methods' }
#### integer :PopClosestDoor (vector\<integer\> doors, vector\<number\> distances)
{: aria-label='Methods' }

___
### RoomCount ()
{: #RoomCount .lua-content-item aria-label='Methods' }
#### integer :RoomCount ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### center
{: #center .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }

___
### doorCounts
{: #doorCounts .lua-content-item aria-label='Fields' }
#### vector\<integer\> .doorCounts
{: aria-label='Fields' }

___
### doors
{: #doors .lua-content-item aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .doors
{: aria-label='Fields' }

___
### lastWorldHeading
{: #lastWorldHeading .lua-content-item aria-label='Fields' }
#### number .lastWorldHeading
{: aria-label='Fields' }

___
### lastWorldPosition
{: #lastWorldPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastWorldPosition
{: aria-label='Fields' }

___
### rooms
{: #rooms .lua-content-item aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .rooms
{: aria-label='Fields' }

___
### shipBox
{: #shipBox .lua-content-item aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .shipBox
{: aria-label='Fields' }

___
### shipName
{: #shipName .lua-content-item aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }

___
### worldHeading
{: #worldHeading .lua-content-item aria-label='Fields' }
#### number .worldHeading
{: aria-label='Fields' }

___
### worldPosition
{: #worldPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .worldPosition
{: aria-label='Fields' }

___
