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
{: aria-label='Functions' }
#### void :Update ()
{: aria-label='Functions' }

___


## Fields
### bArrived
{: aria-label='Variables' }
#### boolean .bArrived
{: aria-label='Variables' }
If the shard has reached its destination.

______
### bDone (Read-only)
{: aria-label='Variables' }
#### boolean .bDone
{: aria-label='Variables' }
**Read-only**
If the shard has completed its lifetime and is marked for removal.

______
### extend (Read-only)
{: aria-label='Variables' }
#### [LockdownShard_Extend](../Hyperspace/LockdownShard_Extend) .extend
{: aria-label='Variables' }
**Read-only**
The associated extend object for this instance.

______
### goal
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .goal
{: aria-label='Variables' }
The location where the shard is heading, if it is not already there.

______
### lifeTime
{: aria-label='Variables' }
#### number .lifeTime
{: aria-label='Variables' }
The remaining time in seconds until this shard disappears.

______
### lockingRoom (Read-only)
{: aria-label='Variables' }
#### integer .lockingRoom
{: aria-label='Variables' }
**Read-only**
The room that this shard is locking down.

______
### position
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Variables' }
The current position of the shard.

______
### shard
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .shard
{: aria-label='Variables' }
The animation used for the shard visual.

______
### speed
{: aria-label='Variables' }
#### number .speed
{: aria-label='Variables' }
The rate at which the shard is moving.

______
### superFreeze
{: aria-label='Variables' }
#### boolean .superFreeze
{: aria-label='Variables' }
If false, the shard will gradually complete its animation over the course of its lifetime. If true, the shard will not animation until the end of its lifetime, and will start the animation then at a faster pace.

___
