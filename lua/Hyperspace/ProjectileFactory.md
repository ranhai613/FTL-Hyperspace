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
{: aria-label='Functions' }
#### void :Fire (vector\<[Pointf](../Hyperspace/Pointf)\> points, integer target)
{: aria-label='Functions' }

______
### FireNextShot ()
{: aria-label='Functions' }
#### boolean :FireNextShot ()
{: aria-label='Functions' }

______
### ForceCoolup ()
{: aria-label='Functions' }
#### void :ForceCoolup ()
{: aria-label='Functions' }

______
### GetProjectile ()
{: aria-label='Functions' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Functions' }

______
### IsChargedGoal ()
{: aria-label='Functions' }
#### boolean :IsChargedGoal ()
{: aria-label='Functions' }

______
### NumTargetsRequired ()
{: aria-label='Functions' }
#### integer :NumTargetsRequired ()
{: aria-label='Functions' }

______
### SetCooldownModifier ()
{: aria-label='Functions' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Functions' }

______
### SetCurrentShip ()
{: aria-label='Functions' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Functions' }

______
### SetHacked ()
{: aria-label='Functions' }
#### void :SetHacked (integer hacked)
{: aria-label='Functions' }

___


## Fields
### autoFiring
{: aria-label='Variables' }
#### boolean .autoFiring
{: aria-label='Variables' }

______
### bFiredOnce
{: aria-label='Variables' }
#### boolean .bFiredOnce
{: aria-label='Variables' }

______
### baseCooldown
{: aria-label='Variables' }
#### number .baseCooldown
{: aria-label='Variables' }

______
### blueprint
{: aria-label='Variables' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Variables' }

______
### boostLevel
{: aria-label='Variables' }
#### integer .boostLevel
{: aria-label='Variables' }

______
### chargeLevel
{: aria-label='Variables' }
#### integer .chargeLevel
{: aria-label='Variables' }

______
### cooldown
{: aria-label='Variables' }
#### pair\<number, number\> .cooldown
{: aria-label='Variables' }

______
### cooldownModifier
{: aria-label='Variables' }
#### number .cooldownModifier
{: aria-label='Variables' }

______
### currentEntryAngle
{: aria-label='Variables' }
#### number .currentEntryAngle
{: aria-label='Variables' }

______
### currentFiringAngle
{: aria-label='Variables' }
#### number .currentFiringAngle
{: aria-label='Variables' }

______
### currentShipTarget
{: aria-label='Variables' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Variables' }

______
### fireWhenReady
{: aria-label='Variables' }
#### boolean .fireWhenReady
{: aria-label='Variables' }

______
### flight_animation
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Variables' }

______
### goalChargeLevel
{: aria-label='Variables' }
#### integer .goalChargeLevel
{: aria-label='Variables' }

______
### iAmmo
{: aria-label='Variables' }
#### integer .iAmmo
{: aria-label='Variables' }

______
### iBonusPower
{: aria-label='Variables' }
#### integer .iBonusPower
{: aria-label='Variables' }

______
### iHackLevel
{: aria-label='Variables' }
#### integer .iHackLevel
{: aria-label='Variables' }

______
### iSpendMissile
{: aria-label='Variables' }
#### integer .iSpendMissile
{: aria-label='Variables' }

______
### isArtillery
{: aria-label='Variables' }
#### boolean .isArtillery
{: aria-label='Variables' }

______
### lastProjectileId
{: aria-label='Variables' }
#### integer .lastProjectileId
{: aria-label='Variables' }

______
### lastTargets
{: aria-label='Variables' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Variables' }

______
### localPosition
{: aria-label='Variables' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Variables' }

______
### mount
{: aria-label='Variables' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Variables' }

______
### name
{: aria-label='Variables' }
#### string .name
{: aria-label='Variables' }

______
### numShots
{: aria-label='Variables' }
#### integer .numShots
{: aria-label='Variables' }

______
### powered
{: aria-label='Variables' }
#### boolean .powered
{: aria-label='Variables' }

______
### queuedProjectiles
{: aria-label='Variables' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Variables' }

______
### radius
{: aria-label='Variables' }
#### integer .radius
{: aria-label='Variables' }

______
### requiredPower
{: aria-label='Variables' }
#### integer .requiredPower
{: aria-label='Variables' }

______
### shotsFiredAtTarget
{: aria-label='Variables' }
#### integer .shotsFiredAtTarget
{: aria-label='Variables' }

______
### subCooldown
{: aria-label='Variables' }
#### pair\<number, number\> .subCooldown
{: aria-label='Variables' }

______
### targetId
{: aria-label='Variables' }
#### integer .targetId
{: aria-label='Variables' }

______
### targets
{: aria-label='Variables' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Variables' }

______
### weaponVisual
{: aria-label='Variables' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Variables' }

___
