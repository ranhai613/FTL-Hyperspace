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

______
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
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean _deployed)
{: aria-label='Methods' }

______
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

______
### baseSheet
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseSheet
{: aria-label='Fields' }

______
### boarderDrone
{: aria-label='Fields' }
#### BoarderDrone .boarderDrone
{: aria-label='Fields' }

______
### colorSheet
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorSheet
{: aria-label='Fields' }

______
### diedInSpace
{: aria-label='Fields' }
#### boolean .diedInSpace
{: aria-label='Fields' }

______
### droneImage
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .droneImage
{: aria-label='Fields' }

______
### flame
{: aria-label='Fields' }
#### CachedImage .flame
{: aria-label='Fields' }

______
### startingPosition
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startingPosition
{: aria-label='Fields' }

___
