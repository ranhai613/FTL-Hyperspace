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

______
### bDamageSuperShield
{: aria-label='Fields' }
#### boolean .bDamageSuperShield
{: aria-label='Fields' }

______
### checkedCollision
{: aria-label='Fields' }
#### boolean .checkedCollision
{: aria-label='Fields' }

______
### contactAnimations
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .contactAnimations
{: aria-label='Fields' }

______
### dh
{: aria-label='Fields' }
#### number .dh
{: aria-label='Fields' }

______
### final_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .final_end
{: aria-label='Fields' }

______
### lastDamage
{: aria-label='Fields' }
#### integer .lastDamage
{: aria-label='Fields' }

______
### lastSmokeAnim
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastSmokeAnim
{: aria-label='Fields' }

______
### last_collision
{: aria-label='Fields' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) .last_collision
{: aria-label='Fields' }

______
### length
{: aria-label='Fields' }
#### number .length
{: aria-label='Fields' }

______
### lifespan
{: aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

______
### movingTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movingTarget
{: aria-label='Fields' }

______
### movingTargetId
{: aria-label='Fields' }
#### integer .movingTargetId
{: aria-label='Fields' }

______
### oneSpace
{: aria-label='Fields' }
#### boolean .oneSpace
{: aria-label='Fields' }

______
### piercedShield
{: aria-label='Fields' }
#### boolean .piercedShield
{: aria-label='Fields' }

______
### shield_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shield_end
{: aria-label='Fields' }

______
### smokeAnims
{: aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .smokeAnims
{: aria-label='Fields' }

______
### soundChannel
{: aria-label='Fields' }
#### integer .soundChannel
{: aria-label='Fields' }

______
### start_heading
{: aria-label='Fields' }
#### number .start_heading
{: aria-label='Fields' }

______
### sub_end
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_end
{: aria-label='Fields' }

______
### sub_start
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_start
{: aria-label='Fields' }

______
### target1
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target1
{: aria-label='Fields' }

______
### target2
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target2
{: aria-label='Fields' }

______
### timer
{: aria-label='Fields' }
#### number .timer
{: aria-label='Fields' }

______
### weapAnimation
{: aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weapAnimation
{: aria-label='Fields' }

___
