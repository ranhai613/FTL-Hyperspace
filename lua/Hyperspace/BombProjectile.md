---
layout: lua
title: BombProjectile
lang: en
category: Class
---

# Class "BombProjectile"


Extends: [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)


## Constructors
{: #Constructors .lua-content-section}
### BombProjectile ()
{: #BombProjectile .lua-content-item aria-label='Constructors' }
#### [BombProjectile](../Hyperspace/BombProjectile) BombProjectile ([Pointf](../Hyperspace/Pointf) _position, integer _ownerId, integer _targetId, [Pointf](../Hyperspace/Pointf) _target)
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
___
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
| void | :[OnRenderSpecific](Projectile#OnRenderSpecific) (integer spaceId) |
| void | :[OnUpdate](Projectile#OnUpdate) () |
| void | :[SaveProjectile](Projectile#SaveProjectile) (integer fd) |
| void | :[SetDamage](Projectile#SetDamage) ([Damage](../Hyperspace/Damage) damage) |
| void | :[SetDestinationSpace](Projectile#SetDestinationSpace) (integer space) |
| void | :[SetMovingTarget](Projectile#SetMovingTarget) ([Targetable](../Hyperspace/Targetable) target) |
| void | :[SetSpin](Projectile#SetSpin) (number spin) |
| void | :[SetWeaponAnimation](Projectile#SetWeaponAnimation) ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation) |
| boolean | :[ValidTarget](Projectile#ValidTarget) () |

</details>



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
| number | .[lifespan](Projectile#lifespan) |
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
### bMissed
{: #bMissed .lua-content-item aria-label='Fields' }
#### boolean .bMissed
{: aria-label='Fields' }

___
### bSuperShield
{: #bSuperShield .lua-content-item aria-label='Fields' }
#### boolean .bSuperShield
{: aria-label='Fields' }

___
### explosiveDelay
{: #explosiveDelay .lua-content-item aria-label='Fields' }
#### number .explosiveDelay
{: aria-label='Fields' }

___
### missMessage
{: #missMessage .lua-content-item aria-label='Fields' }
#### DamageMessage .missMessage
{: aria-label='Fields' }

___
### superShieldBypass
{: #superShieldBypass .lua-content-item aria-label='Fields' }
#### boolean .superShieldBypass
{: aria-label='Fields' }

___
