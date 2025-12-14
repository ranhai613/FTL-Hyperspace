---
layout: lua
title: LockdownShard
lang: en
category: Class
---

# Class "LockdownShard"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### LockdownShard ()
{: #LockdownShard .lua-content-item aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard ()
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/LockdownShard().md" -->

___
### LockdownShard ()
{: #LockdownShard .lua-content-item aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer lockingRoom, [Pointf](../Hyperspace/Pointf) start, [Point](../Hyperspace/Point) goal, boolean superFreeze)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/LockdownShard(integer,Hyperspace.Pointf,Hyperspace.Point,boolean).md" -->

___
### LockdownShard ()
{: #LockdownShard .lua-content-item aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer fd)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/LockdownShard(integer).md" -->

___




## Methods
{: #Methods .lua-content-section}
### Update ()
{: #Update .lua-content-item aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/Update().md" -->

___


## Fields
{: #Fields .lua-content-section}
### bArrived
{: #bArrived .lua-content-item aria-label='Fields' }
#### boolean .bArrived
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/bArrived.md" -->
If the shard has reached its destination.
<!-- End of content -->

___
### bDone (Read-only)
{: #bDone .lua-content-item aria-label='Fields' }
#### boolean .bDone
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/bDone.md" -->
**Read-only**
If the shard has completed its lifetime and is marked for removal.
<!-- End of content -->

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [LockdownShard_Extend](../Hyperspace/LockdownShard_Extend) .extend
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/extend.md" -->
**Read-only**
The associated extend object for this instance.
<!-- End of content -->

___
### goal
{: #goal .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .goal
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/goal.md" -->
The location where the shard is heading, if it is not already there.
<!-- End of content -->

___
### lifeTime
{: #lifeTime .lua-content-item aria-label='Fields' }
#### number .lifeTime
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/lifeTime.md" -->
The remaining time in seconds until this shard disappears.
<!-- End of content -->

___
### lockingRoom (Read-only)
{: #lockingRoom .lua-content-item aria-label='Fields' }
#### integer .lockingRoom
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/lockingRoom.md" -->
**Read-only**
The room that this shard is locking down.
<!-- End of content -->

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/position.md" -->
The current position of the shard.
<!-- End of content -->

___
### shard
{: #shard .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .shard
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/shard.md" -->
The animation used for the shard visual.
<!-- End of content -->

___
### speed
{: #speed .lua-content-item aria-label='Fields' }
#### number .speed
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/speed.md" -->
The rate at which the shard is moving.
<!-- End of content -->

___
### superFreeze
{: #superFreeze .lua-content-item aria-label='Fields' }
#### boolean .superFreeze
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard/superFreeze.md" -->
If false, the shard will gradually complete its animation over the course of its lifetime. If true, the shard will not animation until the end of its lifetime, and will start the animation then at a faster pace.
<!-- End of content -->

___
