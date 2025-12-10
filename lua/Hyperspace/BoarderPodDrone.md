---
layout: lua
title: BoarderPodDrone
lang: en
---

# Class "BoarderPodDrone"

Extends: [SpaceDrone](../Hyperspace/SpaceDrone)


## Constructors
### BoarderPodDrone ()
{: aria-label='Constructors' }
#### [BoarderPodDrone](../Hyperspace/BoarderPodDrone) BoarderPodDrone (integer _iShipId, integer _selfId, [DroneBlueprint](../Hyperspace/DroneBlueprint) _bp)
{: aria-label='Constructors' }

___




## Methods
### CanBeDeployed ()
{: aria-label='Functions' }
#### boolean :CanBeDeployed ()
{: aria-label='Functions' }

______
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
### SetDeployed ()
{: aria-label='Functions' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Functions' }

______
### SetMovementTarget ()
{: aria-label='Functions' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

___


## Fields
### bDeliveredDrone
{: aria-label='Variables' }
#### boolean .bDeliveredDrone
{: aria-label='Variables' }

______
### baseSheet
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .baseSheet
{: aria-label='Variables' }

______
### boarderDrone
{: aria-label='Variables' }
#### BoarderDrone .boarderDrone
{: aria-label='Variables' }

______
### colorSheet
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .colorSheet
{: aria-label='Variables' }

______
### diedInSpace
{: aria-label='Variables' }
#### boolean .diedInSpace
{: aria-label='Variables' }

______
### droneImage
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .droneImage
{: aria-label='Variables' }

______
### flame
{: aria-label='Variables' }
#### CachedImage .flame
{: aria-label='Variables' }

______
### startingPosition
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Variables' }

___
