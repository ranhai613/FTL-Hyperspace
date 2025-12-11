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
{: aria-label='Methods' }
#### boolean :CanBeDeployed ()
{: aria-label='Methods' }

___
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
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
### bDeliveredDrone
{: aria-label='Fields' }
#### boolean .bDeliveredDrone
{: aria-label='Fields' }

___
### baseSheet
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseSheet
{: aria-label='Fields' }

___
### boarderDrone
{: aria-label='Fields' }
#### BoarderDrone .boarderDrone
{: aria-label='Fields' }

___
### colorSheet
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorSheet
{: aria-label='Fields' }

___
### diedInSpace
{: aria-label='Fields' }
#### boolean .diedInSpace
{: aria-label='Fields' }

___
### droneImage
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .droneImage
{: aria-label='Fields' }

___
### flame
{: aria-label='Fields' }
#### CachedImage .flame
{: aria-label='Fields' }

___
### startingPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Fields' }

___
