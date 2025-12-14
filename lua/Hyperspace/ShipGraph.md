---
layout: lua
title: ShipGraph
lang: en
category: Class
---

# Class "ShipGraph"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/_head.md" -->




## Static Methods
{: #Static-Methods .lua-content-section}
### GetShipInfo ()
{: #GetShipInfo .lua-content-item aria-label='StaticMethods' }
#### [ShipGraph](../Hyperspace/ShipGraph) .GetShipInfo (integer shipId)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetShipInfo(integer).md" -->

___
### TranslateFromGrid ()
{: #TranslateFromGrid .lua-content-item aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateFromGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/TranslateFromGrid(integer,integer).md" -->

___
### TranslateToGrid ()
{: #TranslateToGrid .lua-content-item aria-label='StaticMethods' }
#### [Point](../Hyperspace/Point) .TranslateToGrid (integer xx, integer yy)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/TranslateToGrid(integer,integer).md" -->

___


## Methods
{: #Methods .lua-content-section}
### ComputeCenter ()
{: #ComputeCenter .lua-content-item aria-label='Methods' }
#### void :ComputeCenter ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ComputeCenter().md" -->

___
### ConnectedGridSquares ()
{: #ConnectedGridSquares .lua-content-item aria-label='Methods' }
#### integer :ConnectedGridSquares (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConnectedGridSquares(integer,integer,integer,integer).md" -->

___
### ConnectedGridSquaresPoint ()
{: #ConnectedGridSquaresPoint .lua-content-item aria-label='Methods' }
#### integer :ConnectedGridSquaresPoint ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConnectedGridSquaresPoint(Hyperspace.Point,Hyperspace.Point).md" -->

___
### ConnectingDoor ()
{: #ConnectingDoor .lua-content-item aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor (integer x1, integer y1, integer x2, integer y2)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConnectingDoor(integer,integer,integer,integer).md" -->

___
### ConnectingDoor ()
{: #ConnectingDoor .lua-content-item aria-label='Methods' }
#### [Door](../Hyperspace/Door) :ConnectingDoor ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConnectingDoor(Hyperspace.Point,Hyperspace.Point).md" -->

___
### ConnectivityDFS ()
{: #ConnectivityDFS .lua-content-item aria-label='Methods' }
#### vector\<integer\> :ConnectivityDFS (integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConnectivityDFS(integer).md" -->

___
### ContainsPoint ()
{: #ContainsPoint .lua-content-item aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ContainsPoint(integer,integer).md" -->

___
### ConvertToLocalAngle ()
{: #ConvertToLocalAngle .lua-content-item aria-label='Methods' }
#### number :ConvertToLocalAngle (number ang)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConvertToLocalAngle(number).md" -->

___
### ConvertToLocalPosition ()
{: #ConvertToLocalPosition .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToLocalPosition ([Pointf](../Hyperspace/Pointf) world, boolean past)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConvertToLocalPosition(Hyperspace.Pointf,boolean).md" -->

___
### ConvertToWorldAngle ()
{: #ConvertToWorldAngle .lua-content-item aria-label='Methods' }
#### number :ConvertToWorldAngle (number ang)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConvertToWorldAngle(number).md" -->

___
### ConvertToWorldPosition ()
{: #ConvertToWorldPosition .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :ConvertToWorldPosition ([Pointf](../Hyperspace/Pointf) local)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/ConvertToWorldPosition(Hyperspace.Pointf).md" -->

___
### Dijkstra ()
{: #Dijkstra .lua-content-item aria-label='Methods' }
#### Path :Dijkstra ([Point](../Hyperspace/Point) start, [Point](../Hyperspace/Point) goal, integer shipId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/Dijkstra(Hyperspace.Point,Hyperspace.Point,integer).md" -->

___
### DoorCount ()
{: #DoorCount .lua-content-item aria-label='Methods' }
#### integer :DoorCount (integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/DoorCount(integer).md" -->

___
### FindPath ()
{: #FindPath .lua-content-item aria-label='Methods' }
#### Path :FindPath ([Point](../Hyperspace/Point) p1, [Point](../Hyperspace/Point) p2, integer shipId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/FindPath(Hyperspace.Point,Hyperspace.Point,integer).md" -->

___
### GetClosestSlot ()
{: #GetClosestSlot .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetClosestSlot ([Point](../Hyperspace/Point) pos, integer shipId, boolean intruder)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetClosestSlot(Hyperspace.Point,integer,boolean).md" -->

___
### GetDoors ()
{: #GetDoors .lua-content-item aria-label='Methods' }
#### vector\<[Door](../Hyperspace/Door)\> :GetDoors (integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetDoors(integer).md" -->

___
### GetIntoRoom ()
{: #GetIntoRoom .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetIntoRoom (integer roomId, [Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetIntoRoom(integer,Hyperspace.Point).md" -->

___
### GetNumSlots ()
{: #GetNumSlots .lua-content-item aria-label='Methods' }
#### integer :GetNumSlots (integer room)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetNumSlots(integer).md" -->

___
### GetRoomBlackedOut ()
{: #GetRoomBlackedOut .lua-content-item aria-label='Methods' }
#### boolean :GetRoomBlackedOut (integer room)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetRoomBlackedOut(integer).md" -->

___
### GetRoomCenter ()
{: #GetRoomCenter .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRoomCenter (integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetRoomCenter(integer).md" -->

___
### GetRoomOxygen ()
{: #GetRoomOxygen .lua-content-item aria-label='Methods' }
#### number :GetRoomOxygen (integer room)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetRoomOxygen(integer).md" -->

___
### GetRoomShape ()
{: #GetRoomShape .lua-content-item aria-label='Methods' }
#### [Rect](../Hyperspace/Rect) :GetRoomShape (integer room)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetRoomShape(integer).md" -->

___
### GetSelectedRoom ()
{: #GetSelectedRoom .lua-content-item aria-label='Methods' }
#### integer :GetSelectedRoom (integer x, integer y, boolean unk)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetSelectedRoom(integer,integer,boolean).md" -->

___
### GetSlotRenderPosition ()
{: #GetSlotRenderPosition .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotRenderPosition (integer slotId, integer roomId, boolean intruder)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetSlotRenderPosition(integer,integer,boolean).md" -->

___
### GetSlotWorldPosition ()
{: #GetSlotWorldPosition .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetSlotWorldPosition (integer slotId, integer roomId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/GetSlotWorldPosition(integer,integer).md" -->

___
### IsRoomConnected ()
{: #IsRoomConnected .lua-content-item aria-label='Methods' }
#### boolean :IsRoomConnected (integer room1, integer room2)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/IsRoomConnected(integer,integer).md" -->

___
### PopClosestDoor ()
{: #PopClosestDoor .lua-content-item aria-label='Methods' }
#### integer :PopClosestDoor (vector\<integer\> doors, vector\<number\> distances)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/PopClosestDoor(vector_integer_,vector_number_).md" -->

___
### RoomCount ()
{: #RoomCount .lua-content-item aria-label='Methods' }
#### integer :RoomCount ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/RoomCount().md" -->

___


## Fields
{: #Fields .lua-content-section}
### center
{: #center .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .center
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/center.md" -->

___
### doorCounts
{: #doorCounts .lua-content-item aria-label='Fields' }
#### vector\<integer\> .doorCounts
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/doorCounts.md" -->

___
### doors
{: #doors .lua-content-item aria-label='Fields' }
#### vector\<[Door](../Hyperspace/Door)\> .doors
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/doors.md" -->

___
### lastWorldHeading
{: #lastWorldHeading .lua-content-item aria-label='Fields' }
#### number .lastWorldHeading
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/lastWorldHeading.md" -->

___
### lastWorldPosition
{: #lastWorldPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastWorldPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/lastWorldPosition.md" -->

___
### rooms
{: #rooms .lua-content-item aria-label='Fields' }
#### vector\<[Room](../Hyperspace/Room)\> .rooms
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/rooms.md" -->

___
### shipBox
{: #shipBox .lua-content-item aria-label='Fields' }
#### [Rect](../Hyperspace/Rect) .shipBox
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/shipBox.md" -->

___
### shipName
{: #shipName .lua-content-item aria-label='Fields' }
#### string .shipName
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/shipName.md" -->

___
### worldHeading
{: #worldHeading .lua-content-item aria-label='Fields' }
#### number .worldHeading
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/worldHeading.md" -->

___
### worldPosition
{: #worldPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .worldPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ShipGraph/worldPosition.md" -->

___
