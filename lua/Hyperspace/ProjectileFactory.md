---
layout: lua
title: ProjectileFactory
lang: en
category: Class
---

# Class "ProjectileFactory"


Extends: [ShipObject](../Hyperspace/ShipObject)

<!-- Head content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/_head.md" -->


## Constructors
{: #Constructors .lua-content-section}
### ProjectileFactory ()
{: #ProjectileFactory .lua-content-item aria-label='Constructors' }
#### [ProjectileFactory](../Hyperspace/ProjectileFactory) ProjectileFactory ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) bp, integer shipId)
{: aria-label='Constructors' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/ProjectileFactory(Hyperspace.WeaponBlueprint,integer).md" -->

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
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equipmentName, boolean checkCargo=false) |
| integer | :[HasEquipment](ShipObject#HasEquipment) (string equip) |
| void | :[RemoveAugmentation](ShipObject#RemoveAugmentation) (string augment) |

</details>

___
### Fire ()
{: #Fire .lua-content-item aria-label='Methods' }
#### void :Fire (vector\<[Pointf](../Hyperspace/Pointf)\> points, integer target)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/Fire(vector_Hyperspace.Pointf_,integer).md" -->

___
### FireNextShot ()
{: #FireNextShot .lua-content-item aria-label='Methods' }
#### boolean :FireNextShot ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/FireNextShot().md" -->

___
### ForceCoolup ()
{: #ForceCoolup .lua-content-item aria-label='Methods' }
#### void :ForceCoolup ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/ForceCoolup().md" -->

___
### GetProjectile ()
{: #GetProjectile .lua-content-item aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetProjectile ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/GetProjectile().md" -->

___
### IsChargedGoal ()
{: #IsChargedGoal .lua-content-item aria-label='Methods' }
#### boolean :IsChargedGoal ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/IsChargedGoal().md" -->

___
### NumTargetsRequired ()
{: #NumTargetsRequired .lua-content-item aria-label='Methods' }
#### integer :NumTargetsRequired ()
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/NumTargetsRequired().md" -->

___
### SetCooldownModifier ()
{: #SetCooldownModifier .lua-content-item aria-label='Methods' }
#### void :SetCooldownModifier (number mod)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/SetCooldownModifier(number).md" -->

___
### SetCurrentShip ()
{: #SetCurrentShip .lua-content-item aria-label='Methods' }
#### void :SetCurrentShip ([Targetable](../Hyperspace/Targetable) ship)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/SetCurrentShip(Hyperspace.Targetable).md" -->

___
### SetHacked ()
{: #SetHacked .lua-content-item aria-label='Methods' }
#### void :SetHacked (integer hacked)
{: aria-label='Methods' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/SetHacked(integer).md" -->

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [ShipObject](ShipObject)

| Type | Field |
| --- | --- |
| integer | .[iShipId](ShipObject#iShipId) |

</details>

___
### autoFiring
{: #autoFiring .lua-content-item aria-label='Fields' }
#### boolean .autoFiring
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/autoFiring.md" -->

___
### bFiredOnce
{: #bFiredOnce .lua-content-item aria-label='Fields' }
#### boolean .bFiredOnce
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/bFiredOnce.md" -->

___
### baseCooldown
{: #baseCooldown .lua-content-item aria-label='Fields' }
#### number .baseCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/baseCooldown.md" -->

___
### blueprint
{: #blueprint .lua-content-item aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .blueprint
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/blueprint.md" -->

___
### boostLevel
{: #boostLevel .lua-content-item aria-label='Fields' }
#### integer .boostLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/boostLevel.md" -->

___
### chargeLevel
{: #chargeLevel .lua-content-item aria-label='Fields' }
#### integer .chargeLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/chargeLevel.md" -->

___
### cooldown
{: #cooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .cooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/cooldown.md" -->

___
### cooldownModifier
{: #cooldownModifier .lua-content-item aria-label='Fields' }
#### number .cooldownModifier
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/cooldownModifier.md" -->

___
### currentEntryAngle
{: #currentEntryAngle .lua-content-item aria-label='Fields' }
#### number .currentEntryAngle
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/currentEntryAngle.md" -->

___
### currentFiringAngle
{: #currentFiringAngle .lua-content-item aria-label='Fields' }
#### number .currentFiringAngle
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/currentFiringAngle.md" -->

___
### currentShipTarget
{: #currentShipTarget .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .currentShipTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/currentShipTarget.md" -->

___
### fireWhenReady
{: #fireWhenReady .lua-content-item aria-label='Fields' }
#### boolean .fireWhenReady
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/fireWhenReady.md" -->

___
### flight_animation
{: #flight_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .flight_animation
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/flight_animation.md" -->

___
### goalChargeLevel
{: #goalChargeLevel .lua-content-item aria-label='Fields' }
#### integer .goalChargeLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/goalChargeLevel.md" -->

___
### iAmmo
{: #iAmmo .lua-content-item aria-label='Fields' }
#### integer .iAmmo
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/iAmmo.md" -->

___
### iBonusPower
{: #iBonusPower .lua-content-item aria-label='Fields' }
#### integer .iBonusPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/iBonusPower.md" -->

___
### iHackLevel
{: #iHackLevel .lua-content-item aria-label='Fields' }
#### integer .iHackLevel
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/iHackLevel.md" -->

___
### iSpendMissile
{: #iSpendMissile .lua-content-item aria-label='Fields' }
#### integer .iSpendMissile
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/iSpendMissile.md" -->

___
### isArtillery
{: #isArtillery .lua-content-item aria-label='Fields' }
#### boolean .isArtillery
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/isArtillery.md" -->

___
### lastProjectileId
{: #lastProjectileId .lua-content-item aria-label='Fields' }
#### integer .lastProjectileId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/lastProjectileId.md" -->

___
### lastTargets
{: #lastTargets .lua-content-item aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .lastTargets
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/lastTargets.md" -->

___
### localPosition
{: #localPosition .lua-content-item aria-label='Fields' }
#### [Point](../Hyperspace/Point) .localPosition
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/localPosition.md" -->

___
### mount
{: #mount .lua-content-item aria-label='Fields' }
#### [WeaponMount](../Hyperspace/WeaponMount) .mount
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/mount.md" -->

___
### name
{: #name .lua-content-item aria-label='Fields' }
#### string .name
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/name.md" -->

___
### numShots
{: #numShots .lua-content-item aria-label='Fields' }
#### integer .numShots
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/numShots.md" -->

___
### powered
{: #powered .lua-content-item aria-label='Fields' }
#### boolean .powered
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/powered.md" -->

___
### queuedProjectiles
{: #queuedProjectiles .lua-content-item aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .queuedProjectiles
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/queuedProjectiles.md" -->

___
### radius
{: #radius .lua-content-item aria-label='Fields' }
#### integer .radius
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/radius.md" -->

___
### requiredPower
{: #requiredPower .lua-content-item aria-label='Fields' }
#### integer .requiredPower
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/requiredPower.md" -->

___
### shotsFiredAtTarget
{: #shotsFiredAtTarget .lua-content-item aria-label='Fields' }
#### integer .shotsFiredAtTarget
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/shotsFiredAtTarget.md" -->

___
### subCooldown
{: #subCooldown .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .subCooldown
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/subCooldown.md" -->

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/table.md" -->

___
### targetId
{: #targetId .lua-content-item aria-label='Fields' }
#### integer .targetId
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/targetId.md" -->

___
### targets
{: #targets .lua-content-item aria-label='Fields' }
#### vector\<[Pointf](../Hyperspace/Pointf)\> .targets
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/targets.md" -->

___
### weaponVisual
{: #weaponVisual .lua-content-item aria-label='Fields' }
#### [WeaponAnimation](../Hyperspace/WeaponAnimation) .weaponVisual
{: aria-label='Fields' }
<!-- Content to be pulled from "lua-source-parts-inject/Hyperspace/ProjectileFactory/weaponVisual.md" -->

___
