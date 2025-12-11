---
layout: lua
title: CustomLockdownDefinition
lang: en
---

# Class "CustomLockdownDefinition"


## Constructors
{: #Constructors .section}
### CustomLockdownDefinition ()
{: #CustomLockdownDefinition aria-label='Constructors' }
#### [CustomLockdownDefinition](../Hyperspace/CustomLockdownDefinition) CustomLockdownDefinition ()
{: aria-label='Constructors' }

___





## Fields
{: #Fields .section}
### anims
{: #anims aria-label='Fields' }
#### vector\<string\> .anims
{: aria-label='Fields' }
A selection of animation names for each shard to use.
Wall shards will use a random animation from the list.
Door shards will use the first animation from the list.

___
### canDilate
{: #canDilate aria-label='Fields' }
#### boolean .canDilate
{: aria-label='Fields' }
If this lockdown is affected by time dilation.

___
### color
{: #color aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
The color that each shard will be tinted.

___
### duration
{: #duration aria-label='Fields' }
#### number .duration
{: aria-label='Fields' }
The amount of time that this lockdown will last, in seconds.

___
### health
{: #health aria-label='Fields' }
#### integer .health
{: aria-label='Fields' }
The health of each shard.

___
