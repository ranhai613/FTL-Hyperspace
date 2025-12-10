---
layout: lua
title: SpaceDrone
lang: en
---

# Class "SpaceDrone"

Extends: [Drone](../Hyperspace/Drone)





## Methods
### CollisionMoving ()
{: aria-label='Functions' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Functions' }

______
### DamageArea ()
{: aria-label='Functions' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk)
{: aria-label='Functions' }

______
### DamageBeam ()
{: aria-label='Functions' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Functions' }

______
### GetBoardingDrone ()
{: aria-label='Functions' }
#### BoarderDrone :GetBoardingDrone ()
{: aria-label='Functions' }

______
### GetNextProjectile ()
{: aria-label='Functions' }
#### [Projectile](../Hyperspace/Projectile) :GetNextProjectile ()
{: aria-label='Functions' }

______
### GetOwnerId ()
{: aria-label='Functions' }
#### integer :GetOwnerId ()
{: aria-label='Functions' }

______
### GetRandomTargettingPoint ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean unk)
{: aria-label='Functions' }

______
### GetSelfId ()
{: aria-label='Functions' }
#### integer :GetSelfId ()
{: aria-label='Functions' }

______
### GetShieldShape ()
{: aria-label='Functions' }
#### [Ellipse](../Hyperspace/Ellipse) :GetShieldShape ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Functions' }

______
### GetSpaceId ()
{: aria-label='Functions' }
#### integer :GetSpaceId ()
{: aria-label='Functions' }

______
### GetSpeed ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Functions' }

______
### GetTooltip ()
{: aria-label='Functions' }
#### string :GetTooltip ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Functions' }

______
### GetWeaponCooldown ()
{: aria-label='Functions' }
#### number :GetWeaponCooldown ()
{: aria-label='Functions' }

______
### GetWorldCenterPoint ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Functions' }

______
### HasTarget ()
{: aria-label='Functions' }
#### boolean :HasTarget ()
{: aria-label='Functions' }

______
### HideUnderOwner ()
{: aria-label='Functions' }
#### boolean :HideUnderOwner ()
{: aria-label='Functions' }

______
### MouseMove ()
{: aria-label='Functions' }
#### void :MouseMove (integer mX, integer mY)
{: aria-label='Functions' }

______
### OnRender ()
{: aria-label='Functions' }
#### void :OnRender (integer space)
{: aria-label='Functions' }

______
### PickDestination ()
{: aria-label='Functions' }
#### void :PickDestination ()
{: aria-label='Functions' }

______
### PickTarget ()
{: aria-label='Functions' }
#### void :PickTarget ()
{: aria-label='Functions' }

______
### RandomizeStartingPosition ()
{: aria-label='Functions' }
#### void :RandomizeStartingPosition ()
{: aria-label='Functions' }

______
### RenderDrone ()
{: aria-label='Functions' }
#### void :RenderDrone ()
{: aria-label='Functions' }

______
### SetCurrentLocation ()
{: aria-label='Functions' }
#### void :SetCurrentLocation ([Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Functions' }

______
### SetDeployed ()
{: aria-label='Functions' }
#### void :SetDeployed (boolean deployed)
{: aria-label='Functions' }

______
### SetMovementTarget ()
{: aria-label='Functions' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

______
### SetWeaponTarget ()
{: aria-label='Functions' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

______
### UpdateAimingAngle ()
{: aria-label='Functions' }
#### number :UpdateAimingAngle ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired)
{: aria-label='Functions' }

______
### ValidTarget ()
{: aria-label='Functions' }
#### boolean :ValidTarget ()
{: aria-label='Functions' }

______
### ValidTargetObject ()
{: aria-label='Functions' }
#### boolean :ValidTargetObject ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Functions' }

___


## Fields
### _collideable
{: aria-label='Variables' }
#### [Collideable](../Hyperspace/Collideable) ._collideable
{: aria-label='Variables' }

______
### _targetable
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Variables' }

______
### additionalPause
{: aria-label='Variables' }
#### number .additionalPause
{: aria-label='Variables' }

______
### aimingAngle
{: aria-label='Variables' }
#### number .aimingAngle
{: aria-label='Variables' }

______
### bDisrupted
{: aria-label='Variables' }
#### boolean .bDisrupted
{: aria-label='Variables' }

______
### bFire
{: aria-label='Variables' }
#### boolean .bFire
{: aria-label='Variables' }

______
### bLoadedPosition
{: aria-label='Variables' }
#### boolean .bLoadedPosition
{: aria-label='Variables' }

______
### beamCurrentTarget
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .beamCurrentTarget
{: aria-label='Variables' }

______
### beamFinalTarget
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .beamFinalTarget
{: aria-label='Variables' }

______
### beamSpeed
{: aria-label='Variables' }
#### number .beamSpeed
{: aria-label='Variables' }

______
### currentLocation
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .currentLocation
{: aria-label='Variables' }

______
### currentSpace
{: aria-label='Variables' }
#### integer .currentSpace
{: aria-label='Variables' }

______
### current_angle
{: aria-label='Variables' }
#### number .current_angle
{: aria-label='Variables' }

______
### deployedLastFrame
{: aria-label='Variables' }
#### boolean .deployedLastFrame
{: aria-label='Variables' }

______
### desiredAimingAngle
{: aria-label='Variables' }
#### number .desiredAimingAngle
{: aria-label='Variables' }

______
### destinationLocation
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .destinationLocation
{: aria-label='Variables' }

______
### destinationSpace
{: aria-label='Variables' }
#### integer .destinationSpace
{: aria-label='Variables' }

______
### explosion
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Variables' }

______
### hackAngle
{: aria-label='Variables' }
#### number .hackAngle
{: aria-label='Variables' }

______
### hackSparks
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .hackSparks
{: aria-label='Variables' }

______
### ionStun
{: aria-label='Variables' }
#### number .ionStun
{: aria-label='Variables' }

______
### lastAimingAngle
{: aria-label='Variables' }
#### number .lastAimingAngle
{: aria-label='Variables' }

______
### lastLocation
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .lastLocation
{: aria-label='Variables' }

______
### lifespan
{: aria-label='Variables' }
#### integer .lifespan
{: aria-label='Variables' }

______
### message
{: aria-label='Variables' }
#### DamageMessage .message
{: aria-label='Variables' }

______
### movementTarget
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) .movementTarget
{: aria-label='Variables' }

______
### pause
{: aria-label='Variables' }
#### number .pause
{: aria-label='Variables' }

______
### pointTarget
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .pointTarget
{: aria-label='Variables' }

______
### poweredLastFrame
{: aria-label='Variables' }
#### boolean .poweredLastFrame
{: aria-label='Variables' }

______
### speedVector
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .speedVector
{: aria-label='Variables' }

______
### targetLocation
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .targetLocation
{: aria-label='Variables' }

______
### targetSpeed
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .targetSpeed
{: aria-label='Variables' }

______
### weaponBlueprint (Read-only)
{: aria-label='Variables' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .weaponBlueprint
{: aria-label='Variables' }
**Read-only**

______
### weaponCooldown
{: aria-label='Variables' }
#### number .weaponCooldown
{: aria-label='Variables' }

______
### weaponTarget
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) .weaponTarget
{: aria-label='Variables' }

______
### weapon_animation
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .weapon_animation
{: aria-label='Variables' }

___
