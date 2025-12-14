---
layout: lua
title: BeamWeapon
lang: en
category: Class
---

# Class "BeamWeapon"


Extends: [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)


## Constructors
{: #Constructors .lua-content-section}
### BeamWeapon ()
{: #BeamWeapon .lua-content-item aria-label='Constructors' }
#### [BeamWeapon](../Hyperspace/BeamWeapon) BeamWeapon ([Pointf](../Hyperspace/Pointf) _position, integer _ownerId, integer _targetId, [Pointf](../Hyperspace/Pointf) _target, [Pointf](../Hyperspace/Pointf) _target2, integer _length, [Targetable](../Hyperspace/Targetable) _targetable, number _heading=0.0f)
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
___
<details markdown="1"><summary id="InheritedStaticMethods" class="lua-content-item" markdown="span">Inherited Static Methods</summary>


#### From [Projectile](Projectile)

| Return Type | Method |
| --- | --- |
| [Pointf](../Hyperspace/Pointf) | .[RandomSidePoint](Projectile#RandomSidePoint) (integer side) |

</details>




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [Collideable](Collideable)

| Return Type | Method |
| --- | --- |
| boolean | :[DamageArea](Collideable#DamageArea) ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) damage, boolean forceHit) |
| boolean | :[DamageBeam](Collideable#DamageBeam) ([Pointf](../Hyperspace/Pointf) current, [Pointf](../Hyperspace/Pointf) last, [Damage](../Hyperspace/Damage) damage) |
| boolean | :[DamageShield](Collideable#DamageShield) ([Pointf](../Hyperspace/Pointf) location, [Damage](../Hyperspace/Damage) damage, boolean forceHit) |
| boolean | :[GetDodged](Collideable#GetDodged) () |
| integer | :[GetOwnerId](Collideable#GetOwnerId) () |
| integer | :[GetSelfId](Collideable#GetSelfId) () |
| integer | :[GetSpaceId](Collideable#GetSpaceId) () |
| [Pointf](../Hyperspace/Pointf) | :[GetSuperShield](Collideable#GetSuperShield) () |
| void | :[SetTempVision](Collideable#SetTempVision) ([Pointf](../Hyperspace/Pointf) location) |
| boolean | :[ValidTargetLocation](Collideable#ValidTargetLocation) ([Pointf](../Hyperspace/Pointf) location) |

#### From [Projectile](Projectile)

| Return Type | Method |
| --- | --- |
| void | :[CollisionCheck](Projectile#CollisionCheck) ([Collideable](../Hyperspace/Collideable) other) |
| [CollisionResponse](../Hyperspace/CollisionResponse) | :[CollisionMoving](Projectile#CollisionMoving) ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace) |
| void | :[ComputeHeading](Projectile#ComputeHeading) () |
| boolean | :[Dead](Projectile#Dead) () |
| void | :[EnterDestinationSpace](Projectile#EnterDestinationSpace) () |
| integer | :[ForceRenderLayer](Projectile#ForceRenderLayer) () |
| [Pointf](../Hyperspace/Pointf) | :[GetRandomTargettingPoint](Projectile#GetRandomTargettingPoint) (boolean valuable) |
| [Pointf](../Hyperspace/Pointf) | :[GetSpeed](Projectile#GetSpeed) () |
| integer | :[GetType](Projectile#GetType) () |
| [Pointf](../Hyperspace/Pointf) | :[GetWorldCenterPoint](Projectile#GetWorldCenterPoint) () |
| void | :[Initialize](Projectile#Initialize) ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp) |
| void | :[Kill](Projectile#Kill) () |
| void | :[LoadProjectile](Projectile#LoadProjectile) (integer fd) |
| void | :[OnUpdate](Projectile#OnUpdate) () |
| void | :[SaveProjectile](Projectile#SaveProjectile) (integer fd) |
| void | :[SetDamage](Projectile#SetDamage) ([Damage](../Hyperspace/Damage) damage) |
| void | :[SetDestinationSpace](Projectile#SetDestinationSpace) (integer space) |
| void | :[SetMovingTarget](Projectile#SetMovingTarget) ([Targetable](../Hyperspace/Targetable) target) |
| void | :[SetSpin](Projectile#SetSpin) (number spin) |
| void | :[SetWeaponAnimation](Projectile#SetWeaponAnimation) ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation) |
| boolean | :[ValidTarget](Projectile#ValidTarget) () |

</details>

___
### OnRenderSpecific ()
{: #OnRenderSpecific .lua-content-item aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Projectile](Projectile)

| Type | Field |
| --- | --- |
| [Targetable](../Hyperspace/Targetable) | .[_targetable](Projectile#_targetable) |
| boolean | .[bBroadcastTarget](Projectile#bBroadcastTarget) |
| [GL_Color](../Graphics/GL_Color) | .[color](Projectile#color) |
| integer | .[currentSpace](Projectile#currentSpace) |
| [Damage](../Hyperspace/Damage) | .[damage](Projectile#damage) |
| boolean | .[dead](Projectile#dead) |
| [Animation](../Hyperspace/Animation) | .[death_animation](Projectile#death_animation) |
| integer | .[destinationSpace](Projectile#destinationSpace) |
| number | .[entryAngle](Projectile#entryAngle) |
| [Projectile_Extend](../Hyperspace/Projectile_Extend) | .[extend](Projectile#extend) |
| [AnimationTracker](../Hyperspace/AnimationTracker) | .[flashTracker](Projectile#flashTracker) |
| [Animation](../Hyperspace/Animation) | .[flight_animation](Projectile#flight_animation) |
| number | .[heading](Projectile#heading) |
| string | .[hitShieldSound](Projectile#hitShieldSound) |
| string | .[hitSolidSound](Projectile#hitSolidSound) |
| boolean | .[hitTarget](Projectile#hitTarget) |
| [Pointf](../Hyperspace/Pointf) | .[last_position](Projectile#last_position) |
| boolean | .[missed](Projectile#missed) |
| integer | .[ownerId](Projectile#ownerId) |
| boolean | .[passedTarget](Projectile#passedTarget) |
| [Pointf](../Hyperspace/Pointf) | .[position](Projectile#position) |
| uint | .[selfId](Projectile#selfId) |
| [Pointf](../Hyperspace/Pointf) | .[speed](Projectile#speed) |
| number | .[speed_magnitude](Projectile#speed_magnitude) |
| boolean | .[startedDeath](Projectile#startedDeath) |
| table | .[table](Projectile#table) |
| [Pointf](../Hyperspace/Pointf) | .[target](Projectile#target) |
| integer | .[targetId](Projectile#targetId) |

</details>

___
### animationTimer
{: #animationTimer .lua-content-item aria-label='Fields' }
#### number .animationTimer
{: aria-label='Fields' }

___
### bDamageSuperShield
{: #bDamageSuperShield .lua-content-item aria-label='Fields' }
#### boolean .bDamageSuperShield
{: aria-label='Fields' }

___
### checkedCollision
{: #checkedCollision .lua-content-item aria-label='Fields' }
#### boolean .checkedCollision
{: aria-label='Fields' }

___
### contactAnimations
{: #contactAnimations .lua-content-item aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .contactAnimations
{: aria-label='Fields' }

___
### dh
{: #dh .lua-content-item aria-label='Fields' }
#### number .dh
{: aria-label='Fields' }

___
### final_end
{: #final_end .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .final_end
{: aria-label='Fields' }

___
### lastDamage
{: #lastDamage .lua-content-item aria-label='Fields' }
#### integer .lastDamage
{: aria-label='Fields' }

___
### lastSmokeAnim
{: #lastSmokeAnim .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastSmokeAnim
{: aria-label='Fields' }

___
### last_collision
{: #last_collision .lua-content-item aria-label='Fields' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) .last_collision
{: aria-label='Fields' }

___
### length
{: #length .lua-content-item aria-label='Fields' }
#### number .length
{: aria-label='Fields' }

___
### lifespan
{: #lifespan .lua-content-item aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

___
### movingTarget
{: #movingTarget .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movingTarget
{: aria-label='Fields' }

___
### movingTargetId
{: #movingTargetId .lua-content-item aria-label='Fields' }
#### integer .movingTargetId
{: aria-label='Fields' }

___
### oneSpace
{: #oneSpace .lua-content-item aria-label='Fields' }
#### boolean .oneSpace
{: aria-label='Fields' }

___
### piercedShield
{: #piercedShield .lua-content-item aria-label='Fields' }
#### boolean .piercedShield
{: aria-label='Fields' }

___
### shield_end
{: #shield_end .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .shield_end
{: aria-label='Fields' }

___
### smokeAnims
{: #smokeAnims .lua-content-item aria-label='Fields' }
#### vector\<[Animation](../Hyperspace/Animation)\> .smokeAnims
{: aria-label='Fields' }

___
### soundChannel
{: #soundChannel .lua-content-item aria-label='Fields' }
#### integer .soundChannel
{: aria-label='Fields' }

___
### start_heading
{: #start_heading .lua-content-item aria-label='Fields' }
#### number .start_heading
{: aria-label='Fields' }

___
### sub_end
{: #sub_end .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_end
{: aria-label='Fields' }

___
### sub_start
{: #sub_start .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .sub_start
{: aria-label='Fields' }

___
### target1
{: #target1 .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target1
{: aria-label='Fields' }

___
### target2
{: #target2 .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target2
{: aria-label='Fields' }

___
### timer
{: #timer .lua-content-item aria-label='Fields' }
#### number .timer
{: aria-label='Fields' }

___
### weapAnimation
{: #weapAnimation .lua-content-item aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weapAnimation
{: aria-label='Fields' }

___
