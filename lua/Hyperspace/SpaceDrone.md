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

______
### DamageArea ()
{: aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk)
{: aria-label='Methods' }

______
### DamageBeam ()
{: aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

______
### GetBoardingDrone ()
{: aria-label='Methods' }
#### BoarderDrone :GetBoardingDrone ()
{: aria-label='Methods' }

______
### GetNextProjectile ()
{: aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetNextProjectile ()
{: aria-label='Methods' }

______
### GetOwnerId ()
{: aria-label='Methods' }
#### integer :GetOwnerId ()
{: aria-label='Methods' }

______
### GetRandomTargettingPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean unk)
{: aria-label='Methods' }

______
### GetSelfId ()
{: aria-label='Methods' }
#### integer :GetSelfId ()
{: aria-label='Methods' }

______
### GetShieldShape ()
{: aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetShieldShape ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

______
### GetSpaceId ()
{: aria-label='Methods' }
#### integer :GetSpaceId ()
{: aria-label='Methods' }

______
### GetSpeed ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

______
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

______
### GetWeaponCooldown ()
{: aria-label='Methods' }
#### number :GetWeaponCooldown ()
{: aria-label='Methods' }

______
### GetWorldCenterPoint ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

______
### HasTarget ()
{: aria-label='Methods' }
#### boolean :HasTarget ()
{: aria-label='Methods' }

______
### HideUnderOwner ()
{: aria-label='Methods' }
#### boolean :HideUnderOwner ()
{: aria-label='Methods' }

______
### MouseMove ()
{: aria-label='Methods' }
#### void :MouseMove (integer mX, integer mY)
{: aria-label='Methods' }

______
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (integer space)
{: aria-label='Methods' }

______
### PickDestination ()
{: aria-label='Methods' }
#### void :PickDestination ()
{: aria-label='Methods' }

______
### PickTarget ()
{: aria-label='Methods' }
#### void :PickTarget ()
{: aria-label='Methods' }

______
### RandomizeStartingPosition ()
{: aria-label='Methods' }
#### void :RandomizeStartingPosition ()
{: aria-label='Methods' }

______
### RenderDrone ()
{: aria-label='Methods' }
#### void :RenderDrone ()
{: aria-label='Methods' }

______
### SetCurrentLocation ()
{: aria-label='Methods' }
#### void :SetCurrentLocation ([Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }

______
### SetDeployed ()
{: aria-label='Methods' }
#### void :SetDeployed (boolean deployed)
{: aria-label='Methods' }

______
### SetMovementTarget ()
{: aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

______
### SetWeaponTarget ()
{: aria-label='Methods' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

______
### UpdateAimingAngle ()
{: aria-label='Methods' }
#### number :UpdateAimingAngle ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired)
{: aria-label='Methods' }

______
### ValidTarget ()
{: aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

______
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

______
### _targetable
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

______
### additionalPause
{: aria-label='Fields' }
#### number .additionalPause
{: aria-label='Fields' }

______
### aimingAngle
{: aria-label='Fields' }
#### number .aimingAngle
{: aria-label='Fields' }

______
### bDisrupted
{: aria-label='Fields' }
#### boolean .bDisrupted
{: aria-label='Fields' }

______
### bFire
{: aria-label='Fields' }
#### boolean .bFire
{: aria-label='Fields' }

______
### bLoadedPosition
{: aria-label='Fields' }
#### boolean .bLoadedPosition
{: aria-label='Fields' }

______
### beamCurrentTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamCurrentTarget
{: aria-label='Fields' }

______
### beamFinalTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamFinalTarget
{: aria-label='Fields' }

______
### beamSpeed
{: aria-label='Fields' }
#### number .beamSpeed
{: aria-label='Fields' }

______
### currentLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentLocation
{: aria-label='Fields' }

______
### currentSpace
{: aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

______
### current_angle
{: aria-label='Fields' }
#### number .current_angle
{: aria-label='Fields' }

______
### deployedLastFrame
{: aria-label='Fields' }
#### boolean .deployedLastFrame
{: aria-label='Fields' }

______
### desiredAimingAngle
{: aria-label='Fields' }
#### number .desiredAimingAngle
{: aria-label='Fields' }

______
### destinationLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .destinationLocation
{: aria-label='Fields' }

______
### destinationSpace
{: aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

______
### explosion
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

______
### hackAngle
{: aria-label='Fields' }
#### number .hackAngle
{: aria-label='Fields' }

______
### hackSparks
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .hackSparks
{: aria-label='Fields' }

______
### ionStun
{: aria-label='Fields' }
#### number .ionStun
{: aria-label='Fields' }

______
### lastAimingAngle
{: aria-label='Fields' }
#### number .lastAimingAngle
{: aria-label='Fields' }

______
### lastLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastLocation
{: aria-label='Fields' }

______
### lifespan
{: aria-label='Fields' }
#### integer .lifespan
{: aria-label='Fields' }

______
### message
{: aria-label='Fields' }
#### DamageMessage .message
{: aria-label='Fields' }

______
### movementTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movementTarget
{: aria-label='Fields' }

______
### pause
{: aria-label='Fields' }
#### number .pause
{: aria-label='Fields' }

______
### pointTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .pointTarget
{: aria-label='Fields' }

______
### poweredLastFrame
{: aria-label='Fields' }
#### boolean .poweredLastFrame
{: aria-label='Fields' }

______
### speedVector
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speedVector
{: aria-label='Fields' }

______
### targetLocation
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetLocation
{: aria-label='Fields' }

______
### targetSpeed
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetSpeed
{: aria-label='Fields' }

______
### weaponBlueprint (Read-only)
{: aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .weaponBlueprint
{: aria-label='Fields' }
**Read-only**

______
### weaponCooldown
{: aria-label='Fields' }
#### number .weaponCooldown
{: aria-label='Fields' }

______
### weaponTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .weaponTarget
{: aria-label='Fields' }

______
### weapon_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .weapon_animation
{: aria-label='Fields' }

___
