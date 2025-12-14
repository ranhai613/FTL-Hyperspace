---
layout: lua
title: LockdownShard_Extend
lang: en
category: Class
---

# Class "LockdownShard_Extend"

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/_head.md" -->






## Fields
{: #Fields .lua-content-section}
### anim (Read-only)
{: #anim .lua-content-item aria-label='Fields' }
#### string .anim
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/anim.md" -->
**Read-Only**
The name of the animation for this shard. Used for restoring animations on save/load.
<!-- End of content -->

___
### canDilate
{: #canDilate .lua-content-item aria-label='Fields' }
#### boolean .canDilate
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/canDilate.md" -->
If this shard is affected by time dilation.
<!-- End of content -->

___
### color
{: #color .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/color.md" -->
The color that this shard is tinted.
<!-- End of content -->

___
### door (Read-only)
{: #door .lua-content-item aria-label='Fields' }
#### [Door](../Hyperspace/Door) .door
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/door.md" -->
**Read-Only**
The door that this shard is locking down, if any. Nil if no associated door.
<!-- End of content -->

___
### health
{: #health .lua-content-item aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/LockdownShard_Extend/health.md" -->
The current health of the shard. Is reduced by 1 for each hit from a crew member with base door damage. Only matters for door shards.
<!-- End of content -->

___
