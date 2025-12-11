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

______
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

______
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

______
### droneImage_off
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_off
{: aria-label='Fields' }

______
### droneImage_on
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_on
{: aria-label='Fields' }

______
### explosion
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

______
### extending
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .extending
{: aria-label='Fields' }

______
### finalDestination
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .finalDestination
{: aria-label='Fields' }

______
### finishedSetup
{: aria-label='Fields' }
#### boolean .finishedSetup
{: aria-label='Fields' }

______
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

______
### flying
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flying
{: aria-label='Fields' }

______
### lightImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .lightImage
{: aria-label='Fields' }

______
### prefRoom
{: aria-label='Fields' }
#### integer .prefRoom
{: aria-label='Fields' }

______
### startingPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Fields' }

___
