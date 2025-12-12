---
layout: lua
title: ProjectileFactory
lang: en
---

# Class "ProjectileFactory"


Extends: [ShipObject](../Hyperspace/ShipObject)


## Constructors
{: #Constructors .lua-content-section}
### ProjectileFactory ()
{: #ProjectileFactory .lua-content-item aria-label='Constructors' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) ProjectileFactory ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer shipId)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [ShipObject](ShipObject)

| Return Type | Method |
| --- | --- |
| boolean | :[AddAugmentation](ShipObject#AddAugmentation) (string augment) |
| void | :[ClearShipInfo](ShipObject#ClearShipInfo) () |
| integer | :[GetAugmentationCount](ShipObject#GetAugmentationCount) () |
| vector\<string\> | :[GetAugmentationList](ShipObject#GetAugmentationList) () |
| number | :[GetAugmentationValue](ShipObject#GetAugmentationValue) (string augment) |
| integer | :[HasAugmentation](ShipObject#HasAugmentation) (string augment) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>
___
### Fire ()
{: #Fire .lua-content-item aria-label='Methods' }
#### void :Fire (vector\<[Pointf](../Hyperspace/Pointf)\> points, integer target)
{: aria-label='Methods' }

___
### FireNextShot ()
{: #FireNextShot .lua-content-item aria-label='Methods' }
#### boolean :FireNextShot ()
{: aria-label='Methods' }

___
### ForceCoolup ()
{: #ForceCoolup .lua-content-item aria-label='Methods' }
#### void :ForceCoolup ()
{: aria-label='Methods' }

___
### GetProjectile ()
{: #GetProjectile .lua-content-item aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Methods' }

___
### IsChargedGoal ()
{: #IsChargedGoal .lua-content-item aria-label='Methods' }
#### boolean :IsChargedGoal ()
{: aria-label='Methods' }

___
### NumTargetsRequired ()
{: #NumTargetsRequired .lua-content-item aria-label='Methods' }
#### integer :NumTargetsRequired ()
{: aria-label='Methods' }

___
### SetCooldownModifier ()
{: #SetCooldownModifier .lua-content-item aria-label='Methods' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip .lua-content-item aria-label='Methods' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Methods' }

___
### SetHacked ()
{: #SetHacked .lua-content-item aria-label='Methods' }
#### void :SetHacked (integer hacked)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId-) |

</details>
___
### autoFiring
{: #autoFiring .lua-content-item aria-label='Fields' }
#### boolean .autoFiring
{: aria-label='Fields' }

___
### bFiredOnce
{: #bFiredOnce .lua-content-item aria-label='Fields' }
#### boolean .bFiredOnce
{: aria-label='Fields' }

___
### baseCooldown
{: #baseCooldown .lua-content-item aria-label='Fields' }
#### number .baseCooldown
{: aria-label='Fields' }

___
### blueprint
{: #blueprint .lua-content-item aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Fields' }

___
### boostLevel
{: #boostLevel .lua-content-item aria-label='Fields' }
#### integer .boostLevel
{: aria-label='Fields' }

___
### chargeLevel
{: #chargeLevel .lua-content-item aria-label='Fields' }
#### integer .chargeLevel
{: aria-label='Fields' }

___
### cooldown
{: #cooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .cooldown
{: aria-label='Fields' }

___
### cooldownModifier
{: #cooldownModifier .lua-content-item aria-label='Fields' }
#### number .cooldownModifier
{: aria-label='Fields' }

___
### currentEntryAngle
{: #currentEntryAngle .lua-content-item aria-label='Fields' }
#### number .currentEntryAngle
{: aria-label='Fields' }

___
### currentFiringAngle
{: #currentFiringAngle .lua-content-item aria-label='Fields' }
#### number .currentFiringAngle
{: aria-label='Fields' }

___
### currentShipTarget
{: #currentShipTarget .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Fields' }

___
### fireWhenReady
{: #fireWhenReady .lua-content-item aria-label='Fields' }
#### boolean .fireWhenReady
{: aria-label='Fields' }

___
### flight_animation
{: #flight_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }

___
### goalChargeLevel
{: #goalChargeLevel .lua-content-item aria-label='Fields' }
#### integer .goalChargeLevel
{: aria-label='Fields' }

___
### iAmmo
{: #iAmmo .lua-content-item aria-label='Fields' }
#### integer .iAmmo
{: aria-label='Fields' }

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }

___
### iHackLevel
{: #iHackLevel .lua-content-item aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }

___
### iSpendMissile
{: #iSpendMissile .lua-content-item aria-label='Fields' }
#### integer .iSpendMissile
{: aria-label='Fields' }

___
### isArtillery
{: #isArtillery .lua-content-item aria-label='Fields' }
#### boolean .isArtillery
{: aria-label='Fields' }

___
### lastProjectileId
{: #lastProjectileId .lua-content-item aria-label='Fields' }
#### integer .lastProjectileId
{: aria-label='Fields' }

___
### lastTargets
{: #lastTargets .lua-content-item aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Fields' }

___
### localPosition
{: #localPosition .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Fields' }

___
### mount
{: #mount .lua-content-item aria-label='Fields' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Fields' }

___
### name
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }

___
### numShots
{: #numShots .lua-content-item aria-label='Fields' }
#### integer .numShots
{: aria-label='Fields' }

___
### powered
{: #powered .lua-content-item aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }

___
### queuedProjectiles
{: #queuedProjectiles .lua-content-item aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Fields' }

___
### radius
{: #radius .lua-content-item aria-label='Fields' }
#### integer .radius
{: aria-label='Fields' }

___
### requiredPower
{: #requiredPower .lua-content-item aria-label='Fields' }
#### integer .requiredPower
{: aria-label='Fields' }

___
### shotsFiredAtTarget
{: #shotsFiredAtTarget .lua-content-item aria-label='Fields' }
#### integer .shotsFiredAtTarget
{: aria-label='Fields' }

___
### subCooldown
{: #subCooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .subCooldown
{: aria-label='Fields' }

___
### targetId
{: #targetId .lua-content-item aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }

___
### targets
{: #targets .lua-content-item aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Fields' }

___
### weaponVisual
{: #weaponVisual .lua-content-item aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Fields' }

___
