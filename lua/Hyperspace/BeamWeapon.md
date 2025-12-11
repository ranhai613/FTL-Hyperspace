---
layout: lua
title: BeamWeapon
lang: en
---

# Class "BeamWeapon"

Extends: [Projectile](../Hyperspace/Projectile)


## Constructors
### BeamWeapon ()
{: aria-label='Constructors' }
#### [BeamWeapon](../Hyperspace/BeamWeapon) BeamWeapon ([Pointf](../Hyperspace/Pointf) _position, integer _ownerId, integer _targetId, [Pointf](../Hyperspace/Pointf) _target, [Pointf](../Hyperspace/Pointf) _target2, integer _length, [Targetable](../Hyperspace/Targetable) _targetable, number _heading=0.0f)
{: aria-label='Constructors' }

___




## Methods
### OnRenderSpecific ()
{: aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

___


## Fields
### animationTimer
{: aria-label='Fields' }
#### number .animationTimer
{: aria-label='Fields' }

___
### bDamageSuperShield
{: aria-label='Fields' }
#### boolean .bDamageSuperShield
{: aria-label='Fields' }

___
### checkedCollision
{: aria-label='Fields' }
#### boolean .checkedCollision
{: aria-label='Fields' }

___
### contactAnimations
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .contactAnimations
{: aria-label='Fields' }

___
### dh
{: aria-label='Fields' }
#### number .dh
{: aria-label='Fields' }

___
### final_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .final_end
{: aria-label='Fields' }

___
### lastDamage
{: aria-label='Fields' }
#### integer .lastDamage
{: aria-label='Fields' }

___
### lastSmokeAnim
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastSmokeAnim
{: aria-label='Fields' }

___
### last_collision
{: aria-label='Fields' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) .last_collision
{: aria-label='Fields' }

___
### length
{: aria-label='Fields' }
#### number .length
{: aria-label='Fields' }

___
### lifespan
{: aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

___
### movingTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movingTarget
{: aria-label='Fields' }

___
### movingTargetId
{: aria-label='Fields' }
#### integer .movingTargetId
{: aria-label='Fields' }

___
### oneSpace
{: aria-label='Fields' }
#### boolean .oneSpace
{: aria-label='Fields' }

___
### piercedShield
{: aria-label='Fields' }
#### boolean .piercedShield
{: aria-label='Fields' }

___
### shield_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shield_end
{: aria-label='Fields' }

___
### smokeAnims
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .smokeAnims
{: aria-label='Fields' }

___
### soundChannel
{: aria-label='Fields' }
#### integer .soundChannel
{: aria-label='Fields' }

___
### start_heading
{: aria-label='Fields' }
#### number .start_heading
{: aria-label='Fields' }

___
### sub_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_end
{: aria-label='Fields' }

___
### sub_start
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_start
{: aria-label='Fields' }

___
### target1
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target1
{: aria-label='Fields' }

___
### target2
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target2
{: aria-label='Fields' }

___
### timer
{: aria-label='Fields' }
#### number .timer
{: aria-label='Fields' }

___
### weapAnimation
{: aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weapAnimation
{: aria-label='Fields' }

___
