---
layout: lua
title: CustomLockdownDefinition
lang: en
---

# Class "CustomLockdownDefinition"


## Constructors
{: #Constructors .lua-content-section}
### CustomLockdownDefinition ()
{: #CustomLockdownDefinition .lua-content-item aria-label='Constructors' }
#### [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) CustomLockdownDefinition ()
{: aria-label='Constructors' }

___





## Fields
{: #Fields .lua-content-section}
### anims
{: #anims .lua-content-item aria-label='Fields' }
#### vector\<string\> .anims
{: aria-label='Fields' }
A selection of animation names for each shard to use.
Wall shards will use a random animation from the list.
Door shards will use the first animation from the list.

___
### canDilate
{: #canDilate .lua-content-item aria-label='Fields' }
#### boolean .canDilate
{: aria-label='Fields' }
If this lockdown is affected by time dilation.

___
### color
{: #color .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
The color that each shard will be tinted.

___
### duration
{: #duration .lua-content-item aria-label='Fields' }
#### number .duration
{: aria-label='Fields' }
The amount of time that this lockdown will last, in seconds.

___
### health
{: #health .lua-content-item aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }
The health of each shard.

___
