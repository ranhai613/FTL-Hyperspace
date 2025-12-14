---
layout: lua
title: SpaceDrone
lang: en
category: Class
---

# Class "SpaceDrone"


Extends: [Drone](../Hyperspace/Drone)

Subclasses: [BoarderPodDrone](../Hyperspace/BoarderPodDrone), [CombatDrone](../Hyperspace/CombatDrone), [DefenseDrone](../Hyperspace/DefenseDrone), [HackingDrone](../Hyperspace/HackingDrone)





## Methods
{: #Methods .lua-content-section}
<details markdown="1"><summary id="InheritedMethods" class="lua-content-item" markdown="span">Inherited Methods</summary>


#### From [Drone](Drone)

| Return Type | Method |
| --- | --- |
| void | :[BlowUp](Drone#BlowUp) (boolean silent) |
| boolean | :[CanBeDeployed](Drone#CanBeDeployed) () |
| boolean | :[CanBeRecovered](Drone#CanBeRecovered) () |
| boolean | :[Destroyed](Drone#Destroyed) () |
| boolean | :[GetDeployed](Drone#GetDeployed) () |
| integer | :[GetDroneHealth](Drone#GetDroneHealth) () |
| [Slot](../Hyperspace/Slot) | :[GetDroneSlot](Drone#GetDroneSlot) ([Drone](../Hyperspace/Drone) drone) |
| string | :[GetName](Drone#GetName) ([Drone](../Hyperspace/Drone) drone) |
| boolean | :[GetPowered](Drone#GetPowered) () |
| integer | :[GetRequiredPower](Drone#GetRequiredPower) () |
| boolean | :[GetStunned](Drone#GetStunned) () |
| [Point](../Hyperspace/Point) | :[GetWorldLocation](Drone#GetWorldLocation) () |
| void | :[LoadState](Drone#LoadState) (integer fh) |
| boolean | :[NeedsRoom](Drone#NeedsRoom) () |
| void | :[OnDestroy](Drone#OnDestroy) () |
| void | :[OnInit](Drone#OnInit) () |
| void | :[OnLoop](Drone#OnLoop) () |
| boolean | :[RecallOnJump](Drone#RecallOnJump) () |
| void | :[RenderIcon](Drone#RenderIcon) () |
| void | :[SaveState](Drone#SaveState) (integer fh) |
| void | :[SetCurrentShip](Drone#SetCurrentShip) (integer shipId) |
| void | :[SetDestroyed](Drone#SetDestroyed) (boolean dead, boolean setTimer) |
| void | :[SetHacked](Drone#SetHacked) (integer level) |
| void | :[SetInstantPowered](Drone#SetInstantPowered) () |
| void | :[SetPowered](Drone#SetPowered) (boolean _powered) |
| void | :[SetSlot](Drone#SetSlot) (integer room, integer slot) |
| void | :[SetWorldLocation](Drone#SetWorldLocation) ([Point](../Hyperspace/Point) point) |

</details>
___
### CollisionMoving ()
{: #CollisionMoving .lua-content-item aria-label='Methods' }
#### [CollisionResponse](../Hyperspace/CollisionResponse) :CollisionMoving ([Pointf](../Hyperspace/Pointf) start, [Pointf](../Hyperspace/Pointf) finish, [Damage](../Hyperspace/Damage) damage, boolean raytrace)
{: aria-label='Methods' }

___
### DamageArea ()
{: #DamageArea .lua-content-item aria-label='Methods' }
#### boolean :DamageArea ([Pointf](../Hyperspace/Pointf) pos, [Damage](../Hyperspace/Damage) damage, boolean unk)
{: aria-label='Methods' }

___
### DamageBeam ()
{: #DamageBeam .lua-content-item aria-label='Methods' }
#### boolean :DamageBeam ([Pointf](../Hyperspace/Pointf) pos1, [Pointf](../Hyperspace/Pointf) pos2, [Damage](../Hyperspace/Damage) damage)
{: aria-label='Methods' }

___
### GetBoardingDrone ()
{: #GetBoardingDrone .lua-content-item aria-label='Methods' }
#### BoarderDrone :GetBoardingDrone ()
{: aria-label='Methods' }

___
### GetNextProjectile ()
{: #GetNextProjectile .lua-content-item aria-label='Methods' }
#### [Projectile](../Hyperspace/Projectile) :GetNextProjectile ()
{: aria-label='Methods' }

___
### GetOwnerId ()
{: #GetOwnerId .lua-content-item aria-label='Methods' }
#### integer :GetOwnerId ()
{: aria-label='Methods' }

___
### GetRandomTargettingPoint ()
{: #GetRandomTargettingPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetRandomTargettingPoint (boolean unk)
{: aria-label='Methods' }

___
### GetSelfId ()
{: #GetSelfId .lua-content-item aria-label='Methods' }
#### integer :GetSelfId ()
{: aria-label='Methods' }

___
### GetShieldShape ()
{: #GetShieldShape .lua-content-item aria-label='Methods' }
#### [Ellipse](../Hyperspace/Ellipse) :GetShieldShape ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetSpaceId ()
{: #GetSpaceId .lua-content-item aria-label='Methods' }
#### integer :GetSpaceId ()
{: aria-label='Methods' }

___
### GetSpeed ()
{: #GetSpeed .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetSpeed ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: #GetTooltip .lua-content-item aria-label='Methods' }
#### string :GetTooltip ([SpaceDrone](../Hyperspace/SpaceDrone) drone)
{: aria-label='Methods' }

___
### GetWeaponCooldown ()
{: #GetWeaponCooldown .lua-content-item aria-label='Methods' }
#### number :GetWeaponCooldown ()
{: aria-label='Methods' }

___
### GetWorldCenterPoint ()
{: #GetWorldCenterPoint .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :GetWorldCenterPoint ()
{: aria-label='Methods' }

___
### HasTarget ()
{: #HasTarget .lua-content-item aria-label='Methods' }
#### boolean :HasTarget ()
{: aria-label='Methods' }

___
### HideUnderOwner ()
{: #HideUnderOwner .lua-content-item aria-label='Methods' }
#### boolean :HideUnderOwner ()
{: aria-label='Methods' }

___
### MouseMove ()
{: #MouseMove .lua-content-item aria-label='Methods' }
#### void :MouseMove (integer mX, integer mY)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (integer space)
{: aria-label='Methods' }

___
### PickDestination ()
{: #PickDestination .lua-content-item aria-label='Methods' }
#### void :PickDestination ()
{: aria-label='Methods' }

___
### PickTarget ()
{: #PickTarget .lua-content-item aria-label='Methods' }
#### void :PickTarget ()
{: aria-label='Methods' }

___
### RandomizeStartingPosition ()
{: #RandomizeStartingPosition .lua-content-item aria-label='Methods' }
#### void :RandomizeStartingPosition ()
{: aria-label='Methods' }

___
### RenderDrone ()
{: #RenderDrone .lua-content-item aria-label='Methods' }
#### void :RenderDrone ()
{: aria-label='Methods' }

___
### SetCurrentLocation ()
{: #SetCurrentLocation .lua-content-item aria-label='Methods' }
#### void :SetCurrentLocation ([Pointf](../Hyperspace/Pointf) pos)
{: aria-label='Methods' }

___
### SetDeployed ()
{: #SetDeployed .lua-content-item aria-label='Methods' }
#### void :SetDeployed (boolean deployed)
{: aria-label='Methods' }

___
### SetMovementTarget ()
{: #SetMovementTarget .lua-content-item aria-label='Methods' }
#### void :SetMovementTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### SetWeaponTarget ()
{: #SetWeaponTarget .lua-content-item aria-label='Methods' }
#### void :SetWeaponTarget ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___
### UpdateAimingAngle ()
{: #UpdateAimingAngle .lua-content-item aria-label='Methods' }
#### number :UpdateAimingAngle ([Pointf](../Hyperspace/Pointf) location, number percentage, number forceDesired)
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget .lua-content-item aria-label='Methods' }
#### boolean :ValidTarget ()
{: aria-label='Methods' }

___
### ValidTargetObject ()
{: #ValidTargetObject .lua-content-item aria-label='Methods' }
#### boolean :ValidTargetObject ([Targetable](../Hyperspace/Targetable) target)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
<details markdown="1"><summary id="InheritedFields" class="lua-content-item" markdown="span">Inherited Fields</summary>


#### From [Drone](Drone)

| Type | Field |
| --- | --- |
| boolean | .[bDead](Drone#bDead) |
| [DroneBlueprint](../Hyperspace/DroneBlueprint) | .[blueprint](Drone#blueprint) |
| boolean | .[deployed](Drone#deployed) |
| number | .[destroyedTimer](Drone#destroyedTimer) |
| number | .[hackTime](Drone#hackTime) |
| integer | .[iBonusPower](Drone#iBonusPower) |
| integer | .[iHackLevel](Drone#iHackLevel) |
| integer | .[iShipId](Drone#iShipId) |
| integer | .[powerRequired](Drone#powerRequired) |
| boolean | .[powered](Drone#powered) |
| boolean | .[poweredAtLocation](Drone#poweredAtLocation) |
| integer | .[selfId](Drone#selfId) |
| integer | .[type](Drone#type) |

</details>
___
### _collideable
{: #_collideable .lua-content-item aria-label='Fields' }
#### [Collideable](../Hyperspace/Collideable) ._collideable
{: aria-label='Fields' }

___
### _targetable
{: #_targetable .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) ._targetable
{: aria-label='Fields' }

___
### additionalPause
{: #additionalPause .lua-content-item aria-label='Fields' }
#### number .additionalPause
{: aria-label='Fields' }

___
### aimingAngle
{: #aimingAngle .lua-content-item aria-label='Fields' }
#### number .aimingAngle
{: aria-label='Fields' }

___
### bDisrupted
{: #bDisrupted .lua-content-item aria-label='Fields' }
#### boolean .bDisrupted
{: aria-label='Fields' }

___
### bFire
{: #bFire .lua-content-item aria-label='Fields' }
#### boolean .bFire
{: aria-label='Fields' }

___
### bLoadedPosition
{: #bLoadedPosition .lua-content-item aria-label='Fields' }
#### boolean .bLoadedPosition
{: aria-label='Fields' }

___
### beamCurrentTarget
{: #beamCurrentTarget .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamCurrentTarget
{: aria-label='Fields' }

___
### beamFinalTarget
{: #beamFinalTarget .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .beamFinalTarget
{: aria-label='Fields' }

___
### beamSpeed
{: #beamSpeed .lua-content-item aria-label='Fields' }
#### number .beamSpeed
{: aria-label='Fields' }

___
### currentLocation
{: #currentLocation .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentLocation
{: aria-label='Fields' }

___
### currentSpace
{: #currentSpace .lua-content-item aria-label='Fields' }
#### integer .currentSpace
{: aria-label='Fields' }

___
### current_angle
{: #current_angle .lua-content-item aria-label='Fields' }
#### number .current_angle
{: aria-label='Fields' }

___
### deployedLastFrame
{: #deployedLastFrame .lua-content-item aria-label='Fields' }
#### boolean .deployedLastFrame
{: aria-label='Fields' }

___
### desiredAimingAngle
{: #desiredAimingAngle .lua-content-item aria-label='Fields' }
#### number .desiredAimingAngle
{: aria-label='Fields' }

___
### destinationLocation
{: #destinationLocation .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .destinationLocation
{: aria-label='Fields' }

___
### destinationSpace
{: #destinationSpace .lua-content-item aria-label='Fields' }
#### integer .destinationSpace
{: aria-label='Fields' }

___
### explosion
{: #explosion .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .explosion
{: aria-label='Fields' }

___
### hackAngle
{: #hackAngle .lua-content-item aria-label='Fields' }
#### number .hackAngle
{: aria-label='Fields' }

___
### hackSparks
{: #hackSparks .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .hackSparks
{: aria-label='Fields' }

___
### ionStun
{: #ionStun .lua-content-item aria-label='Fields' }
#### number .ionStun
{: aria-label='Fields' }

___
### lastAimingAngle
{: #lastAimingAngle .lua-content-item aria-label='Fields' }
#### number .lastAimingAngle
{: aria-label='Fields' }

___
### lastLocation
{: #lastLocation .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastLocation
{: aria-label='Fields' }

___
### lifespan
{: #lifespan .lua-content-item aria-label='Fields' }
#### integer .lifespan
{: aria-label='Fields' }

___
### message
{: #message .lua-content-item aria-label='Fields' }
#### DamageMessage .message
{: aria-label='Fields' }

___
### movementTarget
{: #movementTarget .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .movementTarget
{: aria-label='Fields' }

___
### pause
{: #pause .lua-content-item aria-label='Fields' }
#### number .pause
{: aria-label='Fields' }

___
### pointTarget
{: #pointTarget .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .pointTarget
{: aria-label='Fields' }

___
### poweredLastFrame
{: #poweredLastFrame .lua-content-item aria-label='Fields' }
#### boolean .poweredLastFrame
{: aria-label='Fields' }

___
### speedVector
{: #speedVector .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .speedVector
{: aria-label='Fields' }

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }

___
### targetLocation
{: #targetLocation .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetLocation
{: aria-label='Fields' }

___
### targetSpeed
{: #targetSpeed .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .targetSpeed
{: aria-label='Fields' }

___
### weaponBlueprint (Read-only)
{: #weaponBlueprint .lua-content-item aria-label='Fields' }
#### [WeaponBlueprint](../Hyperspace/WeaponBlueprint) .weaponBlueprint
{: aria-label='Fields' }
**Read-only**

___
### weaponCooldown
{: #weaponCooldown .lua-content-item aria-label='Fields' }
#### number .weaponCooldown
{: aria-label='Fields' }

___
### weaponTarget
{: #weaponTarget .lua-content-item aria-label='Fields' }
#### [Targetable](../Hyperspace/Targetable) .weaponTarget
{: aria-label='Fields' }

___
### weapon_animation
{: #weapon_animation .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .weapon_animation
{: aria-label='Fields' }

___
