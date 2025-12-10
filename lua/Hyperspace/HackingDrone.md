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
{: aria-label='Functions' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Functions' }

______
### OnLoop ()
{: aria-label='Functions' }
#### void :OnLoop ()
{: aria-label='Functions' }

______
### SetMovementTarget ()
{: aria-label='Functions' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

___


## Fields
### arrived
{: aria-label='Variables' }
#### boolean .arrived
{: aria-label='Variables' }

______
### droneImage_off
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_off
{: aria-label='Variables' }

______
### droneImage_on
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .droneImage_on
{: aria-label='Variables' }

______
### explosion
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Variables' }

______
### extending
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .extending
{: aria-label='Variables' }

______
### finalDestination
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .finalDestination
{: aria-label='Variables' }

______
### finishedSetup
{: aria-label='Variables' }
#### boolean .finishedSetup
{: aria-label='Variables' }

______
### flashTracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Variables' }

______
### flying
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .flying
{: aria-label='Variables' }

______
### lightImage
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .lightImage
{: aria-label='Variables' }

______
### prefRoom
{: aria-label='Variables' }
#### integer .prefRoom
{: aria-label='Variables' }

______
### startingPosition
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Variables' }

___
