---
layout: lua
title: PDSFire
lang: en
category: Class
---

# Class "PDSFire"


Extends: [LaserBlast](../Hyperspace/LaserBlast) <- [Projectile](../Hyperspace/Projectile) <- [Collideable](../Hyperspace/Collideable)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### PDSFire ()
{: #PDSFire .lua-content-item aria-label='Constructors' }
#### [PDSFire](../Hyperspace/PDSFire) PDSFire ([Point](../Hyperspace/Point) pos, integer destinationSpace, [Pointf](../Hyperspace/Pointf) destination)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/PDSFire(Hyperspace.Point,integer,Hyperspace.Pointf).md" -->

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


#### From [LaserBlast](LaserBlast)

| Type | Field |
| --- | --- |
| [Targetable](../Hyperspace/Targetable) | .[movingTarget](LaserBlast#movingTarget) |
| number | .[spinAngle](LaserBlast#spinAngle) |
| number | .[spinSpeed](LaserBlast#spinSpeed) |

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
| integer | .[ownerId](Projectile#ownerId) |
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
### currentScale
{: #currentScale .lua-content-item aria-label='Fields' }
#### number .currentScale
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/currentScale.md" -->

___
### explosionAnimation
{: #explosionAnimation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosionAnimation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/explosionAnimation.md" -->

___
### missed
{: #missed .lua-content-item aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/missed.md" -->

___
### passedTarget
{: #passedTarget .lua-content-item aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/passedTarget.md" -->

___
### startPoint
{: #startPoint .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .startPoint
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/PDSFire/startPoint.md" -->

___
