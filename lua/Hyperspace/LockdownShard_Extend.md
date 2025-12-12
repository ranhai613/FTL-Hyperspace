---
layout: lua
title: LockdownShard_Extend
lang: en
---

# Class "LockdownShard_Extend"






## Fields
{: #Fields .lua-content-section}
### anim (Read-only)
{: #anim .lua-content-item aria-label='Fields' }
#### string .anim
{: aria-label='Fields' }
**Read-Only**
The name of the animation for this shard. Used for restoring animations on save/load.

___
### canDilate
{: #canDilate .lua-content-item aria-label='Fields' }
#### boolean .canDilate
{: aria-label='Fields' }
If this shard is affected by time dilation.

___
### color
{: #color .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
The color that this shard is tinted.

___
### door (Read-only)
{: #door .lua-content-item aria-label='Fields' }
#### [Door](../Hyperspace/Door) .door
{: aria-label='Fields' }
**Read-Only**
The door that this shard is locking down, if any. Nil if no associated door.

___
### health
{: #health .lua-content-item aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }
The current health of the shard. Is reduced by 1 for each hit from a crew member with base door damage. Only matters for door shards.

___
