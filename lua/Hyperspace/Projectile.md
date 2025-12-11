---
layout: lua
title: Projectile
lang: en
---

# Class "Projectile"


Extends: [Collideable](../Hyperspace/Collideable)

Subclasses: [Asteroid](../Hyperspace/Asteroid), [BeamWeapon](../Hyperspace/BeamWeapon), [BombProjectile](../Hyperspace/BombProjectile), [LaserBlast](../Hyperspace/LaserBlast), [Missile](../Hyperspace/Missile)




## Static Methods
{: #Static-Methods .section}
### RandomSidePoint ()
{: #RandomSidePoint aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .RandomSidePoint (integer side)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


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
{: #CollisionCheck aria-label='Methods' }
#### void :CollisionCheck ([Collideable](../Hyperspace/Collideable) other)
{: aria-label='Methods' }

___
### CollisionMoving ()
{: #CollisionMoving aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### ComputeHeading ()
{: #ComputeHeading aria-label='Methods' }
#### void :ComputeHeading ()
{: aria-label='Methods' }

___
### Dead ()
{: #Dead aria-label='Methods' }
#### boolean :Dead ()
{: aria-label='Methods' }

___
### EnterDestinationSpace ()
{: #EnterDestinationSpace aria-label='Methods' }
#### void :EnterDestinationSpace ()
{: aria-label='Methods' }

___
### ForceRenderLayer ()
{: #ForceRenderLayer aria-label='Methods' }
#### integer :ForceRenderLayer ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: #GetRandomTargettingPoint aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Methods' }

___
### GetSpeed ()
{: #GetSpeed aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetType ()
{: #GetType aria-label='Methods' }
#### integer :GetType ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: #GetWorldCenterPoint aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### Initialize ()
{: #Initialize aria-label='Methods' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Methods' }

___
### Kill ()
{: #Kill aria-label='Methods' }
#### void :Kill ()
{: aria-label='Methods' }

___
### LoadProjectile ()
{: #LoadProjectile aria-label='Methods' }
#### void :LoadProjectile (integer fd)
{: aria-label='Methods' }

___
### OnRenderSpecific ()
{: #OnRenderSpecific aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

___
### OnUpdate ()
{: #OnUpdate aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### SaveProjectile ()
{: #SaveProjectile aria-label='Methods' }
#### void :SaveProjectile (integer fd)
{: aria-label='Methods' }

___
### SetDamage ()
{: #SetDamage aria-label='Methods' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### SetDestinationSpace ()
{: #SetDestinationSpace aria-label='Methods' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Methods' }

___
### SetMovingTarget ()
{: #SetMovingTarget aria-label='Methods' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetSpin ()
{: #SetSpin aria-label='Methods' }
#### void :SetSpin (number spin)
{: aria-label='Methods' }

___
### SetWeaponAnimation ()
{: #SetWeaponAnimation aria-label='Methods' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### _targetable
{: #_targetable aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### bBroadcastTarget
{: #bBroadcastTarget aria-label='Fields' }
#### boolean .bBroadcastTarget
{: aria-label='Fields' }

___
### color
{: #color aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }

___
### currentSpace
{: #currentSpace aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### damage
{: #damage aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### dead
{: #dead aria-label='Fields' }
#### boolean .dead
{: aria-label='Fields' }

___
### death_animation
{: #death_animation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Fields' }

___
### destinationSpace
{: #destinationSpace aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### entryAngle
{: #entryAngle aria-label='Fields' }
#### number .entryAngle
{: aria-label='Fields' }

___
### extend (Read-only)
{: #extend aria-label='Fields' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Fields' }
**read-only**

___
### flashTracker
{: #flashTracker aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### flight_animation
{: #flight_animation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### heading
{: #heading aria-label='Fields' }
#### number .heading
{: aria-label='Fields' }

___
### hitShieldSound
{: #hitShieldSound aria-label='Fields' }
#### string .hitShieldSound
{: aria-label='Fields' }

___
### hitSolidSound
{: #hitSolidSound aria-label='Fields' }
#### string .hitSolidSound
{: aria-label='Fields' }

___
### hitTarget
{: #hitTarget aria-label='Fields' }
#### boolean .hitTarget
{: aria-label='Fields' }

___
### last_position
{: #last_position aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Fields' }

___
### lifespan
{: #lifespan aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

___
### missed
{: #missed aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }

___
### ownerId
{: #ownerId aria-label='Fields' }
#### integer .ownerId
{: aria-label='Fields' }

___
### passedTarget
{: #passedTarget aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }

___
### position
{: #position aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

___
### selfId (Read-only)
{: #selfId aria-label='Fields' }
#### uint .selfId
{: aria-label='Fields' }
**read-only**

___
### speed
{: #speed aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Fields' }

___
### speed_magnitude
{: #speed_magnitude aria-label='Fields' }
#### number .speed_magnitude
{: aria-label='Fields' }

___
### startedDeath
{: #startedDeath aria-label='Fields' }
#### boolean .startedDeath
{: aria-label='Fields' }

___
### target
{: #target aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### targetId
{: #targetId aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
