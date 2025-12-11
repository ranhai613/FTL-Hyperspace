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

______
### FireNextShot ()
{: aria-label='Methods' }
#### boolean :FireNextShot ()
{: aria-label='Methods' }

______
### ForceCoolup ()
{: aria-label='Methods' }
#### void :ForceCoolup ()
{: aria-label='Methods' }

______
### GetProjectile ()
{: aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Methods' }

______
### IsChargedGoal ()
{: aria-label='Methods' }
#### boolean :IsChargedGoal ()
{: aria-label='Methods' }

______
### NumTargetsRequired ()
{: aria-label='Methods' }
#### integer :NumTargetsRequired ()
{: aria-label='Methods' }

______
### SetCooldownModifier ()
{: aria-label='Methods' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Methods' }

______
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Methods' }

______
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

______
### bFiredOnce
{: aria-label='Fields' }
#### boolean .bFiredOnce
{: aria-label='Fields' }

______
### baseCooldown
{: aria-label='Fields' }
#### number .baseCooldown
{: aria-label='Fields' }

______
### blueprint
{: aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Fields' }

______
### boostLevel
{: aria-label='Fields' }
#### integer .boostLevel
{: aria-label='Fields' }

______
### chargeLevel
{: aria-label='Fields' }
#### integer .chargeLevel
{: aria-label='Fields' }

______
### cooldown
{: aria-label='Fields' }
#### pair\<number, number\> .cooldown
{: aria-label='Fields' }

______
### cooldownModifier
{: aria-label='Fields' }
#### number .cooldownModifier
{: aria-label='Fields' }

______
### currentEntryAngle
{: aria-label='Fields' }
#### number .currentEntryAngle
{: aria-label='Fields' }

______
### currentFiringAngle
{: aria-label='Fields' }
#### number .currentFiringAngle
{: aria-label='Fields' }

______
### currentShipTarget
{: aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Fields' }

______
### fireWhenReady
{: aria-label='Fields' }
#### boolean .fireWhenReady
{: aria-label='Fields' }

______
### flight_animation
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

______
### goalChargeLevel
{: aria-label='Fields' }
#### integer .goalChargeLevel
{: aria-label='Fields' }

______
### iAmmo
{: aria-label='Fields' }
#### integer .iAmmo
{: aria-label='Fields' }

______
### iBonusPower
{: aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

______
### iHackLevel
{: aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

______
### iSpendMissile
{: aria-label='Fields' }
#### integer .iSpendMissile
{: aria-label='Fields' }

______
### isArtillery
{: aria-label='Fields' }
#### boolean .isArtillery
{: aria-label='Fields' }

______
### lastProjectileId
{: aria-label='Fields' }
#### integer .lastProjectileId
{: aria-label='Fields' }

______
### lastTargets
{: aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Fields' }

______
### localPosition
{: aria-label='Fields' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Fields' }

______
### mount
{: aria-label='Fields' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Fields' }

______
### name
{: aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

______
### numShots
{: aria-label='Fields' }
#### integer .numShots
{: aria-label='Fields' }

______
### powered
{: aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

______
### queuedProjectiles
{: aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Fields' }

______
### radius
{: aria-label='Fields' }
#### integer .radius
{: aria-label='Fields' }

______
### requiredPower
{: aria-label='Fields' }
#### integer .requiredPower
{: aria-label='Fields' }

______
### shotsFiredAtTarget
{: aria-label='Fields' }
#### integer .shotsFiredAtTarget
{: aria-label='Fields' }

______
### subCooldown
{: aria-label='Fields' }
#### pair\<number, number\> .subCooldown
{: aria-label='Fields' }

______
### targetId
{: aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

______
### targets
{: aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Fields' }

______
### weaponVisual
{: aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Fields' }

___
