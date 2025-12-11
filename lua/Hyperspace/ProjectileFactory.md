---
layout: lua
title: ProjectileFactory
lang: en
---

# Class "ProjectileFactory"


Extends: [ShipObject](../Hyperspace/ShipObject)


## Constructors
{: #Constructors .section}
### ProjectileFactory ()
{: #ProjectileFactory aria-label='Constructors' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) ProjectileFactory ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer shipId)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .section}
<details markdown="1"><summary markdown="span">Inherited Methods</summary>


#### From [ShipObject](ShipObject)

| Return Type | Method |
| --- | --- |
| boolean | :[AddAugmentation](ShipObject#AddAugmentation) (string augment) |
| void | :[ClearShipInfo](ShipObject#ClearShipInfo) () |
| integer | :[GetAugmentationCount](ShipObject#GetAugmentationCount) () |
| vector\<string\> | :[GetAugmentationList](ShipObject#GetAugmentationList) () |
| number | :[GetAugmentationValue](ShipObject#GetAugmentationValue) (string augment) |
| integer | :[HasAugmentation](ShipObject#HasAugmentation) (string augment) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>
___
### Fire ()
{: #Fire aria-label='Methods' }
#### void :Fire (vector\<[Pointf](../Hyperspace/Pointf)\> points, integer target)
{: aria-label='Methods' }

___
### FireNextShot ()
{: #FireNextShot aria-label='Methods' }
#### boolean :FireNextShot ()
{: aria-label='Methods' }

___
### ForceCoolup ()
{: #ForceCoolup aria-label='Methods' }
#### void :ForceCoolup ()
{: aria-label='Methods' }

___
### GetProjectile ()
{: #GetProjectile aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Methods' }

___
### IsChargedGoal ()
{: #IsChargedGoal aria-label='Methods' }
#### boolean :IsChargedGoal ()
{: aria-label='Methods' }

___
### NumTargetsRequired ()
{: #NumTargetsRequired aria-label='Methods' }
#### integer :NumTargetsRequired ()
{: aria-label='Methods' }

___
### SetCooldownModifier ()
{: #SetCooldownModifier aria-label='Methods' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip aria-label='Methods' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Methods' }

___
### SetHacked ()
{: #SetHacked aria-label='Methods' }
#### void :SetHacked (integer hacked)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
<details markdown="1"><summary markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId-) |

</details>
___
### autoFiring
{: #autoFiring aria-label='Fields' }
#### boolean .autoFiring
{: aria-label='Fields' }

___
### bFiredOnce
{: #bFiredOnce aria-label='Fields' }
#### boolean .bFiredOnce
{: aria-label='Fields' }

___
### baseCooldown
{: #baseCooldown aria-label='Fields' }
#### number .baseCooldown
{: aria-label='Fields' }

___
### blueprint
{: #blueprint aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Fields' }

___
### boostLevel
{: #boostLevel aria-label='Fields' }
#### integer .boostLevel
{: aria-label='Fields' }

___
### chargeLevel
{: #chargeLevel aria-label='Fields' }
#### integer .chargeLevel
{: aria-label='Fields' }

___
### cooldown
{: #cooldown aria-label='Fields' }
#### pair\<number, number\> .cooldown
{: aria-label='Fields' }

___
### cooldownModifier
{: #cooldownModifier aria-label='Fields' }
#### number .cooldownModifier
{: aria-label='Fields' }

___
### currentEntryAngle
{: #currentEntryAngle aria-label='Fields' }
#### number .currentEntryAngle
{: aria-label='Fields' }

___
### currentFiringAngle
{: #currentFiringAngle aria-label='Fields' }
#### number .currentFiringAngle
{: aria-label='Fields' }

___
### currentShipTarget
{: #currentShipTarget aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Fields' }

___
### fireWhenReady
{: #fireWhenReady aria-label='Fields' }
#### boolean .fireWhenReady
{: aria-label='Fields' }

___
### flight_animation
{: #flight_animation aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### goalChargeLevel
{: #goalChargeLevel aria-label='Fields' }
#### integer .goalChargeLevel
{: aria-label='Fields' }

___
### iAmmo
{: #iAmmo aria-label='Fields' }
#### integer .iAmmo
{: aria-label='Fields' }

___
### iBonusPower
{: #iBonusPower aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: #iHackLevel aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iSpendMissile
{: #iSpendMissile aria-label='Fields' }
#### integer .iSpendMissile
{: aria-label='Fields' }

___
### isArtillery
{: #isArtillery aria-label='Fields' }
#### boolean .isArtillery
{: aria-label='Fields' }

___
### lastProjectileId
{: #lastProjectileId aria-label='Fields' }
#### integer .lastProjectileId
{: aria-label='Fields' }

___
### lastTargets
{: #lastTargets aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Fields' }

___
### localPosition
{: #localPosition aria-label='Fields' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Fields' }

___
### mount
{: #mount aria-label='Fields' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Fields' }

___
### name
{: #name aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

___
### numShots
{: #numShots aria-label='Fields' }
#### integer .numShots
{: aria-label='Fields' }

___
### powered
{: #powered aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### queuedProjectiles
{: #queuedProjectiles aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Fields' }

___
### radius
{: #radius aria-label='Fields' }
#### integer .radius
{: aria-label='Fields' }

___
### requiredPower
{: #requiredPower aria-label='Fields' }
#### integer .requiredPower
{: aria-label='Fields' }

___
### shotsFiredAtTarget
{: #shotsFiredAtTarget aria-label='Fields' }
#### integer .shotsFiredAtTarget
{: aria-label='Fields' }

___
### subCooldown
{: #subCooldown aria-label='Fields' }
#### pair\<number, number\> .subCooldown
{: aria-label='Fields' }

___
### targetId
{: #targetId aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
### targets
{: #targets aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Fields' }

___
### weaponVisual
{: #weaponVisual aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Fields' }

___
