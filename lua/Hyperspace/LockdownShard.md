---
layout: lua
title: LockdownShard
lang: en
---

# Class "LockdownShard"


## Constructors
{: #Constructors .section}
### LockdownShard ()
{: #LockdownShard aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard ()
{: aria-label='Constructors' }

___
### LockdownShard ()
{: #LockdownShard aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer lockingRoom, [Pointf](../Hyperspace/Pointf) start, [Point](../Hyperspace/Point) goal, boolean superFreeze)
{: aria-label='Constructors' }

___
### LockdownShard ()
{: #LockdownShard aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer fd)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
### Update ()
{: #Update aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### bArrived
{: #bArrived aria-label='Fields' }
#### boolean .bArrived
{: aria-label='Fields' }
If the shard has reached its destination.

___
### bDone (Read-only)
{: #bDone aria-label='Fields' }
#### boolean .bDone
{: aria-label='Fields' }
**Read-only**
If the shard has completed its lifetime and is marked for removal.

___
### extend (Read-only)
{: #extend aria-label='Fields' }
#### [LockdownShard_Extend](../Hyperspace/LockdownShard_Extend) .extend
{: aria-label='Fields' }
**Read-only**
The associated extend object for this instance.

___
### goal
{: #goal aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .goal
{: aria-label='Fields' }
The location where the shard is heading, if it is not already there.

___
### lifeTime
{: #lifeTime aria-label='Fields' }
#### number .lifeTime
{: aria-label='Fields' }
The remaining time in seconds until this shard disappears.

___
### lockingRoom (Read-only)
{: #lockingRoom aria-label='Fields' }
#### integer .lockingRoom
{: aria-label='Fields' }
**Read-only**
The room that this shard is locking down.

___
### position
{: #position aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }
The current position of the shard.

___
### shard
{: #shard aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .shard
{: aria-label='Fields' }
The animation used for the shard visual.

___
### speed
{: #speed aria-label='Fields' }
#### number .speed
{: aria-label='Fields' }
The rate at which the shard is moving.

___
### superFreeze
{: #superFreeze aria-label='Fields' }
#### boolean .superFreeze
{: aria-label='Fields' }
If false, the shard will gradually complete its animation over the course of its lifetime. If true, the shard will not animation until the end of its lifetime, and will start the animation then at a faster pace.

___
