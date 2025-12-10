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
{: aria-label='Functions' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Functions' }

___


## Fields
### animationTimer
{: aria-label='Variables' }
#### number .animationTimer
{: aria-label='Variables' }

______
### bDamageSuperShield
{: aria-label='Variables' }
#### boolean .bDamageSuperShield
{: aria-label='Variables' }

______
### checkedCollision
{: aria-label='Variables' }
#### boolean .checkedCollision
{: aria-label='Variables' }

______
### contactAnimations
{: aria-label='Variables' }
#### vector\<[Animation](../Hyperspace/Animation)\> .contactAnimations
{: aria-label='Variables' }

______
### dh
{: aria-label='Variables' }
#### number .dh
{: aria-label='Variables' }

______
### final_end
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .final_end
{: aria-label='Variables' }

______
### lastDamage
{: aria-label='Variables' }
#### integer .lastDamage
{: aria-label='Variables' }

______
### lastSmokeAnim
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .lastSmokeAnim
{: aria-label='Variables' }

______
### last_collision
{: aria-label='Variables' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) .last_collision
{: aria-label='Variables' }

______
### length
{: aria-label='Variables' }
#### number .length
{: aria-label='Variables' }

______
### lifespan
{: aria-label='Variables' }
#### number .lifespan
{: aria-label='Variables' }

______
### movingTarget
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) .movingTarget
{: aria-label='Variables' }

______
### movingTargetId
{: aria-label='Variables' }
#### integer .movingTargetId
{: aria-label='Variables' }

______
### oneSpace
{: aria-label='Variables' }
#### boolean .oneSpace
{: aria-label='Variables' }

______
### piercedShield
{: aria-label='Variables' }
#### boolean .piercedShield
{: aria-label='Variables' }

______
### shield_end
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .shield_end
{: aria-label='Variables' }

______
### smokeAnims
{: aria-label='Variables' }
#### vector\<[Animation](../Hyperspace/Animation)\> .smokeAnims
{: aria-label='Variables' }

______
### soundChannel
{: aria-label='Variables' }
#### integer .soundChannel
{: aria-label='Variables' }

______
### start_heading
{: aria-label='Variables' }
#### number .start_heading
{: aria-label='Variables' }

______
### sub_end
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .sub_end
{: aria-label='Variables' }

______
### sub_start
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .sub_start
{: aria-label='Variables' }

______
### target1
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .target1
{: aria-label='Variables' }

______
### target2
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .target2
{: aria-label='Variables' }

______
### timer
{: aria-label='Variables' }
#### number .timer
{: aria-label='Variables' }

______
### weapAnimation
{: aria-label='Variables' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weapAnimation
{: aria-label='Variables' }

___
