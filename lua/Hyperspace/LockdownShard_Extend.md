---
layout: lua
title: LockdownShard_Extend
lang: en
---

# Class "LockdownShard_Extend"






## Fields
### anim (Read-only)
{: aria-label='Variables' }
#### string .anim
{: aria-label='Variables' }
**Read-Only**
The name of the animation for this shard. Used for restoring animations on save/load.

______
### canDilate
{: aria-label='Variables' }
#### boolean .canDilate
{: aria-label='Variables' }
If this shard is affected by time dilation.

______
### color
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Variables' }
The color that this shard is tinted.

______
### door (Read-only)
{: aria-label='Variables' }
#### [Door](../Hyperspace/Door) .door
{: aria-label='Variables' }
**Read-Only**
The door that this shard is locking down, if any. Nil if no associated door.

______
### health
{: aria-label='Variables' }
#### integer .health
{: aria-label='Variables' }
The current health of the shard. Is reduced by 1 for each hit from a crew member with base door damage. Only matters for door shards.

___
