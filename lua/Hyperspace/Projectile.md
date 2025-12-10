---
layout: lua
title: Projectile
lang: en
---

# Class "Projectile"

Extends: [Collideable](../Hyperspace/Collideable)




## Static Methods
### RandomSidePoint ()
{: aria-label='StaticFunctions' }
#### [Pointf](../Hyperspace/Pointf) .RandomSidePoint (integer side)
{: aria-label='StaticFunctions' }

___


## Methods
### CollisionCheck ()
{: aria-label='Functions' }
#### void :CollisionCheck ([Collideable](../Hyperspace/Collideable) other)
{: aria-label='Functions' }

______
### CollisionMoving ()
{: aria-label='Functions' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Functions' }

______
### ComputeHeading ()
{: aria-label='Functions' }
#### void :ComputeHeading ()
{: aria-label='Functions' }

______
### Dead ()
{: aria-label='Functions' }
#### boolean :Dead ()
{: aria-label='Functions' }

______
### EnterDestinationSpace ()
{: aria-label='Functions' }
#### void :EnterDestinationSpace ()
{: aria-label='Functions' }

______
### ForceRenderLayer ()
{: aria-label='Functions' }
#### integer :ForceRenderLayer ()
{: aria-label='Functions' }

______
### GetRandomTargettingPoint ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean valuable)
{: aria-label='Functions' }

______
### GetSpeed ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Functions' }

______
### GetType ()
{: aria-label='Functions' }
#### integer :GetType ()
{: aria-label='Functions' }

______
### GetWorldCenterPoint ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Functions' }

______
### Initialize ()
{: aria-label='Functions' }
#### void :Initialize ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp)
{: aria-label='Functions' }

______
### Kill ()
{: aria-label='Functions' }
#### void :Kill ()
{: aria-label='Functions' }

______
### LoadProjectile ()
{: aria-label='Functions' }
#### void :LoadProjectile (integer fd)
{: aria-label='Functions' }

______
### OnRenderSpecific ()
{: aria-label='Functions' }
#### void :OnRenderSpecific (integer spaceId)
{: aria-label='Functions' }

______
### OnUpdate ()
{: aria-label='Functions' }
#### void :OnUpdate ()
{: aria-label='Functions' }

______
### SaveProjectile ()
{: aria-label='Functions' }
#### void :SaveProjectile (integer fd)
{: aria-label='Functions' }

______
### SetDamage ()
{: aria-label='Functions' }
#### void :SetDamage ([Damage](../Hyperspace/Damage) damage)
{: aria-label='Functions' }

______
### SetDestinationSpace ()
{: aria-label='Functions' }
#### void :SetDestinationSpace (integer space)
{: aria-label='Functions' }

______
### SetMovingTarget ()
{: aria-label='Functions' }
#### void :SetMovingTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

______
### SetSpin ()
{: aria-label='Functions' }
#### void :SetSpin (number spin)
{: aria-label='Functions' }

______
### SetWeaponAnimation ()
{: aria-label='Functions' }
#### void :SetWeaponAnimation ([WeaponAnimation](../Hyperspace/WeaponAnimation) animation)
{: aria-label='Functions' }

______
### ValidTarget ()
{: aria-label='Functions' }
#### boolean :ValidTarget ()
{: aria-label='Functions' }

___


## Fields
### _targetable
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Variables' }

______
### bBroadcastTarget
{: aria-label='Variables' }
#### boolean .bBroadcastTarget
{: aria-label='Variables' }

______
### color
{: aria-label='Variables' }
#### [GL_Color](../Graphics/GL_Color) .color
{: aria-label='Variables' }

______
### currentSpace
{: aria-label='Variables' }
#### integer .currentSpace
{: aria-label='Variables' }

______
### damage
{: aria-label='Variables' }
#### [Damage](../Hyperspace/Damage) .damage
{: aria-label='Variables' }

______
### dead
{: aria-label='Variables' }
#### boolean .dead
{: aria-label='Variables' }

______
### death_animation
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .death_animation
{: aria-label='Variables' }

______
### destinationSpace
{: aria-label='Variables' }
#### integer .destinationSpace
{: aria-label='Variables' }

______
### entryAngle
{: aria-label='Variables' }
#### number .entryAngle
{: aria-label='Variables' }

______
### extend (Read-only)
{: aria-label='Variables' }
#### [Projectile_Extend](../Hyperspace/Projectile_Extend) .extend
{: aria-label='Variables' }
**read-only**

______
### flashTracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashTracker
{: aria-label='Variables' }

______
### flight_animation
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Variables' }

______
### heading
{: aria-label='Variables' }
#### number .heading
{: aria-label='Variables' }

______
### hitShieldSound
{: aria-label='Variables' }
#### string .hitShieldSound
{: aria-label='Variables' }

______
### hitSolidSound
{: aria-label='Variables' }
#### string .hitSolidSound
{: aria-label='Variables' }

______
### hitTarget
{: aria-label='Variables' }
#### boolean .hitTarget
{: aria-label='Variables' }

______
### last_position
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .last_position
{: aria-label='Variables' }

______
### lifespan
{: aria-label='Variables' }
#### number .lifespan
{: aria-label='Variables' }

______
### missed
{: aria-label='Variables' }
#### boolean .missed
{: aria-label='Variables' }

______
### ownerId
{: aria-label='Variables' }
#### integer .ownerId
{: aria-label='Variables' }

______
### passedTarget
{: aria-label='Variables' }
#### boolean .passedTarget
{: aria-label='Variables' }

______
### position
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .position
{: aria-label='Variables' }

______
### selfId (Read-only)
{: aria-label='Variables' }
#### uint .selfId
{: aria-label='Variables' }
**read-only**

______
### speed
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .speed
{: aria-label='Variables' }

______
### speed_magnitude
{: aria-label='Variables' }
#### number .speed_magnitude
{: aria-label='Variables' }

______
### startedDeath
{: aria-label='Variables' }
#### boolean .startedDeath
{: aria-label='Variables' }

______
### target
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Variables' }

______
### targetId
{: aria-label='Variables' }
#### integer .targetId
{: aria-label='Variables' }

___
