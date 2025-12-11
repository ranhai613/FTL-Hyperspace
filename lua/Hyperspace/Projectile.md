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

______
### CollisionMoving ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

______
### ComputeHeading ()
{: aria-label='Methods' }
#### void :ComputeHeading ()
{: aria-label='Methods' }

______
### Dead ()
{: aria-label='Methods' }
#### boolean :Dead ()
{: aria-label='Methods' }

______
### EnterDestinationSpace ()
{: aria-label='Methods' }
#### void :EnterDestinationSpace ()
{: aria-label='Methods' }

______
### ForceRenderLayer ()
{: aria-label='Methods' }
#### integer :ForceRenderLayer ()
{: aria-label='Methods' }

______
### GetRandomTargettingPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Methods' }

______
### GetSpeed ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

______
### GetType ()
{: aria-label='Methods' }
#### integer :GetType ()
{: aria-label='Methods' }

______
### GetWorldCenterPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

______
### Initialize ()
{: aria-label='Methods' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Methods' }

______
### Kill ()
{: aria-label='Methods' }
#### void :Kill ()
{: aria-label='Methods' }

______
### LoadProjectile ()
{: aria-label='Methods' }
#### void :LoadProjectile (integer fd)
{: aria-label='Methods' }

______
### OnRenderSpecific ()
{: aria-label='Methods' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Methods' }

______
### OnUpdate ()
{: aria-label='Methods' }
#### void :OnUpdate ()
{: aria-label='Methods' }

______
### SaveProjectile ()
{: aria-label='Methods' }
#### void :SaveProjectile (integer fd)
{: aria-label='Methods' }

______
### SetDamage ()
{: aria-label='Methods' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

______
### SetDestinationSpace ()
{: aria-label='Methods' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Methods' }

______
### SetMovingTarget ()
{: aria-label='Methods' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

______
### SetSpin ()
{: aria-label='Methods' }
#### void :SetSpin (number spin)
{: aria-label='Methods' }

______
### SetWeaponAnimation ()
{: aria-label='Methods' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Methods' }

______
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

______
### bBroadcastTarget
{: aria-label='Fields' }
#### boolean .bBroadcastTarget
{: aria-label='Fields' }

______
### color
{: aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Fields' }

______
### currentSpace
{: aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

______
### damage
{: aria-label='Fields' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Fields' }

______
### dead
{: aria-label='Fields' }
#### boolean .dead
{: aria-label='Fields' }

______
### death_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Fields' }

______
### destinationSpace
{: aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

______
### entryAngle
{: aria-label='Fields' }
#### number .entryAngle
{: aria-label='Fields' }

______
### extend (Read-only)
{: aria-label='Fields' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Fields' }
**read-only**

______
### flashTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Fields' }

______
### flight_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

______
### heading
{: aria-label='Fields' }
#### number .heading
{: aria-label='Fields' }

______
### hitShieldSound
{: aria-label='Fields' }
#### string .hitShieldSound
{: aria-label='Fields' }

______
### hitSolidSound
{: aria-label='Fields' }
#### string .hitSolidSound
{: aria-label='Fields' }

______
### hitTarget
{: aria-label='Fields' }
#### boolean .hitTarget
{: aria-label='Fields' }

______
### last_position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Fields' }

______
### lifespan
{: aria-label='Fields' }
#### number .lifespan
{: aria-label='Fields' }

______
### missed
{: aria-label='Fields' }
#### boolean .missed
{: aria-label='Fields' }

______
### ownerId
{: aria-label='Fields' }
#### integer .ownerId
{: aria-label='Fields' }

______
### passedTarget
{: aria-label='Fields' }
#### boolean .passedTarget
{: aria-label='Fields' }

______
### position
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Fields' }

______
### selfId (Read-only)
{: aria-label='Fields' }
#### uint .selfId
{: aria-label='Fields' }
**read-only**

______
### speed
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Fields' }

______
### speed_magnitude
{: aria-label='Fields' }
#### number .speed_magnitude
{: aria-label='Fields' }

______
### startedDeath
{: aria-label='Fields' }
#### boolean .startedDeath
{: aria-label='Fields' }

______
### target
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

______
### targetId
{: aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
