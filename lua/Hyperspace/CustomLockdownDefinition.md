---
layout: lua
title: CustomLockdownDefinition
lang: en
---

# Class "CustomLockdownDefinition"


## Constructors
### CustomLockdownDefinition ()
{: aria-label='Constructors' }
#### [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) CustomLockdownDefinition ()
{: aria-label='Constructors' }

___





## Fields
### anims
{: aria-label='Variables' }
#### vector\<string\> .anims
{: aria-label='Variables' }
A selection of animation names for each shard to use.
Wall shards will use a random animation from the list.
Door shards will use the first animation from the list.

______
### canDilate
{: aria-label='Variables' }
#### boolean .canDilate
{: aria-label='Variables' }
If this lockdown is affected by time dilation.

______
### color
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Variables' }
The color that each shard will be tinted.

______
### duration
{: aria-label='Variables' }
#### number .duration
{: aria-label='Variables' }
The amount of time that this lockdown will last, in seconds.

______
### health
{: aria-label='Variables' }
#### integer .health
{: aria-label='Variables' }
The health of each shard.

___
