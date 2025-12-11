---
layout: lua
title: ProjectileFactory
lang: en
---

# Class "ProjectileFactory"

Extends: [ShipObject](../Hyperspace/ShipObject)


## Constructors
### ProjectileFactory ()
{: aria-label='Constructors' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) ProjectileFactory ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer shipId)
{: aria-label='Constructors' }

___




## Methods
### Fire ()
{: aria-label='Methods' }
#### void :Fire (vector\<[Pointf](../Hyperspace/Pointf)\> points, integer target)
{: aria-label='Methods' }

___
### FireNextShot ()
{: aria-label='Methods' }
#### boolean :FireNextShot ()
{: aria-label='Methods' }

___
### ForceCoolup ()
{: aria-label='Methods' }
#### void :ForceCoolup ()
{: aria-label='Methods' }

___
### GetProjectile ()
{: aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Methods' }

___
### IsChargedGoal ()
{: aria-label='Methods' }
#### boolean :IsChargedGoal ()
{: aria-label='Methods' }

___
### NumTargetsRequired ()
{: aria-label='Methods' }
#### integer :NumTargetsRequired ()
{: aria-label='Methods' }

___
### SetCooldownModifier ()
{: aria-label='Methods' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Methods' }

___
### SetHacked ()
{: aria-label='Methods' }
#### void :SetHacked (integer hacked)
{: aria-label='Methods' }

___


## Fields
### autoFiring
{: aria-label='Fields' }
#### boolean .autoFiring
{: aria-label='Fields' }

___
### bFiredOnce
{: aria-label='Fields' }
#### boolean .bFiredOnce
{: aria-label='Fields' }

___
### baseCooldown
{: aria-label='Fields' }
#### number .baseCooldown
{: aria-label='Fields' }

___
### blueprint
{: aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Fields' }

___
### boostLevel
{: aria-label='Fields' }
#### integer .boostLevel
{: aria-label='Fields' }

___
### chargeLevel
{: aria-label='Fields' }
#### integer .chargeLevel
{: aria-label='Fields' }

___
### cooldown
{: aria-label='Fields' }
#### pair\<number, number\> .cooldown
{: aria-label='Fields' }

___
### cooldownModifier
{: aria-label='Fields' }
#### number .cooldownModifier
{: aria-label='Fields' }

___
### currentEntryAngle
{: aria-label='Fields' }
#### number .currentEntryAngle
{: aria-label='Fields' }

___
### currentFiringAngle
{: aria-label='Fields' }
#### number .currentFiringAngle
{: aria-label='Fields' }

___
### currentShipTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Fields' }

___
### fireWhenReady
{: aria-label='Fields' }
#### boolean .fireWhenReady
{: aria-label='Fields' }

___
### flight_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### goalChargeLevel
{: aria-label='Fields' }
#### integer .goalChargeLevel
{: aria-label='Fields' }

___
### iAmmo
{: aria-label='Fields' }
#### integer .iAmmo
{: aria-label='Fields' }

___
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iSpendMissile
{: aria-label='Fields' }
#### integer .iSpendMissile
{: aria-label='Fields' }

___
### isArtillery
{: aria-label='Fields' }
#### boolean .isArtillery
{: aria-label='Fields' }

___
### lastProjectileId
{: aria-label='Fields' }
#### integer .lastProjectileId
{: aria-label='Fields' }

___
### lastTargets
{: aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Fields' }

___
### localPosition
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Fields' }

___
### mount
{: aria-label='Fields' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Fields' }

___
### name
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

___
### numShots
{: aria-label='Fields' }
#### integer .numShots
{: aria-label='Fields' }

___
### powered
{: aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### queuedProjectiles
{: aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Fields' }

___
### radius
{: aria-label='Fields' }
#### integer .radius
{: aria-label='Fields' }

___
### requiredPower
{: aria-label='Fields' }
#### integer .requiredPower
{: aria-label='Fields' }

___
### shotsFiredAtTarget
{: aria-label='Fields' }
#### integer .shotsFiredAtTarget
{: aria-label='Fields' }

___
### subCooldown
{: aria-label='Fields' }
#### pair\<number, number\> .subCooldown
{: aria-label='Fields' }

___
### targetId
{: aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
### targets
{: aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Fields' }

___
### weaponVisual
{: aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Fields' }

___
