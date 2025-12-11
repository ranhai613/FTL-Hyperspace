---
layout: lua
title: SpaceDrone
lang: en
---

# Class "SpaceDrone"

Extends: [Drone](../Hyperspace/Drone)





## Methods
### CollisionMoving ()
{: aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### DamageArea ()
{: aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk)
{: aria-label='Methods' }

___
### DamageBeam ()
{: aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### GetBoardingDrone ()
{: aria-label='Methods' }
#### BoarderDrone :GetBoardingDrone ()
{: aria-label='Methods' }

___
### GetNextProjectile ()
{: aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetNextProjectile ()
{: aria-label='Methods' }

___
### GetOwnerId ()
{: aria-label='Methods' }
#### integer :GetOwnerId ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean unk)
{: aria-label='Methods' }

___
### GetSelfId ()
{: aria-label='Methods' }
#### integer :GetSelfId ()
{: aria-label='Methods' }

___
### GetShieldShape ()
{: aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetShieldShape ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetSpaceId ()
{: aria-label='Methods' }
#### integer :GetSpaceId ()
{: aria-label='Methods' }

___
### GetSpeed ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetWeaponCooldown ()
{: aria-label='Methods' }
#### number :GetWeaponCooldown ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### HasTarget ()
{: aria-label='Methods' }
#### boolean :HasTarget ()
{: aria-label='Methods' }

___
### HideUnderOwner ()
{: aria-label='Methods' }
#### boolean :HideUnderOwner ()
{: aria-label='Methods' }

___
### MouseMove ()
{: aria-label='Methods' }
#### void :MouseMove (integer mX, integer mY)
{: aria-label='Methods' }

___
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (integer space)
{: aria-label='Methods' }

___
### PickDestination ()
{: aria-label='Methods' }
#### void :PickDestination ()
{: aria-label='Methods' }

___
### PickTarget ()
{: aria-label='Methods' }
#### void :PickTarget ()
{: aria-label='Methods' }

___
### RandomizeStartingPosition ()
{: aria-label='Methods' }
#### void :RandomizeStartingPosition ()
{: aria-label='Methods' }

___
### RenderDrone ()
{: aria-label='Methods' }
#### void :RenderDrone ()
{: aria-label='Methods' }

___
### SetCurrentLocation ()
{: aria-label='Methods' }
#### void :SetCurrentLocation ([Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }

___
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean deployed)
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetWeaponTarget ()
{: aria-label='Methods' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### UpdateAimingAngle ()
{: aria-label='Methods' }
#### number :UpdateAimingAngle ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired)
{: aria-label='Methods' }

___
### ValidTarget ()
{: aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___
### ValidTargetObject ()
{: aria-label='Methods' }
#### boolean :ValidTargetObject ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
### _collideable
{: aria-label='Fields' }
#### [Collideable](../Hyperspace/Collideable) ._collideable
{: aria-label='Fields' }

___
### _targetable
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### additionalPause
{: aria-label='Fields' }
#### number .additionalPause
{: aria-label='Fields' }

___
### aimingAngle
{: aria-label='Fields' }
#### number .aimingAngle
{: aria-label='Fields' }

___
### bDisrupted
{: aria-label='Fields' }
#### boolean .bDisrupted
{: aria-label='Fields' }

___
### bFire
{: aria-label='Fields' }
#### boolean .bFire
{: aria-label='Fields' }

___
### bLoadedPosition
{: aria-label='Fields' }
#### boolean .bLoadedPosition
{: aria-label='Fields' }

___
### beamCurrentTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamCurrentTarget
{: aria-label='Fields' }

___
### beamFinalTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamFinalTarget
{: aria-label='Fields' }

___
### beamSpeed
{: aria-label='Fields' }
#### number .beamSpeed
{: aria-label='Fields' }

___
### currentLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentLocation
{: aria-label='Fields' }

___
### currentSpace
{: aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### current_angle
{: aria-label='Fields' }
#### number .current_angle
{: aria-label='Fields' }

___
### deployedLastFrame
{: aria-label='Fields' }
#### boolean .deployedLastFrame
{: aria-label='Fields' }

___
### desiredAimingAngle
{: aria-label='Fields' }
#### number .desiredAimingAngle
{: aria-label='Fields' }

___
### destinationLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .destinationLocation
{: aria-label='Fields' }

___
### destinationSpace
{: aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### explosion
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

___
### hackAngle
{: aria-label='Fields' }
#### number .hackAngle
{: aria-label='Fields' }

___
### hackSparks
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .hackSparks
{: aria-label='Fields' }

___
### ionStun
{: aria-label='Fields' }
#### number .ionStun
{: aria-label='Fields' }

___
### lastAimingAngle
{: aria-label='Fields' }
#### number .lastAimingAngle
{: aria-label='Fields' }

___
### lastLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastLocation
{: aria-label='Fields' }

___
### lifespan
{: aria-label='Fields' }
#### integer .lifespan
{: aria-label='Fields' }

___
### message
{: aria-label='Fields' }
#### DamageMessage .message
{: aria-label='Fields' }

___
### movementTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movementTarget
{: aria-label='Fields' }

___
### pause
{: aria-label='Fields' }
#### number .pause
{: aria-label='Fields' }

___
### pointTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .pointTarget
{: aria-label='Fields' }

___
### poweredLastFrame
{: aria-label='Fields' }
#### boolean .poweredLastFrame
{: aria-label='Fields' }

___
### speedVector
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speedVector
{: aria-label='Fields' }

___
### targetLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetLocation
{: aria-label='Fields' }

___
### targetSpeed
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetSpeed
{: aria-label='Fields' }

___
### weaponBlueprint (Read-only)
{: aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .weaponBlueprint
{: aria-label='Fields' }
**Read-only**

___
### weaponCooldown
{: aria-label='Fields' }
#### number .weaponCooldown
{: aria-label='Fields' }

___
### weaponTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .weaponTarget
{: aria-label='Fields' }

___
### weapon_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .weapon_animation
{: aria-label='Fields' }

___
