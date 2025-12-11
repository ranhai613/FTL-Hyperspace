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
{: aria-label='Fields' }
#### vector\<string\> .anims
{: aria-label='Fields' }
A selection of animation names for each shard to use.
Wall shards will use a random animation from the list.
Door shards will use the first animation from the list.

______
### canDilate
{: aria-label='Fields' }
#### boolean .canDilate
{: aria-label='Fields' }
If this lockdown is affected by time dilation.

______
### color
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
The color that each shard will be tinted.

______
### duration
{: aria-label='Fields' }
#### number .duration
{: aria-label='Fields' }
The amount of time that this lockdown will last, in seconds.

______
### health
{: aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }
The health of each shard.

___
