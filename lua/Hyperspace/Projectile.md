---
layout: lua
title: Projectile
lang: en
category: Class
---

# Class "Projectile"


Extends: [Collideable](../Hyperspace/Collideable)

Subclasses: [Asteroid](../Hyperspace/Asteroid), [BeamWeapon](../Hyperspace/BeamWeapon), [BombProjectile](../Hyperspace/BombProjectile), [LaserBlast](../Hyperspace/LaserBlast), [Missile](../Hyperspace/Missile)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/_head.md" -->




## Static Methods
{: #Static-Methods .lua-content-section}
### RandomSidePoint ()
{: #RandomSidePoint .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .RandomSidePoint (integer side)
{: aria-label='StaticMethods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/RandomSidePoint(integer).md" -->

___


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

</details>

___
### CollisionCheck ()
{: #CollisionCheck .lua-content-item aria-label='Methods' }
#### void :CollisionCheck ([Collideable](../Hyperspace/Collideable) other)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/CollisionCheck(Hyperspace.Collideable).md" -->

___
### CollisionMoving ()
{: #CollisionMoving .lua-content-item aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/CollisionMoving(Hyperspace.Pointf,Hyperspace.Pointf,Hyperspace.Damage,boolean).md" -->

___
### ComputeHeading ()
{: #ComputeHeading .lua-content-item aria-label='Methods' }
#### void :ComputeHeading ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/ComputeHeading().md" -->

___
### Dead ()
{: #Dead .lua-content-item aria-label='Methods' }
#### boolean :Dead ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/Dead().md" -->

___
### EnterDestinationSpace ()
{: #EnterDestinationSpace .lua-content-item aria-label='Methods' }
#### void :EnterDestinationSpace ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/EnterDestinationSpace().md" -->

___
### ForceRenderLayer ()
{: #ForceRenderLayer .lua-content-item aria-label='Methods' }
#### integer :ForceRenderLayer ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/ForceRenderLayer().md" -->

___
### GetRandomTargettingPoint ()
{: #GetRandomTargettingPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/GetRandomTargettingPoint(boolean).md" -->

___
### GetSpeed ()
{: #GetSpeed .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/GetSpeed().md" -->

___
### GetType ()
{: #GetType .lua-content-item aria-label='Methods' }
#### integer :GetType ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/GetType().md" -->

___
### GetWorldCenterPoint ()
{: #GetWorldCenterPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/GetWorldCenterPoint().md" -->

___
### Initialize ()
{: #Initialize .lua-content-item aria-label='Methods' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/Initialize(Hyperspace.WeaponBlueprint).md" -->

___
### Kill ()
{: #Kill .lua-content-item aria-label='Methods' }
#### void :Kill ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/Kill().md" -->

___
### LoadProjectile ()
{: #LoadProjectile .lua-content-item aria-label='Methods' }
#### void :LoadProjectile (integer fd)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/LoadProjectile(integer).md" -->

___
### OnRenderSpecific ()
{: #OnRenderSpecific .lua-content-item aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/OnRenderSpecific(integer).md" -->

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/OnUpdate().md" -->

___
### SaveProjectile ()
{: #SaveProjectile .lua-content-item aria-label='Methods' }
#### void :SaveProjectile (integer fd)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SaveProjectile(integer).md" -->

___
### SetDamage ()
{: #SetDamage .lua-content-item aria-label='Methods' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SetDamage(Hyperspace.Damage).md" -->

___
### SetDestinationSpace ()
{: #SetDestinationSpace .lua-content-item aria-label='Methods' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SetDestinationSpace(integer).md" -->

___
### SetMovingTarget ()
{: #SetMovingTarget .lua-content-item aria-label='Methods' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SetMovingTarget(Hyperspace.Targetable).md" -->

___
### SetSpin ()
{: #SetSpin .lua-content-item aria-label='Methods' }
#### void :SetSpin (number spin)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SetSpin(number).md" -->

___
### SetWeaponAnimation ()
{: #SetWeaponAnimation .lua-content-item aria-label='Methods' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/SetWeaponAnimation(Hyperspace.WeaponAnimation).md" -->

___
### ValidTarget ()
{: #ValidTarget .lua-content-item aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/ValidTarget().md" -->

___


## Fields
{: #Fields .lua-content-section}
### _targetable
{: #_targetable .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/_targetable.md" -->

___
### bBroadcastTarget
{: #bBroadcastTarget .lua-content-item aria-label='Fields' }
#### boolean .bBroadcastTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/bBroadcastTarget.md" -->

___
### color
{: #color .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/color.md" -->

___
### currentSpace
{: #currentSpace .lua-content-item aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/currentSpace.md" -->

___
### damage
{: #damage .lua-content-item aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/damage.md" -->

___
### dead
{: #dead .lua-content-item aria-label='Fields' }
#### boolean .dead
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/dead.md" -->

___
### death_animation
{: #death_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/death_animation.md" -->

___
### destinationSpace
{: #destinationSpace .lua-content-item aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/destinationSpace.md" -->

___
### entryAngle
{: #entryAngle .lua-content-item aria-label='Fields' }
#### number .entryAngle
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/entryAngle.md" -->

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Projectile/extend.md" -->
**read-only**
<!-- End of content -->

___
### flashTracker
{: #flashTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/flashTracker.md" -->

___
### flight_animation
{: #flight_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/flight_animation.md" -->

___
### heading
{: #heading .lua-content-item aria-label='Fields' }
#### number .heading
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/heading.md" -->

___
### hitShieldSound
{: #hitShieldSound .lua-content-item aria-label='Fields' }
#### string .hitShieldSound
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/hitShieldSound.md" -->

___
### hitSolidSound
{: #hitSolidSound .lua-content-item aria-label='Fields' }
#### string .hitSolidSound
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/hitSolidSound.md" -->

___
### hitTarget
{: #hitTarget .lua-content-item aria-label='Fields' }
#### boolean .hitTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/hitTarget.md" -->

___
### last_position
{: #last_position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/last_position.md" -->

___
### lifespan
{: #lifespan .lua-content-item aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/lifespan.md" -->

___
### missed
{: #missed .lua-content-item aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/missed.md" -->

___
### ownerId
{: #ownerId .lua-content-item aria-label='Fields' }
#### integer .ownerId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/ownerId.md" -->

___
### passedTarget
{: #passedTarget .lua-content-item aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/passedTarget.md" -->

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/position.md" -->

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### uint .selfId
{: aria-label='Fields' }
<!-- Content pulled from "lua-source-parts-inject/Hyperspace/Projectile/selfId.md" -->
**read-only**
<!-- End of content -->

___
### speed
{: #speed .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/speed.md" -->

___
### speed_magnitude
{: #speed_magnitude .lua-content-item aria-label='Fields' }
#### number .speed_magnitude
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/speed_magnitude.md" -->

___
### startedDeath
{: #startedDeath .lua-content-item aria-label='Fields' }
#### boolean .startedDeath
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/startedDeath.md" -->

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/table.md" -->

___
### target
{: #target .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/target.md" -->

___
### targetId
{: #targetId .lua-content-item aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/Projectile/targetId.md" -->

___
