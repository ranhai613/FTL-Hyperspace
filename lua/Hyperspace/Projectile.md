---
layout: lua
title: Projectile
lang: en
---

# Class "Projectile"


Extends: [Collideable](../Hyperspace/Collideable)

Subclasses: [Asteroid](../Hyperspace/Asteroid), [BeamWeapon](../Hyperspace/BeamWeapon), [BombProjectile](../Hyperspace/BombProjectile), [LaserBlast](../Hyperspace/LaserBlast), [Missile](../Hyperspace/Missile)




## Static Methods
{: #Static-Methods .lua-content-section}
### RandomSidePoint ()
{: #RandomSidePoint .lua-content-item aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .RandomSidePoint (integer side)
{: aria-label='StaticMethods' }

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

___
### CollisionMoving ()
{: #CollisionMoving .lua-content-item aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### ComputeHeading ()
{: #ComputeHeading .lua-content-item aria-label='Methods' }
#### void :ComputeHeading ()
{: aria-label='Methods' }

___
### Dead ()
{: #Dead .lua-content-item aria-label='Methods' }
#### boolean :Dead ()
{: aria-label='Methods' }

___
### EnterDestinationSpace ()
{: #EnterDestinationSpace .lua-content-item aria-label='Methods' }
#### void :EnterDestinationSpace ()
{: aria-label='Methods' }

___
### ForceRenderLayer ()
{: #ForceRenderLayer .lua-content-item aria-label='Methods' }
#### integer :ForceRenderLayer ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: #GetRandomTargettingPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Methods' }

___
### GetSpeed ()
{: #GetSpeed .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetType ()
{: #GetType .lua-content-item aria-label='Methods' }
#### integer :GetType ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: #GetWorldCenterPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### Initialize ()
{: #Initialize .lua-content-item aria-label='Methods' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Methods' }

___
### Kill ()
{: #Kill .lua-content-item aria-label='Methods' }
#### void :Kill ()
{: aria-label='Methods' }

___
### LoadProjectile ()
{: #LoadProjectile .lua-content-item aria-label='Methods' }
#### void :LoadProjectile (integer fd)
{: aria-label='Methods' }

___
### OnRenderSpecific ()
{: #OnRenderSpecific .lua-content-item aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### SaveProjectile ()
{: #SaveProjectile .lua-content-item aria-label='Methods' }
#### void :SaveProjectile (integer fd)
{: aria-label='Methods' }

___
### SetDamage ()
{: #SetDamage .lua-content-item aria-label='Methods' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### SetDestinationSpace ()
{: #SetDestinationSpace .lua-content-item aria-label='Methods' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Methods' }

___
### SetMovingTarget ()
{: #SetMovingTarget .lua-content-item aria-label='Methods' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetSpin ()
{: #SetSpin .lua-content-item aria-label='Methods' }
#### void :SetSpin (number spin)
{: aria-label='Methods' }

___
### SetWeaponAnimation ()
{: #SetWeaponAnimation .lua-content-item aria-label='Methods' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget .lua-content-item aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### _targetable
{: #_targetable .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### bBroadcastTarget
{: #bBroadcastTarget .lua-content-item aria-label='Fields' }
#### boolean .bBroadcastTarget
{: aria-label='Fields' }

___
### color
{: #color .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }

___
### currentSpace
{: #currentSpace .lua-content-item aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### damage
{: #damage .lua-content-item aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### dead
{: #dead .lua-content-item aria-label='Fields' }
#### boolean .dead
{: aria-label='Fields' }

___
### death_animation
{: #death_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Fields' }

___
### destinationSpace
{: #destinationSpace .lua-content-item aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### entryAngle
{: #entryAngle .lua-content-item aria-label='Fields' }
#### number .entryAngle
{: aria-label='Fields' }

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Fields' }
**read-only**

___
### flashTracker
{: #flashTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### flight_animation
{: #flight_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### heading
{: #heading .lua-content-item aria-label='Fields' }
#### number .heading
{: aria-label='Fields' }

___
### hitShieldSound
{: #hitShieldSound .lua-content-item aria-label='Fields' }
#### string .hitShieldSound
{: aria-label='Fields' }

___
### hitSolidSound
{: #hitSolidSound .lua-content-item aria-label='Fields' }
#### string .hitSolidSound
{: aria-label='Fields' }

___
### hitTarget
{: #hitTarget .lua-content-item aria-label='Fields' }
#### boolean .hitTarget
{: aria-label='Fields' }

___
### last_position
{: #last_position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Fields' }

___
### lifespan
{: #lifespan .lua-content-item aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

___
### missed
{: #missed .lua-content-item aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }

___
### ownerId
{: #ownerId .lua-content-item aria-label='Fields' }
#### integer .ownerId
{: aria-label='Fields' }

___
### passedTarget
{: #passedTarget .lua-content-item aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }

___
### position
{: #position .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

___
### selfId (Read-only)
{: #selfId .lua-content-item aria-label='Fields' }
#### uint .selfId
{: aria-label='Fields' }
**read-only**

___
### speed
{: #speed .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Fields' }

___
### speed_magnitude
{: #speed_magnitude .lua-content-item aria-label='Fields' }
#### number .speed_magnitude
{: aria-label='Fields' }

___
### startedDeath
{: #startedDeath .lua-content-item aria-label='Fields' }
#### boolean .startedDeath
{: aria-label='Fields' }

___
### target
{: #target .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### targetId
{: #targetId .lua-content-item aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
