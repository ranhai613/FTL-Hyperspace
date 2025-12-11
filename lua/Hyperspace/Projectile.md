---
layout: lua
title: Projectile
lang: en
---

# Class "Projectile"

Extends: [Collideable](../Hyperspace/Collideable)




## Static Methods
### RandomSidePoint ()
{: aria-label='StaticMethods' }
#### [Pointf](../Hyperspace/Pointf) .RandomSidePoint (integer side)
{: aria-label='StaticMethods' }

___


## Methods
### CollisionCheck ()
{: aria-label='Methods' }
#### void :CollisionCheck ([Collideable](../Hyperspace/Collideable) other)
{: aria-label='Methods' }

___
### CollisionMoving ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### ComputeHeading ()
{: aria-label='Methods' }
#### void :ComputeHeading ()
{: aria-label='Methods' }

___
### Dead ()
{: aria-label='Methods' }
#### boolean :Dead ()
{: aria-label='Methods' }

___
### EnterDestinationSpace ()
{: aria-label='Methods' }
#### void :EnterDestinationSpace ()
{: aria-label='Methods' }

___
### ForceRenderLayer ()
{: aria-label='Methods' }
#### integer :ForceRenderLayer ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Methods' }

___
### GetSpeed ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetType ()
{: aria-label='Methods' }
#### integer :GetType ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### Initialize ()
{: aria-label='Methods' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Methods' }

___
### Kill ()
{: aria-label='Methods' }
#### void :Kill ()
{: aria-label='Methods' }

___
### LoadProjectile ()
{: aria-label='Methods' }
#### void :LoadProjectile (integer fd)
{: aria-label='Methods' }

___
### OnRenderSpecific ()
{: aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

___
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

___
### SaveProjectile ()
{: aria-label='Methods' }
#### void :SaveProjectile (integer fd)
{: aria-label='Methods' }

___
### SetDamage ()
{: aria-label='Methods' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### SetDestinationSpace ()
{: aria-label='Methods' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Methods' }

___
### SetMovingTarget ()
{: aria-label='Methods' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetSpin ()
{: aria-label='Methods' }
#### void :SetSpin (number spin)
{: aria-label='Methods' }

___
### SetWeaponAnimation ()
{: aria-label='Methods' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Methods' }

___
### ValidTarget ()
{: aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___


## Fields
### _targetable
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### bBroadcastTarget
{: aria-label='Fields' }
#### boolean .bBroadcastTarget
{: aria-label='Fields' }

___
### color
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }

___
### currentSpace
{: aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### damage
{: aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

___
### dead
{: aria-label='Fields' }
#### boolean .dead
{: aria-label='Fields' }

___
### death_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Fields' }

___
### destinationSpace
{: aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### entryAngle
{: aria-label='Fields' }
#### number .entryAngle
{: aria-label='Fields' }

___
### extend (Read-only)
{: aria-label='Fields' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Fields' }
**read-only**

___
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

___
### flight_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### heading
{: aria-label='Fields' }
#### number .heading
{: aria-label='Fields' }

___
### hitShieldSound
{: aria-label='Fields' }
#### string .hitShieldSound
{: aria-label='Fields' }

___
### hitSolidSound
{: aria-label='Fields' }
#### string .hitSolidSound
{: aria-label='Fields' }

___
### hitTarget
{: aria-label='Fields' }
#### boolean .hitTarget
{: aria-label='Fields' }

___
### last_position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Fields' }

___
### lifespan
{: aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

___
### missed
{: aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }

___
### ownerId
{: aria-label='Fields' }
#### integer .ownerId
{: aria-label='Fields' }

___
### passedTarget
{: aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }

___
### position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

___
### selfId (Read-only)
{: aria-label='Fields' }
#### uint .selfId
{: aria-label='Fields' }
**read-only**

___
### speed
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Fields' }

___
### speed_magnitude
{: aria-label='Fields' }
#### number .speed_magnitude
{: aria-label='Fields' }

___
### startedDeath
{: aria-label='Fields' }
#### boolean .startedDeath
{: aria-label='Fields' }

___
### target
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### targetId
{: aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
