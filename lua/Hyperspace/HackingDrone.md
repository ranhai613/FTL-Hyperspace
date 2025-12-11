---
layout: lua
title: HackingDrone
lang: en
---

# Class "HackingDrone"

Extends: [SpaceDrone](../Hyperspace/SpaceDrone)


## Constructors
### HackingDrone ()
{: aria-label='Constructors' }
#### [HackingDrone](../Hyperspace/HackingDrone) HackingDrone ()
{: aria-label='Constructors' }

___




## Methods
### CollisionMoving ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
### arrived
{: aria-label='Fields' }
#### boolean .arrived
{: aria-label='Fields' }

___
### droneImage_off
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_off
{: aria-label='Fields' }

___
### droneImage_on
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_on
{: aria-label='Fields' }

___
### explosion
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

___
### extending
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .extending
{: aria-label='Fields' }

___
### finalDestination
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .finalDestination
{: aria-label='Fields' }

___
### finishedSetup
{: aria-label='Fields' }
#### boolean .finishedSetup
{: aria-label='Fields' }

___
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### flying
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flying
{: aria-label='Fields' }

___
### lightImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lightImage
{: aria-label='Fields' }

___
### prefRoom
{: aria-label='Fields' }
#### integer .prefRoom
{: aria-label='Fields' }

___
### startingPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Fields' }

___
