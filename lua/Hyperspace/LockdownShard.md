---
layout: lua
title: LockdownShard
lang: en
---

# Class "LockdownShard"


## Constructors
### LockdownShard ()
{: aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard ()
{: aria-label='Constructors' }

______
### LockdownShard ()
{: aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer lockingRoom, [Pointf](../Hyperspace/Pointf) start, [Point](../Hyperspace/Point) goal, boolean superFreeze)
{: aria-label='Constructors' }

______
### LockdownShard ()
{: aria-label='Constructors' }
#### [LockdownShard](../Hyperspace/LockdownShard) LockdownShard (integer fd)
{: aria-label='Constructors' }

___




## Methods
### Update ()
{: aria-label='Methods' }
#### void :Update ()
{: aria-label='Methods' }

___


## Fields
### bArrived
{: aria-label='Fields' }
#### boolean .bArrived
{: aria-label='Fields' }
If the shard has reached its destination.

______
### bDone (Read-only)
{: aria-label='Fields' }
#### boolean .bDone
{: aria-label='Fields' }
**Read-only**
If the shard has completed its lifetime and is marked for removal.

______
### extend (Read-only)
{: aria-label='Fields' }
#### [LockdownShard_Extend](../Hyperspace/LockdownShard_Extend) .extend
{: aria-label='Fields' }
**Read-only**
The associated extend object for this instance.

______
### goal
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .goal
{: aria-label='Fields' }
The location where the shard is heading, if it is not already there.

______
### lifeTime
{: aria-label='Fields' }
#### number .lifeTime
{: aria-label='Fields' }
The remaining time in seconds until this shard disappears.

______
### lockingRoom (Read-only)
{: aria-label='Fields' }
#### integer .lockingRoom
{: aria-label='Fields' }
**Read-only**
The room that this shard is locking down.

______
### position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }
The current position of the shard.

______
### shard
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .shard
{: aria-label='Fields' }
The animation used for the shard visual.

______
### speed
{: aria-label='Fields' }
#### number .speed
{: aria-label='Fields' }
The rate at which the shard is moving.

______
### superFreeze
{: aria-label='Fields' }
#### boolean .superFreeze
{: aria-label='Fields' }
If false, the shard will gradually complete its animation over the course of its lifetime. If true, the shard will not animation until the end of its lifetime, and will start the animation then at a faster pace.

___
